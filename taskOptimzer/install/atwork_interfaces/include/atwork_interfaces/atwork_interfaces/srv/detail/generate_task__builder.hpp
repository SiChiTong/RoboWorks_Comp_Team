// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from atwork_interfaces:srv/GenerateTask.idl
// generated code does not contain a copyright notice

#ifndef ATWORK_INTERFACES__SRV__DETAIL__GENERATE_TASK__BUILDER_HPP_
#define ATWORK_INTERFACES__SRV__DETAIL__GENERATE_TASK__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "atwork_interfaces/srv/detail/generate_task__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace atwork_interfaces
{

namespace srv
{

namespace builder
{

class Init_GenerateTask_Request_task_name
{
public:
  Init_GenerateTask_Request_task_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::atwork_interfaces::srv::GenerateTask_Request task_name(::atwork_interfaces::srv::GenerateTask_Request::_task_name_type arg)
  {
    msg_.task_name = std::move(arg);
    return std::move(msg_);
  }

private:
  ::atwork_interfaces::srv::GenerateTask_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::atwork_interfaces::srv::GenerateTask_Request>()
{
  return atwork_interfaces::srv::builder::Init_GenerateTask_Request_task_name();
}

}  // namespace atwork_interfaces


namespace atwork_interfaces
{

namespace srv
{

namespace builder
{

class Init_GenerateTask_Response_error
{
public:
  explicit Init_GenerateTask_Response_error(::atwork_interfaces::srv::GenerateTask_Response & msg)
  : msg_(msg)
  {}
  ::atwork_interfaces::srv::GenerateTask_Response error(::atwork_interfaces::srv::GenerateTask_Response::_error_type arg)
  {
    msg_.error = std::move(arg);
    return std::move(msg_);
  }

private:
  ::atwork_interfaces::srv::GenerateTask_Response msg_;
};

class Init_GenerateTask_Response_task
{
public:
  Init_GenerateTask_Response_task()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GenerateTask_Response_error task(::atwork_interfaces::srv::GenerateTask_Response::_task_type arg)
  {
    msg_.task = std::move(arg);
    return Init_GenerateTask_Response_error(msg_);
  }

private:
  ::atwork_interfaces::srv::GenerateTask_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::atwork_interfaces::srv::GenerateTask_Response>()
{
  return atwork_interfaces::srv::builder::Init_GenerateTask_Response_task();
}

}  // namespace atwork_interfaces

#endif  // ATWORK_INTERFACES__SRV__DETAIL__GENERATE_TASK__BUILDER_HPP_
