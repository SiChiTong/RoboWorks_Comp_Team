// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from atwork_interfaces:msg/Workstation.idl
// generated code does not contain a copyright notice

#ifndef ATWORK_INTERFACES__MSG__DETAIL__WORKSTATION__TRAITS_HPP_
#define ATWORK_INTERFACES__MSG__DETAIL__WORKSTATION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "atwork_interfaces/msg/detail/workstation__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'objects'
#include "atwork_interfaces/msg/detail/object__traits.hpp"
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__traits.hpp"

namespace atwork_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const Workstation & msg,
  std::ostream & out)
{
  out << "{";
  // member: objects
  {
    if (msg.objects.size() == 0) {
      out << "objects: []";
    } else {
      out << "objects: [";
      size_t pending_items = msg.objects.size();
      for (auto item : msg.objects) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: name
  {
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << ", ";
  }

  // member: type
  {
    out << "type: ";
    rosidl_generator_traits::value_to_yaml(msg.type, out);
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
  const Workstation & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: objects
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.objects.size() == 0) {
      out << "objects: []\n";
    } else {
      out << "objects:\n";
      for (auto item : msg.objects) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << "\n";
  }

  // member: type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "type: ";
    rosidl_generator_traits::value_to_yaml(msg.type, out);
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

inline std::string to_yaml(const Workstation & msg, bool use_flow_style = false)
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
  const atwork_interfaces::msg::Workstation & msg,
  std::ostream & out, size_t indentation = 0)
{
  atwork_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use atwork_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const atwork_interfaces::msg::Workstation & msg)
{
  return atwork_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<atwork_interfaces::msg::Workstation>()
{
  return "atwork_interfaces::msg::Workstation";
}

template<>
inline const char * name<atwork_interfaces::msg::Workstation>()
{
  return "atwork_interfaces/msg/Workstation";
}

template<>
struct has_fixed_size<atwork_interfaces::msg::Workstation>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<atwork_interfaces::msg::Workstation>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<atwork_interfaces::msg::Workstation>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ATWORK_INTERFACES__MSG__DETAIL__WORKSTATION__TRAITS_HPP_
