// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from atwork_interfaces:msg/Task.idl
// generated code does not contain a copyright notice

#ifndef ATWORK_INTERFACES__MSG__DETAIL__TASK__BUILDER_HPP_
#define ATWORK_INTERFACES__MSG__DETAIL__TASK__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "atwork_interfaces/msg/detail/task__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace atwork_interfaces
{

namespace msg
{

namespace builder
{

class Init_Task_commit
{
public:
  explicit Init_Task_commit(::atwork_interfaces::msg::Task & msg)
  : msg_(msg)
  {}
  ::atwork_interfaces::msg::Task commit(::atwork_interfaces::msg::Task::_commit_type arg)
  {
    msg_.commit = std::move(arg);
    return std::move(msg_);
  }

private:
  ::atwork_interfaces::msg::Task msg_;
};

class Init_Task_config
{
public:
  explicit Init_Task_config(::atwork_interfaces::msg::Task & msg)
  : msg_(msg)
  {}
  Init_Task_commit config(::atwork_interfaces::msg::Task::_config_type arg)
  {
    msg_.config = std::move(arg);
    return Init_Task_commit(msg_);
  }

private:
  ::atwork_interfaces::msg::Task msg_;
};

class Init_Task_id
{
public:
  explicit Init_Task_id(::atwork_interfaces::msg::Task & msg)
  : msg_(msg)
  {}
  Init_Task_config id(::atwork_interfaces::msg::Task::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_Task_config(msg_);
  }

private:
  ::atwork_interfaces::msg::Task msg_;
};

class Init_Task_type
{
public:
  explicit Init_Task_type(::atwork_interfaces::msg::Task & msg)
  : msg_(msg)
  {}
  Init_Task_id type(::atwork_interfaces::msg::Task::_type_type arg)
  {
    msg_.type = std::move(arg);
    return Init_Task_id(msg_);
  }

private:
  ::atwork_interfaces::msg::Task msg_;
};

class Init_Task_exec_time
{
public:
  explicit Init_Task_exec_time(::atwork_interfaces::msg::Task & msg)
  : msg_(msg)
  {}
  Init_Task_type exec_time(::atwork_interfaces::msg::Task::_exec_time_type arg)
  {
    msg_.exec_time = std::move(arg);
    return Init_Task_type(msg_);
  }

private:
  ::atwork_interfaces::msg::Task msg_;
};

class Init_Task_prep_time
{
public:
  explicit Init_Task_prep_time(::atwork_interfaces::msg::Task & msg)
  : msg_(msg)
  {}
  Init_Task_exec_time prep_time(::atwork_interfaces::msg::Task::_prep_time_type arg)
  {
    msg_.prep_time = std::move(arg);
    return Init_Task_exec_time(msg_);
  }

private:
  ::atwork_interfaces::msg::Task msg_;
};

class Init_Task_arena_target_state
{
public:
  explicit Init_Task_arena_target_state(::atwork_interfaces::msg::Task & msg)
  : msg_(msg)
  {}
  Init_Task_prep_time arena_target_state(::atwork_interfaces::msg::Task::_arena_target_state_type arg)
  {
    msg_.arena_target_state = std::move(arg);
    return Init_Task_prep_time(msg_);
  }

private:
  ::atwork_interfaces::msg::Task msg_;
};

class Init_Task_arena_start_state
{
public:
  explicit Init_Task_arena_start_state(::atwork_interfaces::msg::Task & msg)
  : msg_(msg)
  {}
  Init_Task_arena_target_state arena_start_state(::atwork_interfaces::msg::Task::_arena_start_state_type arg)
  {
    msg_.arena_start_state = std::move(arg);
    return Init_Task_arena_target_state(msg_);
  }

private:
  ::atwork_interfaces::msg::Task msg_;
};

class Init_Task_execute_on
{
public:
  explicit Init_Task_execute_on(::atwork_interfaces::msg::Task & msg)
  : msg_(msg)
  {}
  Init_Task_arena_start_state execute_on(::atwork_interfaces::msg::Task::_execute_on_type arg)
  {
    msg_.execute_on = std::move(arg);
    return Init_Task_arena_start_state(msg_);
  }

private:
  ::atwork_interfaces::msg::Task msg_;
};

class Init_Task_header
{
public:
  Init_Task_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Task_execute_on header(::atwork_interfaces::msg::Task::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Task_execute_on(msg_);
  }

private:
  ::atwork_interfaces::msg::Task msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::atwork_interfaces::msg::Task>()
{
  return atwork_interfaces::msg::builder::Init_Task_header();
}

}  // namespace atwork_interfaces

#endif  // ATWORK_INTERFACES__MSG__DETAIL__TASK__BUILDER_HPP_
