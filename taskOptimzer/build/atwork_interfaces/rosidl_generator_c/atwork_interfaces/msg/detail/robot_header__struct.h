// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from atwork_interfaces:msg/RobotHeader.idl
// generated code does not contain a copyright notice

#ifndef ATWORK_INTERFACES__MSG__DETAIL__ROBOT_HEADER__STRUCT_H_
#define ATWORK_INTERFACES__MSG__DETAIL__ROBOT_HEADER__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'team_name'
// Member 'robot_name'
#include "rosidl_runtime_c/string.h"
// Member 'transforms'
#include "geometry_msgs/msg/detail/transform_stamped__struct.h"

/// Struct defined in msg/RobotHeader in the package atwork_interfaces.
/**
  * RobotHeader.msg
 */
typedef struct atwork_interfaces__msg__RobotHeader
{
  std_msgs__msg__Header header;
  rosidl_runtime_c__String team_name;
  rosidl_runtime_c__String robot_name;
  geometry_msgs__msg__TransformStamped__Sequence transforms;
} atwork_interfaces__msg__RobotHeader;

// Struct for a sequence of atwork_interfaces__msg__RobotHeader.
typedef struct atwork_interfaces__msg__RobotHeader__Sequence
{
  atwork_interfaces__msg__RobotHeader * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} atwork_interfaces__msg__RobotHeader__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ATWORK_INTERFACES__MSG__DETAIL__ROBOT_HEADER__STRUCT_H_
