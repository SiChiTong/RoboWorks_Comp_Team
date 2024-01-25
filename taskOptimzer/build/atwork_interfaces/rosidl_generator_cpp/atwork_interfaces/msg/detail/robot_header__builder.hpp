// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from atwork_interfaces:msg/RobotHeader.idl
// generated code does not contain a copyright notice

#ifndef ATWORK_INTERFACES__MSG__DETAIL__ROBOT_HEADER__BUILDER_HPP_
#define ATWORK_INTERFACES__MSG__DETAIL__ROBOT_HEADER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "atwork_interfaces/msg/detail/robot_header__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace atwork_interfaces
{

namespace msg
{

namespace builder
{

class Init_RobotHeader_transforms
{
public:
  explicit Init_RobotHeader_transforms(::atwork_interfaces::msg::RobotHeader & msg)
  : msg_(msg)
  {}
  ::atwork_interfaces::msg::RobotHeader transforms(::atwork_interfaces::msg::RobotHeader::_transforms_type arg)
  {
    msg_.transforms = std::move(arg);
    return std::move(msg_);
  }

private:
  ::atwork_interfaces::msg::RobotHeader msg_;
};

class Init_RobotHeader_robot_name
{
public:
  explicit Init_RobotHeader_robot_name(::atwork_interfaces::msg::RobotHeader & msg)
  : msg_(msg)
  {}
  Init_RobotHeader_transforms robot_name(::atwork_interfaces::msg::RobotHeader::_robot_name_type arg)
  {
    msg_.robot_name = std::move(arg);
    return Init_RobotHeader_transforms(msg_);
  }

private:
  ::atwork_interfaces::msg::RobotHeader msg_;
};

class Init_RobotHeader_team_name
{
public:
  explicit Init_RobotHeader_team_name(::atwork_interfaces::msg::RobotHeader & msg)
  : msg_(msg)
  {}
  Init_RobotHeader_robot_name team_name(::atwork_interfaces::msg::RobotHeader::_team_name_type arg)
  {
    msg_.team_name = std::move(arg);
    return Init_RobotHeader_robot_name(msg_);
  }

private:
  ::atwork_interfaces::msg::RobotHeader msg_;
};

class Init_RobotHeader_header
{
public:
  Init_RobotHeader_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RobotHeader_team_name header(::atwork_interfaces::msg::RobotHeader::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_RobotHeader_team_name(msg_);
  }

private:
  ::atwork_interfaces::msg::RobotHeader msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::atwork_interfaces::msg::RobotHeader>()
{
  return atwork_interfaces::msg::builder::Init_RobotHeader_header();
}

}  // namespace atwork_interfaces

#endif  // ATWORK_INTERFACES__MSG__DETAIL__ROBOT_HEADER__BUILDER_HPP_
