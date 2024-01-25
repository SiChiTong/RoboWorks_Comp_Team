// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from atwork_interfaces:msg/Task.idl
// generated code does not contain a copyright notice

#ifndef ATWORK_INTERFACES__MSG__DETAIL__TASK__STRUCT_H_
#define ATWORK_INTERFACES__MSG__DETAIL__TASK__STRUCT_H_

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
// Member 'execute_on'
#include "atwork_interfaces/msg/detail/robot_header__struct.h"
// Member 'arena_start_state'
// Member 'arena_target_state'
#include "atwork_interfaces/msg/detail/workstation__struct.h"
// Member 'prep_time'
// Member 'exec_time'
#include "builtin_interfaces/msg/detail/duration__struct.h"
// Member 'type'
// Member 'config'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/Task in the package atwork_interfaces.
/**
  * Task.msg
 */
typedef struct atwork_interfaces__msg__Task
{
  std_msgs__msg__Header header;
  atwork_interfaces__msg__RobotHeader__Sequence execute_on;
  atwork_interfaces__msg__Workstation__Sequence arena_start_state;
  atwork_interfaces__msg__Workstation__Sequence arena_target_state;
  builtin_interfaces__msg__Duration prep_time;
  builtin_interfaces__msg__Duration exec_time;
  rosidl_runtime_c__String type;
  uint64_t id;
  rosidl_runtime_c__String config;
  uint64_t commit;
} atwork_interfaces__msg__Task;

// Struct for a sequence of atwork_interfaces__msg__Task.
typedef struct atwork_interfaces__msg__Task__Sequence
{
  atwork_interfaces__msg__Task * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} atwork_interfaces__msg__Task__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ATWORK_INTERFACES__MSG__DETAIL__TASK__STRUCT_H_
