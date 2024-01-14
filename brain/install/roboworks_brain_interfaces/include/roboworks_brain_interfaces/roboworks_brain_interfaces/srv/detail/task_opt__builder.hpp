// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from roboworks_brain_interfaces:srv/TaskOpt.idl
// generated code does not contain a copyright notice

#ifndef ROBOWORKS_BRAIN_INTERFACES__SRV__DETAIL__TASK_OPT__BUILDER_HPP_
#define ROBOWORKS_BRAIN_INTERFACES__SRV__DETAIL__TASK_OPT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "roboworks_brain_interfaces/srv/detail/task_opt__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace roboworks_brain_interfaces
{

namespace srv
{

namespace builder
{

class Init_TaskOpt_Request_game_state
{
public:
  explicit Init_TaskOpt_Request_game_state(::roboworks_brain_interfaces::srv::TaskOpt_Request & msg)
  : msg_(msg)
  {}
  ::roboworks_brain_interfaces::srv::TaskOpt_Request game_state(::roboworks_brain_interfaces::srv::TaskOpt_Request::_game_state_type arg)
  {
    msg_.game_state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::roboworks_brain_interfaces::srv::TaskOpt_Request msg_;
};

class Init_TaskOpt_Request_task_list
{
public:
  Init_TaskOpt_Request_task_list()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TaskOpt_Request_game_state task_list(::roboworks_brain_interfaces::srv::TaskOpt_Request::_task_list_type arg)
  {
    msg_.task_list = std::move(arg);
    return Init_TaskOpt_Request_game_state(msg_);
  }

private:
  ::roboworks_brain_interfaces::srv::TaskOpt_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::roboworks_brain_interfaces::srv::TaskOpt_Request>()
{
  return roboworks_brain_interfaces::srv::builder::Init_TaskOpt_Request_task_list();
}

}  // namespace roboworks_brain_interfaces


namespace roboworks_brain_interfaces
{

namespace srv
{

namespace builder
{

class Init_TaskOpt_Response_masterlist
{
public:
  Init_TaskOpt_Response_masterlist()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::roboworks_brain_interfaces::srv::TaskOpt_Response masterlist(::roboworks_brain_interfaces::srv::TaskOpt_Response::_masterlist_type arg)
  {
    msg_.masterlist = std::move(arg);
    return std::move(msg_);
  }

private:
  ::roboworks_brain_interfaces::srv::TaskOpt_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::roboworks_brain_interfaces::srv::TaskOpt_Response>()
{
  return roboworks_brain_interfaces::srv::builder::Init_TaskOpt_Response_masterlist();
}

}  // namespace roboworks_brain_interfaces

#endif  // ROBOWORKS_BRAIN_INTERFACES__SRV__DETAIL__TASK_OPT__BUILDER_HPP_
