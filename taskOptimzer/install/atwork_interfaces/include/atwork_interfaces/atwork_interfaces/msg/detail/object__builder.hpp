// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from atwork_interfaces:msg/Object.idl
// generated code does not contain a copyright notice

#ifndef ATWORK_INTERFACES__MSG__DETAIL__OBJECT__BUILDER_HPP_
#define ATWORK_INTERFACES__MSG__DETAIL__OBJECT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "atwork_interfaces/msg/detail/object__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace atwork_interfaces
{

namespace msg
{

namespace builder
{

class Init_Object_pose
{
public:
  explicit Init_Object_pose(::atwork_interfaces::msg::Object & msg)
  : msg_(msg)
  {}
  ::atwork_interfaces::msg::Object pose(::atwork_interfaces::msg::Object::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return std::move(msg_);
  }

private:
  ::atwork_interfaces::msg::Object msg_;
};

class Init_Object_decoy
{
public:
  explicit Init_Object_decoy(::atwork_interfaces::msg::Object & msg)
  : msg_(msg)
  {}
  Init_Object_pose decoy(::atwork_interfaces::msg::Object::_decoy_type arg)
  {
    msg_.decoy = std::move(arg);
    return Init_Object_pose(msg_);
  }

private:
  ::atwork_interfaces::msg::Object msg_;
};

class Init_Object_target
{
public:
  explicit Init_Object_target(::atwork_interfaces::msg::Object & msg)
  : msg_(msg)
  {}
  Init_Object_decoy target(::atwork_interfaces::msg::Object::_target_type arg)
  {
    msg_.target = std::move(arg);
    return Init_Object_decoy(msg_);
  }

private:
  ::atwork_interfaces::msg::Object msg_;
};

class Init_Object_object
{
public:
  Init_Object_object()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Object_target object(::atwork_interfaces::msg::Object::_object_type arg)
  {
    msg_.object = std::move(arg);
    return Init_Object_target(msg_);
  }

private:
  ::atwork_interfaces::msg::Object msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::atwork_interfaces::msg::Object>()
{
  return atwork_interfaces::msg::builder::Init_Object_object();
}

}  // namespace atwork_interfaces

#endif  // ATWORK_INTERFACES__MSG__DETAIL__OBJECT__BUILDER_HPP_
