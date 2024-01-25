// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from atwork_interfaces:msg/RobotHeader.idl
// generated code does not contain a copyright notice

#ifndef ATWORK_INTERFACES__MSG__DETAIL__ROBOT_HEADER__TRAITS_HPP_
#define ATWORK_INTERFACES__MSG__DETAIL__ROBOT_HEADER__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "atwork_interfaces/msg/detail/robot_header__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'transforms'
#include "geometry_msgs/msg/detail/transform_stamped__traits.hpp"

namespace atwork_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const RobotHeader & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: team_name
  {
    out << "team_name: ";
    rosidl_generator_traits::value_to_yaml(msg.team_name, out);
    out << ", ";
  }

  // member: robot_name
  {
    out << "robot_name: ";
    rosidl_generator_traits::value_to_yaml(msg.robot_name, out);
    out << ", ";
  }

  // member: transforms
  {
    if (msg.transforms.size() == 0) {
      out << "transforms: []";
    } else {
      out << "transforms: [";
      size_t pending_items = msg.transforms.size();
      for (auto item : msg.transforms) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RobotHeader & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: team_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "team_name: ";
    rosidl_generator_traits::value_to_yaml(msg.team_name, out);
    out << "\n";
  }

  // member: robot_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "robot_name: ";
    rosidl_generator_traits::value_to_yaml(msg.robot_name, out);
    out << "\n";
  }

  // member: transforms
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.transforms.size() == 0) {
      out << "transforms: []\n";
    } else {
      out << "transforms:\n";
      for (auto item : msg.transforms) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RobotHeader & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace atwork_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use atwork_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const atwork_interfaces::msg::RobotHeader & msg,
  std::ostream & out, size_t indentation = 0)
{
  atwork_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use atwork_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const atwork_interfaces::msg::RobotHeader & msg)
{
  return atwork_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<atwork_interfaces::msg::RobotHeader>()
{
  return "atwork_interfaces::msg::RobotHeader";
}

template<>
inline const char * name<atwork_interfaces::msg::RobotHeader>()
{
  return "atwork_interfaces/msg/RobotHeader";
}

template<>
struct has_fixed_size<atwork_interfaces::msg::RobotHeader>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<atwork_interfaces::msg::RobotHeader>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<atwork_interfaces::msg::RobotHeader>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ATWORK_INTERFACES__MSG__DETAIL__ROBOT_HEADER__TRAITS_HPP_
