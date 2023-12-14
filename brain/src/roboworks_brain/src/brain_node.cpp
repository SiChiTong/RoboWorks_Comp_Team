#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"
#include "example_interfaces/srv/add_two_ints.hpp"

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
      taskOp_client = this->create_client<example_interfaces::srv::AddTwoInts>("get_opt_list");
      armPickPlace_client = this->create_client<example_interfaces::srv::AddTwoInts>("pick_place");
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
        // Read in task here
      }

    }

    /*
    MASTER INSTRUCTION LIST
      After getting tasks from AT_Commander and getting back optimized list, brain will excute instructions in order of this list

      All other callbacks should only add or take away from this list to insert or remove instructions dynamically
    */
    std::list<std::string> masterList;


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
    rclcpp::Client<example_interfaces::srv::AddTwoInts>::SharedPtr armPickPlace_client;

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
  
  rclcpp::spin(brainNode);
  rclcpp::shutdown();


  /*
    NOT EL PLAN (THIS IS NOW BACK UP)
    Create individual nodes for each client and subscriber
    Use an excutor (See https://docs.ros.org/en/foxy/Tutorials/Demos/Intra-Process-Communication.html) to run them all at the same time.

  
  */

  
  printf("hello world brain_package package\n");
  return 0;
}
