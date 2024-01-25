// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from atwork_interfaces:msg/Task.idl
// generated code does not contain a copyright notice

#ifndef ATWORK_INTERFACES__MSG__DETAIL__TASK__TRAITS_HPP_
#define ATWORK_INTERFACES__MSG__DETAIL__TASK__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "atwork_interfaces/msg/detail/task__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'execute_on'
#include "atwork_interfaces/msg/detail/robot_header__traits.hpp"
// Member 'arena_start_state'
// Member 'arena_target_state'
#include "atwork_interfaces/msg/detail/workstation__traits.hpp"
// Member 'prep_time'
// Member 'exec_time'
#include "builtin_interfaces/msg/detail/duration__traits.hpp"

namespace atwork_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const Task & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: execute_on
  {
    if (msg.execute_on.size() == 0) {
      out << "execute_on: []";
    } else {
      out << "execute_on: [";
      size_t pending_items = msg.execute_on.size();
      for (auto item : msg.execute_on) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: arena_start_state
  {
    if (msg.arena_start_state.size() == 0) {
      out << "arena_start_state: []";
    } else {
      out << "arena_start_state: [";
      size_t pending_items = msg.arena_start_state.size();
      for (auto item : msg.arena_start_state) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: arena_target_state
  {
    if (msg.arena_target_state.size() == 0) {
      out << "arena_target_state: []";
    } else {
      out << "arena_target_state: [";
      size_t pending_items = msg.arena_target_state.size();
      for (auto item : msg.arena_target_state) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: prep_time
  {
    out << "prep_time: ";
    to_flow_style_yaml(msg.prep_time, out);
    out << ", ";
  }

  // member: exec_time
  {
    out << "exec_time: ";
    to_flow_style_yaml(msg.exec_time, out);
    out << ", ";
  }

  // member: type
  {
    out << "type: ";
    rosidl_generator_traits::value_to_yaml(msg.type, out);
    out << ", ";
  }

  // member: id
  {
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << ", ";
  }

  // member: config
  {
    out << "config: ";
    rosidl_generator_traits::value_to_yaml(msg.config, out);
    out << ", ";
  }

  // member: commit
  {
    out << "commit: ";
    rosidl_generator_traits::value_to_yaml(msg.commit, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Task & msg,
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

  // member: execute_on
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.execute_on.size() == 0) {
      out << "execute_on: []\n";
    } else {
      out << "execute_on:\n";
      for (auto item : msg.execute_on) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: arena_start_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.arena_start_state.size() == 0) {
      out << "arena_start_state: []\n";
    } else {
      out << "arena_start_state:\n";
      for (auto item : msg.arena_start_state) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: arena_target_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.arena_target_state.size() == 0) {
      out << "arena_target_state: []\n";
    } else {
      out << "arena_target_state:\n";
      for (auto item : msg.arena_target_state) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: prep_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "prep_time:\n";
    to_block_style_yaml(msg.prep_time, out, indentation + 2);
  }

  // member: exec_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "exec_time:\n";
    to_block_style_yaml(msg.exec_time, out, indentation + 2);
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

  // member: id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << "\n";
  }

  // member: config
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "config: ";
    rosidl_generator_traits::value_to_yaml(msg.config, out);
    out << "\n";
  }

  // member: commit
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "commit: ";
    rosidl_generator_traits::value_to_yaml(msg.commit, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Task & msg, bool use_flow_style = false)
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
  const atwork_interfaces::msg::Task & msg,
  std::ostream & out, size_t indentation = 0)
{
  atwork_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use atwork_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const atwork_interfaces::msg::Task & msg)
{
  return atwork_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<atwork_interfaces::msg::Task>()
{
  return "atwork_interfaces::msg::Task";
}

template<>
inline const char * name<atwork_interfaces::msg::Task>()
{
  return "atwork_interfaces/msg/Task";
}

template<>
struct has_fixed_size<atwork_interfaces::msg::Task>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<atwork_interfaces::msg::Task>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<atwork_interfaces::msg::Task>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ATWORK_INTERFACES__MSG__DETAIL__TASK__TRAITS_HPP_
