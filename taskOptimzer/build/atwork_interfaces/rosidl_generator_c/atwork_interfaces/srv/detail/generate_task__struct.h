// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from atwork_interfaces:srv/GenerateTask.idl
// generated code does not contain a copyright notice

#ifndef ATWORK_INTERFACES__SRV__DETAIL__GENERATE_TASK__STRUCT_H_
#define ATWORK_INTERFACES__SRV__DETAIL__GENERATE_TASK__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'task_name'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/GenerateTask in the package atwork_interfaces.
typedef struct atwork_interfaces__srv__GenerateTask_Request
{
  rosidl_runtime_c__String task_name;
} atwork_interfaces__srv__GenerateTask_Request;

// Struct for a sequence of atwork_interfaces__srv__GenerateTask_Request.
typedef struct atwork_interfaces__srv__GenerateTask_Request__Sequence
{
  atwork_interfaces__srv__GenerateTask_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} atwork_interfaces__srv__GenerateTask_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'task'
#include "atwork_interfaces/msg/detail/task__struct.h"
// Member 'error'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/GenerateTask in the package atwork_interfaces.
typedef struct atwork_interfaces__srv__GenerateTask_Response
{
  atwork_interfaces__msg__Task task;
  rosidl_runtime_c__String error;
} atwork_interfaces__srv__GenerateTask_Response;

// Struct for a sequence of atwork_interfaces__srv__GenerateTask_Response.
typedef struct atwork_interfaces__srv__GenerateTask_Response__Sequence
{
  atwork_interfaces__srv__GenerateTask_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} atwork_interfaces__srv__GenerateTask_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ATWORK_INTERFACES__SRV__DETAIL__GENERATE_TASK__STRUCT_H_
