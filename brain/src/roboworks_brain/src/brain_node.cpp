#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"
#include "roboworks_brain_interfaces/srv/arm_brain.hpp"

#include <chrono>
#include <cstdlib>
#include <memory>
#include <iterator>
#include <list>


using std::placeholders::_1;


class brainNode : public rclcpp::Node
{
  public:
    brainNode()
    : Node("brainNode")
    {
      taskOp_client = this->create_client<roboworks_brain_interfaces::srv::AddTwoInts>("get_opt_list");
      armPickPlace_client = this->create_client<roboworks_brain_interfaces::srv::ArmBrain>("pick_place");
      navTo_client = this->create_client<example_interfaces::srv::AddTwoInts>("go_to_position");
      
      // Sub to atwork
      AT_sub = this->create_subscription<std_msgs::msg::String>("topic", 10, std::bind(&brainNode::AT_callback, this, _1));

    }

  private:

    // Function to recieve an information (Task List, Game State) from atwork_commander
    void AT_callback(const std_msgs::msg::String & msg)
    {
      RCLCPP_INFO(this->get_logger(), "I heard: '%s'", msg.data.c_str());

      // Take list from AT_Commander and give it 
      //auto request = std::make_shared<example_interfaces::srv::AddTwoInts::Request>();
      //Populate request here and send bellow
      // Bind request reciveing to master function
      //taskOp_client->async_send_request(request, std::bind(&brainNode::controller, this, _1))
    }


    // MASTER FUNCTION, this takes in the optimized list and sends commands based on that list
    void controller(const std_msgs::msg::String & msg)
    {
      RCLCPP_INFO(this->get_logger(), "I heard: '%s'", msg.data.c_str());
      //masterList = msg;

      for (auto it = masterList.begin(); it != masterList.end(); ++it) {

        // Read in task/instruction here and process

        this->executing = 1; // Indicate that another instruction is being executed now

        /*
          Bellow are the current possible instructions and their corresponding service call with callback fucntion
          Instructions at the moment will consist of the following at the moment:
            
            Move to location:
              List Instruction Example: "M W1" (Move workstation 1)
              Code Breakdown:
                1.  Get point to navigate to that corresponds to requested area
                2. navTo_client->async_send_request(request, std::bind(&brainNode::moving, this, _1))

            Pick up object:
              List Instruction Example: "PU <Object ID>" (Pickup Object)
              Code Breakdown:
                1. armPickPlace_client->async_send_request(request, std::bind(&brainNode::pickPlace, this, _1))
        
        */
        

        // Wait for instruction to finish
        while (this->executing == 1) {
           std::cout << "The previous instruction is still running!" << std::endl;
        }

      }

    }


    // Callback function for navigation service response, will recieve a msg that has (sucess/fail, new instruction)
    void moving(const std_msgs::msg::String & msg)
    {
      RCLCPP_INFO(this->get_logger(), "I heard: '%s'", msg.data.c_str());
      
      // If message is success indicate that task is complete to the controller function

      // If message is fail, read in new instruction (possibly do some processing), and then add it into the master instruction list to be excuted next

      this->executing = 0; // Let the controller move on to the next instruction in the master list
      
    }

    // Callback function for arm_brain service response, will recieve a msg that has (sucess/fail, new instruction)
    void pickPlace(rclcpp::Client<roboworks_brain_interfaces::srv::ArmBrain>::SharedFuture response)
    {
      auto result = response.get(); // Get service result
      RCLCPP_INFO(this->get_logger(), "pickPlace  responed!");
      
      // If message is fail (success == 0), read in new instruction (possibly do some processing), and then add it into the master instruction list to be executed next
      if (result->success == 0) {
        RCLCPP_INFO(this->get_logger(), "pickPlace heard new task: '%s'", result->instruction);
        
        // Maybe process the new instruction here if needed

        this->masterList.push_front(result->instruction); // Add new instruction to start of master list to be executed next
      }

      // If message is success just indicate that task is complete to the controller function
      this->executing = 0; // Let the controller move on to the next instruction in the master list

    }


    /*
    MASTER INSTRUCTION LIST
      After getting tasks from AT_Commander and getting back optimized list, brain will excute instructions in order of this list

      All other callbacks should only add or take away from this list to insert or remove instructions dynamically
    */
    std::list<std::string> masterList;

    /* 
      Master switch to indicate that the previous instruction is done with and the next instruction can be executed.
      1 means that there is instruction that is currently being executed, 0 means that there is nothing being done.

      Potentially in the future change this to an array to indicate if the arm or wheels are doing something individually, allowing
      tasks to be executed simulatanously
    */
    int executing = 0;





    // Subscriber to atwork_commander
    rclcpp::Subscription<std_msgs::msg::String>::SharedPtr AT_sub;

    /////////////////////////////////////////////////////////////   Clients to give commands to things ////////////////////////////////////
    // Client node to get optimized task list from the task_optimiser
    // Request: {Task List, Robot Position} 
    // Response: Optimised Command List
    rclcpp::Client<example_interfaces::srv::AddTwoInts>::SharedPtr taskOp_client;

    // Client node to get the arm to collect or place an item
    // Request: {Item ID, Operation(Collect/Place)}
    // Response: Success/Fail
    rclcpp::Client<roboworks_brain_interfaces::srv::ArmBrain>::SharedPtr armPickPlace_client;

    // Client node to get robot to travel to a particular location
    // Request: New Robot Position
    // Response: Arrived/Failed
    rclcpp::Client<example_interfaces::srv::AddTwoInts>::SharedPtr navTo_client;

};



int main(int argc, char ** argv)
{
  (void) argc;
  (void) argv;
  rclcpp::init(argc, argv);
  
  rclcpp::spin(std::make_shared<brainNode>());
  rclcpp::shutdown();


  /*
    NOT EL PLAN (THIS IS NOW BACK UP)
    Create individual nodes for each client and subscriber
    Use an excutor (See https://docs.ros.org/en/foxy/Tutorials/Demos/Intra-Process-Communication.html) to run them all at the same time.

  
  */

  
  printf("hello world brain_package package\n");
  return 0;
}
