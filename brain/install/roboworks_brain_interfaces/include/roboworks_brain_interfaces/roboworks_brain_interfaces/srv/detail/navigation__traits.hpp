// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from roboworks_brain_interfaces:srv/Navigation.idl
// generated code does not contain a copyright notice

#ifndef ROBOWORKS_BRAIN_INTERFACES__SRV__DETAIL__NAVIGATION__TRAITS_HPP_
#define ROBOWORKS_BRAIN_INTERFACES__SRV__DETAIL__NAVIGATION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "roboworks_brain_interfaces/srv/detail/navigation__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'goal_point'
#include "geometry_msgs/msg/detail/pose_stamped__traits.hpp"

namespace roboworks_brain_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const Navigation_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_point
  {
    out << "goal_point: ";
    to_flow_style_yaml(msg.goal_point, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Navigation_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_point
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_point:\n";
    to_block_style_yaml(msg.goal_point, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Navigation_Request & msg, bool use_flow_style = false)
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
  const roboworks_brain_interfaces::srv::Navigation_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  roboworks_brain_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use roboworks_brain_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const roboworks_brain_interfaces::srv::Navigation_Request & msg)
{
  return roboworks_brain_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<roboworks_brain_interfaces::srv::Navigation_Request>()
{
  return "roboworks_brain_interfaces::srv::Navigation_Request";
}

template<>
inline const char * name<roboworks_brain_interfaces::srv::Navigation_Request>()
{
  return "roboworks_brain_interfaces/srv/Navigation_Request";
}

template<>
struct has_fixed_size<roboworks_brain_interfaces::srv::Navigation_Request>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::PoseStamped>::value> {};

template<>
struct has_bounded_size<roboworks_brain_interfaces::srv::Navigation_Request>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::PoseStamped>::value> {};

template<>
struct is_message<roboworks_brain_interfaces::srv::Navigation_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace roboworks_brain_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const Navigation_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << ", ";
  }

  // member: instruction
  {
    out << "instruction: ";
    rosidl_generator_traits::value_to_yaml(msg.instruction, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Navigation_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }

  // member: instruction
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "instruction: ";
    rosidl_generator_traits::value_to_yaml(msg.instruction, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Navigation_Response & msg, bool use_flow_style = false)
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
  const roboworks_brain_interfaces::srv::Navigation_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  roboworks_brain_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use roboworks_brain_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const roboworks_brain_interfaces::srv::Navigation_Response & msg)
{
  return roboworks_brain_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<roboworks_brain_interfaces::srv::Navigation_Response>()
{
  return "roboworks_brain_interfaces::srv::Navigation_Response";
}

template<>
inline const char * name<roboworks_brain_interfaces::srv::Navigation_Response>()
{
  return "roboworks_brain_interfaces/srv/Navigation_Response";
}

template<>
struct has_fixed_size<roboworks_brain_interfaces::srv::Navigation_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<roboworks_brain_interfaces::srv::Navigation_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<roboworks_brain_interfaces::srv::Navigation_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<roboworks_brain_interfaces::srv::Navigation>()
{
  return "roboworks_brain_interfaces::srv::Navigation";
}

template<>
inline const char * name<roboworks_brain_interfaces::srv::Navigation>()
{
  return "roboworks_brain_interfaces/srv/Navigation";
}

template<>
struct has_fixed_size<roboworks_brain_interfaces::srv::Navigation>
  : std::integral_constant<
    bool,
    has_fixed_size<roboworks_brain_interfaces::srv::Navigation_Request>::value &&
    has_fixed_size<roboworks_brain_interfaces::srv::Navigation_Response>::value
  >
{
};

template<>
struct has_bounded_size<roboworks_brain_interfaces::srv::Navigation>
  : std::integral_constant<
    bool,
    has_bounded_size<roboworks_brain_interfaces::srv::Navigation_Request>::value &&
    has_bounded_size<roboworks_brain_interfaces::srv::Navigation_Response>::value
  >
{
};

template<>
struct is_service<roboworks_brain_interfaces::srv::Navigation>
  : std::true_type
{
};

template<>
struct is_service_request<roboworks_brain_interfaces::srv::Navigation_Request>
  : std::true_type
{
};

template<>
struct is_service_response<roboworks_brain_interfaces::srv::Navigation_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // ROBOWORKS_BRAIN_INTERFACES__SRV__DETAIL__NAVIGATION__TRAITS_HPP_
