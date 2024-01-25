// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from atwork_interfaces:srv/TaskOpt.idl
// generated code does not contain a copyright notice

#ifndef ATWORK_INTERFACES__SRV__DETAIL__TASK_OPT__BUILDER_HPP_
#define ATWORK_INTERFACES__SRV__DETAIL__TASK_OPT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "atwork_interfaces/srv/detail/task_opt__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace atwork_interfaces
{

namespace srv
{

namespace builder
{

class Init_TaskOpt_Request_atwork_task
{
public:
  Init_TaskOpt_Request_atwork_task()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::atwork_interfaces::srv::TaskOpt_Request atwork_task(::atwork_interfaces::srv::TaskOpt_Request::_atwork_task_type arg)
  {
    msg_.atwork_task = std::move(arg);
    return std::move(msg_);
  }

private:
  ::atwork_interfaces::srv::TaskOpt_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::atwork_interfaces::srv::TaskOpt_Request>()
{
  return atwork_interfaces::srv::builder::Init_TaskOpt_Request_atwork_task();
}

}  // namespace atwork_interfaces


namespace atwork_interfaces
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
  ::atwork_interfaces::srv::TaskOpt_Response masterlist(::atwork_interfaces::srv::TaskOpt_Response::_masterlist_type arg)
  {
    msg_.masterlist = std::move(arg);
    return std::move(msg_);
  }

private:
  ::atwork_interfaces::srv::TaskOpt_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::atwork_interfaces::srv::TaskOpt_Response>()
{
  return atwork_interfaces::srv::builder::Init_TaskOpt_Response_masterlist();
}

}  // namespace atwork_interfaces

#endif  // ATWORK_INTERFACES__SRV__DETAIL__TASK_OPT__BUILDER_HPP_
