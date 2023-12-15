// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from roboworks_brain_interfaces:srv/ArmBrain.idl
// generated code does not contain a copyright notice

#ifndef ROBOWORKS_BRAIN_INTERFACES__SRV__DETAIL__ARM_BRAIN__BUILDER_HPP_
#define ROBOWORKS_BRAIN_INTERFACES__SRV__DETAIL__ARM_BRAIN__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "roboworks_brain_interfaces/srv/detail/arm_brain__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace roboworks_brain_interfaces
{

namespace srv
{

namespace builder
{

class Init_ArmBrain_Request_object_id
{
public:
  explicit Init_ArmBrain_Request_object_id(::roboworks_brain_interfaces::srv::ArmBrain_Request & msg)
  : msg_(msg)
  {}
  ::roboworks_brain_interfaces::srv::ArmBrain_Request object_id(::roboworks_brain_interfaces::srv::ArmBrain_Request::_object_id_type arg)
  {
    msg_.object_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::roboworks_brain_interfaces::srv::ArmBrain_Request msg_;
};

class Init_ArmBrain_Request_operation_type
{
public:
  Init_ArmBrain_Request_operation_type()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ArmBrain_Request_object_id operation_type(::roboworks_brain_interfaces::srv::ArmBrain_Request::_operation_type_type arg)
  {
    msg_.operation_type = std::move(arg);
    return Init_ArmBrain_Request_object_id(msg_);
  }

private:
  ::roboworks_brain_interfaces::srv::ArmBrain_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::roboworks_brain_interfaces::srv::ArmBrain_Request>()
{
  return roboworks_brain_interfaces::srv::builder::Init_ArmBrain_Request_operation_type();
}

}  // namespace roboworks_brain_interfaces


namespace roboworks_brain_interfaces
{

namespace srv
{

namespace builder
{

class Init_ArmBrain_Response_instruction
{
public:
  explicit Init_ArmBrain_Response_instruction(::roboworks_brain_interfaces::srv::ArmBrain_Response & msg)
  : msg_(msg)
  {}
  ::roboworks_brain_interfaces::srv::ArmBrain_Response instruction(::roboworks_brain_interfaces::srv::ArmBrain_Response::_instruction_type arg)
  {
    msg_.instruction = std::move(arg);
    return std::move(msg_);
  }

private:
  ::roboworks_brain_interfaces::srv::ArmBrain_Response msg_;
};

class Init_ArmBrain_Response_success
{
public:
  Init_ArmBrain_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ArmBrain_Response_instruction success(::roboworks_brain_interfaces::srv::ArmBrain_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_ArmBrain_Response_instruction(msg_);
  }

private:
  ::roboworks_brain_interfaces::srv::ArmBrain_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::roboworks_brain_interfaces::srv::ArmBrain_Response>()
{
  return roboworks_brain_interfaces::srv::builder::Init_ArmBrain_Response_success();
}

}  // namespace roboworks_brain_interfaces

#endif  // ROBOWORKS_BRAIN_INTERFACES__SRV__DETAIL__ARM_BRAIN__BUILDER_HPP_
