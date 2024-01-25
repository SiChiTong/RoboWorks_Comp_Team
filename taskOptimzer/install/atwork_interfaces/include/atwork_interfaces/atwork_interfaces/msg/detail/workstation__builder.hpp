// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from atwork_interfaces:msg/Workstation.idl
// generated code does not contain a copyright notice

#ifndef ATWORK_INTERFACES__MSG__DETAIL__WORKSTATION__BUILDER_HPP_
#define ATWORK_INTERFACES__MSG__DETAIL__WORKSTATION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "atwork_interfaces/msg/detail/workstation__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace atwork_interfaces
{

namespace msg
{

namespace builder
{

class Init_Workstation_pose
{
public:
  explicit Init_Workstation_pose(::atwork_interfaces::msg::Workstation & msg)
  : msg_(msg)
  {}
  ::atwork_interfaces::msg::Workstation pose(::atwork_interfaces::msg::Workstation::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return std::move(msg_);
  }

private:
  ::atwork_interfaces::msg::Workstation msg_;
};

class Init_Workstation_type
{
public:
  explicit Init_Workstation_type(::atwork_interfaces::msg::Workstation & msg)
  : msg_(msg)
  {}
  Init_Workstation_pose type(::atwork_interfaces::msg::Workstation::_type_type arg)
  {
    msg_.type = std::move(arg);
    return Init_Workstation_pose(msg_);
  }

private:
  ::atwork_interfaces::msg::Workstation msg_;
};

class Init_Workstation_name
{
public:
  explicit Init_Workstation_name(::atwork_interfaces::msg::Workstation & msg)
  : msg_(msg)
  {}
  Init_Workstation_type name(::atwork_interfaces::msg::Workstation::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_Workstation_type(msg_);
  }

private:
  ::atwork_interfaces::msg::Workstation msg_;
};

class Init_Workstation_objects
{
public:
  Init_Workstation_objects()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Workstation_name objects(::atwork_interfaces::msg::Workstation::_objects_type arg)
  {
    msg_.objects = std::move(arg);
    return Init_Workstation_name(msg_);
  }

private:
  ::atwork_interfaces::msg::Workstation msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::atwork_interfaces::msg::Workstation>()
{
  return atwork_interfaces::msg::builder::Init_Workstation_objects();
}

}  // namespace atwork_interfaces

#endif  // ATWORK_INTERFACES__MSG__DETAIL__WORKSTATION__BUILDER_HPP_
