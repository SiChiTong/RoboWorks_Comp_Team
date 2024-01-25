// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from atwork_interfaces:msg/Object.idl
// generated code does not contain a copyright notice

#ifndef ATWORK_INTERFACES__MSG__DETAIL__OBJECT__TRAITS_HPP_
#define ATWORK_INTERFACES__MSG__DETAIL__OBJECT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "atwork_interfaces/msg/detail/object__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'pose'
#include "geometry_msgs/msg/detail/pose_stamped__traits.hpp"

namespace atwork_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const Object & msg,
  std::ostream & out)
{
  out << "{";
  // member: object
  {
    out << "object: ";
    rosidl_generator_traits::value_to_yaml(msg.object, out);
    out << ", ";
  }

  // member: target
  {
    out << "target: ";
    rosidl_generator_traits::value_to_yaml(msg.target, out);
    out << ", ";
  }

  // member: decoy
  {
    out << "decoy: ";
    rosidl_generator_traits::value_to_yaml(msg.decoy, out);
    out << ", ";
  }

  // member: pose
  {
    out << "pose: ";
    to_flow_style_yaml(msg.pose, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Object & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: object
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "object: ";
    rosidl_generator_traits::value_to_yaml(msg.object, out);
    out << "\n";
  }

  // member: target
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "target: ";
    rosidl_generator_traits::value_to_yaml(msg.target, out);
    out << "\n";
  }

  // member: decoy
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "decoy: ";
    rosidl_generator_traits::value_to_yaml(msg.decoy, out);
    out << "\n";
  }

  // member: pose
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pose:\n";
    to_block_style_yaml(msg.pose, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Object & msg, bool use_flow_style = false)
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
  const atwork_interfaces::msg::Object & msg,
  std::ostream & out, size_t indentation = 0)
{
  atwork_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use atwork_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const atwork_interfaces::msg::Object & msg)
{
  return atwork_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<atwork_interfaces::msg::Object>()
{
  return "atwork_interfaces::msg::Object";
}

template<>
inline const char * name<atwork_interfaces::msg::Object>()
{
  return "atwork_interfaces/msg/Object";
}

template<>
struct has_fixed_size<atwork_interfaces::msg::Object>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::PoseStamped>::value> {};

template<>
struct has_bounded_size<atwork_interfaces::msg::Object>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::PoseStamped>::value> {};

template<>
struct is_message<atwork_interfaces::msg::Object>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ATWORK_INTERFACES__MSG__DETAIL__OBJECT__TRAITS_HPP_
