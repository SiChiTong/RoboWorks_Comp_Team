// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from atwork_interfaces:srv/GenerateTask.idl
// generated code does not contain a copyright notice

#ifndef ATWORK_INTERFACES__SRV__DETAIL__GENERATE_TASK__TRAITS_HPP_
#define ATWORK_INTERFACES__SRV__DETAIL__GENERATE_TASK__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "atwork_interfaces/srv/detail/generate_task__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace atwork_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const GenerateTask_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: task_name
  {
    out << "task_name: ";
    rosidl_generator_traits::value_to_yaml(msg.task_name, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GenerateTask_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: task_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "task_name: ";
    rosidl_generator_traits::value_to_yaml(msg.task_name, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GenerateTask_Request & msg, bool use_flow_style = false)
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
  const atwork_interfaces::srv::GenerateTask_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  atwork_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use atwork_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const atwork_interfaces::srv::GenerateTask_Request & msg)
{
  return atwork_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<atwork_interfaces::srv::GenerateTask_Request>()
{
  return "atwork_interfaces::srv::GenerateTask_Request";
}

template<>
inline const char * name<atwork_interfaces::srv::GenerateTask_Request>()
{
  return "atwork_interfaces/srv/GenerateTask_Request";
}

template<>
struct has_fixed_size<atwork_interfaces::srv::GenerateTask_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<atwork_interfaces::srv::GenerateTask_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<atwork_interfaces::srv::GenerateTask_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'task'
#include "atwork_interfaces/msg/detail/task__traits.hpp"

namespace atwork_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const GenerateTask_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: task
  {
    out << "task: ";
    to_flow_style_yaml(msg.task, out);
    out << ", ";
  }

  // member: error
  {
    out << "error: ";
    rosidl_generator_traits::value_to_yaml(msg.error, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GenerateTask_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: task
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "task:\n";
    to_block_style_yaml(msg.task, out, indentation + 2);
  }

  // member: error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "error: ";
    rosidl_generator_traits::value_to_yaml(msg.error, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GenerateTask_Response & msg, bool use_flow_style = false)
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
  const atwork_interfaces::srv::GenerateTask_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  atwork_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use atwork_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const atwork_interfaces::srv::GenerateTask_Response & msg)
{
  return atwork_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<atwork_interfaces::srv::GenerateTask_Response>()
{
  return "atwork_interfaces::srv::GenerateTask_Response";
}

template<>
inline const char * name<atwork_interfaces::srv::GenerateTask_Response>()
{
  return "atwork_interfaces/srv/GenerateTask_Response";
}

template<>
struct has_fixed_size<atwork_interfaces::srv::GenerateTask_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<atwork_interfaces::srv::GenerateTask_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<atwork_interfaces::srv::GenerateTask_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<atwork_interfaces::srv::GenerateTask>()
{
  return "atwork_interfaces::srv::GenerateTask";
}

template<>
inline const char * name<atwork_interfaces::srv::GenerateTask>()
{
  return "atwork_interfaces/srv/GenerateTask";
}

template<>
struct has_fixed_size<atwork_interfaces::srv::GenerateTask>
  : std::integral_constant<
    bool,
    has_fixed_size<atwork_interfaces::srv::GenerateTask_Request>::value &&
    has_fixed_size<atwork_interfaces::srv::GenerateTask_Response>::value
  >
{
};

template<>
struct has_bounded_size<atwork_interfaces::srv::GenerateTask>
  : std::integral_constant<
    bool,
    has_bounded_size<atwork_interfaces::srv::GenerateTask_Request>::value &&
    has_bounded_size<atwork_interfaces::srv::GenerateTask_Response>::value
  >
{
};

template<>
struct is_service<atwork_interfaces::srv::GenerateTask>
  : std::true_type
{
};

template<>
struct is_service_request<atwork_interfaces::srv::GenerateTask_Request>
  : std::true_type
{
};

template<>
struct is_service_response<atwork_interfaces::srv::GenerateTask_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // ATWORK_INTERFACES__SRV__DETAIL__GENERATE_TASK__TRAITS_HPP_
