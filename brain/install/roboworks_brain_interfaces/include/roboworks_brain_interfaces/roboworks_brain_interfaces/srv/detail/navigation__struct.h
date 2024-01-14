// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from roboworks_brain_interfaces:srv/Navigation.idl
// generated code does not contain a copyright notice

#ifndef ROBOWORKS_BRAIN_INTERFACES__SRV__DETAIL__NAVIGATION__STRUCT_H_
#define ROBOWORKS_BRAIN_INTERFACES__SRV__DETAIL__NAVIGATION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'goal_point'
#include "geometry_msgs/msg/detail/pose_stamped__struct.h"

/// Struct defined in srv/Navigation in the package roboworks_brain_interfaces.
typedef struct roboworks_brain_interfaces__srv__Navigation_Request
{
  /// goal point to move to
  geometry_msgs__msg__PoseStamped goal_point;
} roboworks_brain_interfaces__srv__Navigation_Request;

// Struct for a sequence of roboworks_brain_interfaces__srv__Navigation_Request.
typedef struct roboworks_brain_interfaces__srv__Navigation_Request__Sequence
{
  roboworks_brain_interfaces__srv__Navigation_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} roboworks_brain_interfaces__srv__Navigation_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'instruction'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/Navigation in the package roboworks_brain_interfaces.
typedef struct roboworks_brain_interfaces__srv__Navigation_Response
{
  /// 1 indicates task is complete, 0 means task failed
  uint32_t success;
  /// a requested instruction to be done before the next task in the master task list (e.g. to move left/right a little bit)
  rosidl_runtime_c__String instruction;
} roboworks_brain_interfaces__srv__Navigation_Response;

// Struct for a sequence of roboworks_brain_interfaces__srv__Navigation_Response.
typedef struct roboworks_brain_interfaces__srv__Navigation_Response__Sequence
{
  roboworks_brain_interfaces__srv__Navigation_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} roboworks_brain_interfaces__srv__Navigation_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROBOWORKS_BRAIN_INTERFACES__SRV__DETAIL__NAVIGATION__STRUCT_H_
