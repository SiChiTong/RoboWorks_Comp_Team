// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from atwork_interfaces:msg/Workstation.idl
// generated code does not contain a copyright notice

#ifndef ATWORK_INTERFACES__MSG__DETAIL__WORKSTATION__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define ATWORK_INTERFACES__MSG__DETAIL__WORKSTATION__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "atwork_interfaces/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "atwork_interfaces/msg/detail/workstation__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace atwork_interfaces
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_atwork_interfaces
cdr_serialize(
  const atwork_interfaces::msg::Workstation & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_atwork_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  atwork_interfaces::msg::Workstation & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_atwork_interfaces
get_serialized_size(
  const atwork_interfaces::msg::Workstation & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_atwork_interfaces
max_serialized_size_Workstation(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace atwork_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_atwork_interfaces
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, atwork_interfaces, msg, Workstation)();

#ifdef __cplusplus
}
#endif

#endif  // ATWORK_INTERFACES__MSG__DETAIL__WORKSTATION__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
