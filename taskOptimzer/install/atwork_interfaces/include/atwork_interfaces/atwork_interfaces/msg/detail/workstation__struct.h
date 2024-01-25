// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from atwork_interfaces:msg/Workstation.idl
// generated code does not contain a copyright notice

#ifndef ATWORK_INTERFACES__MSG__DETAIL__WORKSTATION__STRUCT_H_
#define ATWORK_INTERFACES__MSG__DETAIL__WORKSTATION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'objects'
#include "atwork_interfaces/msg/detail/object__struct.h"
// Member 'name'
// Member 'type'
#include "rosidl_runtime_c/string.h"
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__struct.h"

/// Struct defined in msg/Workstation in the package atwork_interfaces.
/**
  * workstation.msg
 */
typedef struct atwork_interfaces__msg__Workstation
{
  atwork_interfaces__msg__Object__Sequence objects;
  /// either a workstation name or 'robot'
  /// (for end of RTT or start of PPT)
  rosidl_runtime_c__String name;
  rosidl_runtime_c__String type;
  geometry_msgs__msg__Pose pose;
} atwork_interfaces__msg__Workstation;

// Struct for a sequence of atwork_interfaces__msg__Workstation.
typedef struct atwork_interfaces__msg__Workstation__Sequence
{
  atwork_interfaces__msg__Workstation * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} atwork_interfaces__msg__Workstation__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ATWORK_INTERFACES__MSG__DETAIL__WORKSTATION__STRUCT_H_
