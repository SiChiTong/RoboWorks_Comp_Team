// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from roboworks_brain_interfaces:srv/TaskOpt.idl
// generated code does not contain a copyright notice

#ifndef ROBOWORKS_BRAIN_INTERFACES__SRV__DETAIL__TASK_OPT__STRUCT_H_
#define ROBOWORKS_BRAIN_INTERFACES__SRV__DETAIL__TASK_OPT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'task_list'
// Member 'game_state'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/TaskOpt in the package roboworks_brain_interfaces.
typedef struct roboworks_brain_interfaces__srv__TaskOpt_Request
{
  /// List of tasks to be completed (from atwork commander
  rosidl_runtime_c__String task_list;
  /// Game state desired (from atwork commander)
  rosidl_runtime_c__String game_state;
} roboworks_brain_interfaces__srv__TaskOpt_Request;

// Struct for a sequence of roboworks_brain_interfaces__srv__TaskOpt_Request.
typedef struct roboworks_brain_interfaces__srv__TaskOpt_Request__Sequence
{
  roboworks_brain_interfaces__srv__TaskOpt_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} roboworks_brain_interfaces__srv__TaskOpt_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'masterlist'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/TaskOpt in the package roboworks_brain_interfaces.
typedef struct roboworks_brain_interfaces__srv__TaskOpt_Response
{
  /// an optimized task list of instructions
  rosidl_runtime_c__String__Sequence masterlist;
} roboworks_brain_interfaces__srv__TaskOpt_Response;

// Struct for a sequence of roboworks_brain_interfaces__srv__TaskOpt_Response.
typedef struct roboworks_brain_interfaces__srv__TaskOpt_Response__Sequence
{
  roboworks_brain_interfaces__srv__TaskOpt_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} roboworks_brain_interfaces__srv__TaskOpt_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROBOWORKS_BRAIN_INTERFACES__SRV__DETAIL__TASK_OPT__STRUCT_H_
