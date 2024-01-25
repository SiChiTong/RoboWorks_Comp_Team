/*
For the expected message type from atwork commander SEE: https://github.com/robocup-at-work/atwork-commander/blob/master/atwork_commander_msgs/msg/Task.msg

We will get the currret world state and the target world state

From that we have to work out what we have to do next

*/

#include <chrono>
#include <cstdlib>
#include <memory>
#include <iterator>
#include <list>
#include <string>
#include <iostream>
#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"

#include "atwork_interfaces/srv/generate_task.hpp"
#include "atwork_interfaces/srv/task_opt.hpp"
#include "atwork_interfaces/msg/task.hpp"

using std::placeholders::_1;

class taskOptNode : public rclcpp::Node
{
  public:
    taskOptNode()
    : Node("taskOptNode")
    {
      taskOpt_service = this->create_service<atwork_interfaces::srv::TaskOpt>("Generate optimal plan", &generateTaskList);
      
    }

  private:
    // Service node to get optimized task list from the task_optimiser
    // Request: {Task List, Robot Position} 
    // Response: Optimised Command List
    rclcpp::Service<atwork_interfaces::srv::TaskOpt>::SharedPtr taskOpt_service;


    void generateTaskList(const std::shared_ptr<atwork_interfaces::srv::TaskOpt::Request> request,
                              std::shared_ptr<atwork_interfaces::srv::TaskOpt::Response> response) {

      atwork_interfaces::msg::Task newTask = request->atwork_task;

      auto startState = newTask.arena_start_state;
      auto endState = newTask.arena_target_state;
      
    
    }




};


int main(int argc, char ** argv)
{
  (void) argc;
  (void) argv;

  printf("hello world roboworks_taskOpt package\n");
  return 0;
}
