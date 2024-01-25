// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from atwork_interfaces:srv/TaskOpt.idl
// generated code does not contain a copyright notice

#ifndef ATWORK_INTERFACES__SRV__DETAIL__TASK_OPT__TRAITS_HPP_
#define ATWORK_INTERFACES__SRV__DETAIL__TASK_OPT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "atwork_interfaces/srv/detail/task_opt__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'atwork_task'
#include "atwork_interfaces/msg/detail/task__traits.hpp"

namespace atwork_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const TaskOpt_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: atwork_task
  {
    out << "atwork_task: ";
    to_flow_style_yaml(msg.atwork_task, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TaskOpt_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: atwork_task
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "atwork_task:\n";
    to_block_style_yaml(msg.atwork_task, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TaskOpt_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace atwork_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use atwork_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const atwork_interfaces::srv::TaskOpt_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  atwork_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use atwork_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const atwork_interfaces::srv::TaskOpt_Request & msg)
{
  return atwork_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<atwork_interfaces::srv::TaskOpt_Request>()
{
  return "atwork_interfaces::srv::TaskOpt_Request";
}

template<>
inline const char * name<atwork_interfaces::srv::TaskOpt_Request>()
{
  return "atwork_interfaces/srv/TaskOpt_Request";
}

template<>
struct has_fixed_size<atwork_interfaces::srv::TaskOpt_Request>
  : std::integral_constant<bool, has_fixed_size<atwork_interfaces::msg::Task>::value> {};

template<>
struct has_bounded_size<atwork_interfaces::srv::TaskOpt_Request>
  : std::integral_constant<bool, has_bounded_size<atwork_interfaces::msg::Task>::value> {};

template<>
struct is_message<atwork_interfaces::srv::TaskOpt_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace atwork_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const TaskOpt_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: masterlist
  {
    if (msg.masterlist.size() == 0) {
      out << "masterlist: []";
    } else {
      out << "masterlist: [";
      size_t pending_items = msg.masterlist.size();
      for (auto item : msg.masterlist) {
        rosidl_generator_traits::value_to_yaml(item, out);
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
  const TaskOpt_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: masterlist
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.masterlist.size() == 0) {
      out << "masterlist: []\n";
    } else {
      out << "masterlist:\n";
      for (auto item : msg.masterlist) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TaskOpt_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace atwork_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use atwork_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const atwork_interfaces::srv::TaskOpt_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  atwork_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use atwork_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const atwork_interfaces::srv::TaskOpt_Response & msg)
{
  return atwork_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<atwork_interfaces::srv::TaskOpt_Response>()
{
  return "atwork_interfaces::srv::TaskOpt_Response";
}

template<>
inline const char * name<atwork_interfaces::srv::TaskOpt_Response>()
{
  return "atwork_interfaces/srv/TaskOpt_Response";
}

template<>
struct has_fixed_size<atwork_interfaces::srv::TaskOpt_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<atwork_interfaces::srv::TaskOpt_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<atwork_interfaces::srv::TaskOpt_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<atwork_interfaces::srv::TaskOpt>()
{
  return "atwork_interfaces::srv::TaskOpt";
}

template<>
inline const char * name<atwork_interfaces::srv::TaskOpt>()
{
  return "atwork_interfaces/srv/TaskOpt";
}

template<>
struct has_fixed_size<atwork_interfaces::srv::TaskOpt>
  : std::integral_constant<
    bool,
    has_fixed_size<atwork_interfaces::srv::TaskOpt_Request>::value &&
    has_fixed_size<atwork_interfaces::srv::TaskOpt_Response>::value
  >
{
};

template<>
struct has_bounded_size<atwork_interfaces::srv::TaskOpt>
  : std::integral_constant<
    bool,
    has_bounded_size<atwork_interfaces::srv::TaskOpt_Request>::value &&
    has_bounded_size<atwork_interfaces::srv::TaskOpt_Response>::value
  >
{
};

template<>
struct is_service<atwork_interfaces::srv::TaskOpt>
  : std::true_type
{
};

template<>
struct is_service_request<atwork_interfaces::srv::TaskOpt_Request>
  : std::true_type
{
};

template<>
struct is_service_response<atwork_interfaces::srv::TaskOpt_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // ATWORK_INTERFACES__SRV__DETAIL__TASK_OPT__TRAITS_HPP_
