// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from roboworks_brain_interfaces:srv/TaskOpt.idl
// generated code does not contain a copyright notice

#ifndef ROBOWORKS_BRAIN_INTERFACES__SRV__DETAIL__TASK_OPT__TRAITS_HPP_
#define ROBOWORKS_BRAIN_INTERFACES__SRV__DETAIL__TASK_OPT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "roboworks_brain_interfaces/srv/detail/task_opt__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace roboworks_brain_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const TaskOpt_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: task_list
  {
    out << "task_list: ";
    rosidl_generator_traits::value_to_yaml(msg.task_list, out);
    out << ", ";
  }

  // member: game_state
  {
    out << "game_state: ";
    rosidl_generator_traits::value_to_yaml(msg.game_state, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TaskOpt_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: task_list
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "task_list: ";
    rosidl_generator_traits::value_to_yaml(msg.task_list, out);
    out << "\n";
  }

  // member: game_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "game_state: ";
    rosidl_generator_traits::value_to_yaml(msg.game_state, out);
    out << "\n";
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

}  // namespace roboworks_brain_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use roboworks_brain_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const roboworks_brain_interfaces::srv::TaskOpt_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  roboworks_brain_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use roboworks_brain_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const roboworks_brain_interfaces::srv::TaskOpt_Request & msg)
{
  return roboworks_brain_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<roboworks_brain_interfaces::srv::TaskOpt_Request>()
{
  return "roboworks_brain_interfaces::srv::TaskOpt_Request";
}

template<>
inline const char * name<roboworks_brain_interfaces::srv::TaskOpt_Request>()
{
  return "roboworks_brain_interfaces/srv/TaskOpt_Request";
}

template<>
struct has_fixed_size<roboworks_brain_interfaces::srv::TaskOpt_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<roboworks_brain_interfaces::srv::TaskOpt_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<roboworks_brain_interfaces::srv::TaskOpt_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace roboworks_brain_interfaces
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

}  // namespace roboworks_brain_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use roboworks_brain_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const roboworks_brain_interfaces::srv::TaskOpt_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  roboworks_brain_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use roboworks_brain_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const roboworks_brain_interfaces::srv::TaskOpt_Response & msg)
{
  return roboworks_brain_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<roboworks_brain_interfaces::srv::TaskOpt_Response>()
{
  return "roboworks_brain_interfaces::srv::TaskOpt_Response";
}

template<>
inline const char * name<roboworks_brain_interfaces::srv::TaskOpt_Response>()
{
  return "roboworks_brain_interfaces/srv/TaskOpt_Response";
}

template<>
struct has_fixed_size<roboworks_brain_interfaces::srv::TaskOpt_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<roboworks_brain_interfaces::srv::TaskOpt_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<roboworks_brain_interfaces::srv::TaskOpt_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<roboworks_brain_interfaces::srv::TaskOpt>()
{
  return "roboworks_brain_interfaces::srv::TaskOpt";
}

template<>
inline const char * name<roboworks_brain_interfaces::srv::TaskOpt>()
{
  return "roboworks_brain_interfaces/srv/TaskOpt";
}

template<>
struct has_fixed_size<roboworks_brain_interfaces::srv::TaskOpt>
  : std::integral_constant<
    bool,
    has_fixed_size<roboworks_brain_interfaces::srv::TaskOpt_Request>::value &&
    has_fixed_size<roboworks_brain_interfaces::srv::TaskOpt_Response>::value
  >
{
};

template<>
struct has_bounded_size<roboworks_brain_interfaces::srv::TaskOpt>
  : std::integral_constant<
    bool,
    has_bounded_size<roboworks_brain_interfaces::srv::TaskOpt_Request>::value &&
    has_bounded_size<roboworks_brain_interfaces::srv::TaskOpt_Response>::value
  >
{
};

template<>
struct is_service<roboworks_brain_interfaces::srv::TaskOpt>
  : std::true_type
{
};

template<>
struct is_service_request<roboworks_brain_interfaces::srv::TaskOpt_Request>
  : std::true_type
{
};

template<>
struct is_service_response<roboworks_brain_interfaces::srv::TaskOpt_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // ROBOWORKS_BRAIN_INTERFACES__SRV__DETAIL__TASK_OPT__TRAITS_HPP_
