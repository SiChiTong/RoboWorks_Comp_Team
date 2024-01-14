// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from roboworks_brain_interfaces:srv/Navigation.idl
// generated code does not contain a copyright notice

#ifndef ROBOWORKS_BRAIN_INTERFACES__SRV__DETAIL__NAVIGATION__BUILDER_HPP_
#define ROBOWORKS_BRAIN_INTERFACES__SRV__DETAIL__NAVIGATION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "roboworks_brain_interfaces/srv/detail/navigation__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace roboworks_brain_interfaces
{

namespace srv
{

namespace builder
{

class Init_Navigation_Request_goal_point
{
public:
  Init_Navigation_Request_goal_point()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::roboworks_brain_interfaces::srv::Navigation_Request goal_point(::roboworks_brain_interfaces::srv::Navigation_Request::_goal_point_type arg)
  {
    msg_.goal_point = std::move(arg);
    return std::move(msg_);
  }

private:
  ::roboworks_brain_interfaces::srv::Navigation_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::roboworks_brain_interfaces::srv::Navigation_Request>()
{
  return roboworks_brain_interfaces::srv::builder::Init_Navigation_Request_goal_point();
}

}  // namespace roboworks_brain_interfaces


namespace roboworks_brain_interfaces
{

namespace srv
{

namespace builder
{

class Init_Navigation_Response_instruction
{
public:
  explicit Init_Navigation_Response_instruction(::roboworks_brain_interfaces::srv::Navigation_Response & msg)
  : msg_(msg)
  {}
  ::roboworks_brain_interfaces::srv::Navigation_Response instruction(::roboworks_brain_interfaces::srv::Navigation_Response::_instruction_type arg)
  {
    msg_.instruction = std::move(arg);
    return std::move(msg_);
  }

private:
  ::roboworks_brain_interfaces::srv::Navigation_Response msg_;
};

class Init_Navigation_Response_success
{
public:
  Init_Navigation_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Navigation_Response_instruction success(::roboworks_brain_interfaces::srv::Navigation_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_Navigation_Response_instruction(msg_);
  }

private:
  ::roboworks_brain_interfaces::srv::Navigation_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::roboworks_brain_interfaces::srv::Navigation_Response>()
{
  return roboworks_brain_interfaces::srv::builder::Init_Navigation_Response_success();
}

}  // namespace roboworks_brain_interfaces

#endif  // ROBOWORKS_BRAIN_INTERFACES__SRV__DETAIL__NAVIGATION__BUILDER_HPP_
