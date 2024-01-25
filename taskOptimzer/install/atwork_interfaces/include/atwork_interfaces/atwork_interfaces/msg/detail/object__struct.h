// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from atwork_interfaces:msg/Object.idl
// generated code does not contain a copyright notice

#ifndef ATWORK_INTERFACES__MSG__DETAIL__OBJECT__STRUCT_H_
#define ATWORK_INTERFACES__MSG__DETAIL__OBJECT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'EMPTY'.
enum
{
  atwork_interfaces__msg__Object__EMPTY = 0
};

/// Constant 'ATWORK_START'.
/**
  * atwork
 */
enum
{
  atwork_interfaces__msg__Object__ATWORK_START = 11
};

/// Constant 'F20_20_B'.
enum
{
  atwork_interfaces__msg__Object__F20_20_B = 11
};

/// Constant 'F20_20_G'.
enum
{
  atwork_interfaces__msg__Object__F20_20_G = 12
};

/// Constant 'S40_40_B'.
enum
{
  atwork_interfaces__msg__Object__S40_40_B = 13
};

/// Constant 'S40_40_G'.
enum
{
  atwork_interfaces__msg__Object__S40_40_G = 14
};

/// Constant 'M20_100'.
enum
{
  atwork_interfaces__msg__Object__M20_100 = 15
};

/// Constant 'M20'.
enum
{
  atwork_interfaces__msg__Object__M20 = 16
};

/// Constant 'M30'.
enum
{
  atwork_interfaces__msg__Object__M30 = 17
};

/// Constant 'R20'.
enum
{
  atwork_interfaces__msg__Object__R20 = 18
};

/// Constant 'ATWORK_END'.
enum
{
  atwork_interfaces__msg__Object__ATWORK_END = 18
};

/// Constant 'ADVANCED_START'.
/**
  * advanced
 */
enum
{
  atwork_interfaces__msg__Object__ADVANCED_START = 20
};

/// Constant 'AXIS2'.
enum
{
  atwork_interfaces__msg__Object__AXIS2 = 20
};

/// Constant 'BEARING2'.
enum
{
  atwork_interfaces__msg__Object__BEARING2 = 21
};

/// Constant 'HOUSING'.
enum
{
  atwork_interfaces__msg__Object__HOUSING = 22
};

/// Constant 'MOTOR2'.
enum
{
  atwork_interfaces__msg__Object__MOTOR2 = 23
};

/// Constant 'SPACER'.
enum
{
  atwork_interfaces__msg__Object__SPACER = 24
};

/// Constant 'SCREWDRIVER'.
enum
{
  atwork_interfaces__msg__Object__SCREWDRIVER = 25
};

/// Constant 'WRENCH'.
enum
{
  atwork_interfaces__msg__Object__WRENCH = 26
};

/// Constant 'DRILL'.
enum
{
  atwork_interfaces__msg__Object__DRILL = 27
};

/// Constant 'ALLENKEY'.
enum
{
  atwork_interfaces__msg__Object__ALLENKEY = 28
};

/// Constant 'ADVANCED_END'.
enum
{
  atwork_interfaces__msg__Object__ADVANCED_END = 28
};

/// Constant 'ROCKIN_START'.
/**
  * rockin
 */
enum
{
  atwork_interfaces__msg__Object__ROCKIN_START = 30
};

/// Constant 'BEARING_BOX'.
enum
{
  atwork_interfaces__msg__Object__BEARING_BOX = 31
};

/// Constant 'BEARING'.
enum
{
  atwork_interfaces__msg__Object__BEARING = 32
};

/// Constant 'AXIS'.
enum
{
  atwork_interfaces__msg__Object__AXIS = 33
};

/// Constant 'DISTANCE_TUBE'.
enum
{
  atwork_interfaces__msg__Object__DISTANCE_TUBE = 34
};

/// Constant 'MOTOR'.
enum
{
  atwork_interfaces__msg__Object__MOTOR = 35
};

/// Constant 'ROCKIN_END'.
enum
{
  atwork_interfaces__msg__Object__ROCKIN_END = 35
};

/// Constant 'CONTAINER_START'.
/**
  * container
 */
enum
{
  atwork_interfaces__msg__Object__CONTAINER_START = 40
};

/// Constant 'CONTAINER_RED'.
enum
{
  atwork_interfaces__msg__Object__CONTAINER_RED = 40
};

/// Constant 'CONTAINER_BLUE'.
enum
{
  atwork_interfaces__msg__Object__CONTAINER_BLUE = 41
};

/// Constant 'CONTAINER_END'.
enum
{
  atwork_interfaces__msg__Object__CONTAINER_END = 41
};

/// Constant 'CAVITY_START'.
/**
  * cavity
 */
enum
{
  atwork_interfaces__msg__Object__CAVITY_START = 50
};

/// Constant 'F20_20_H'.
enum
{
  atwork_interfaces__msg__Object__F20_20_H = 50
};

/// Constant 'F20_20_V'.
enum
{
  atwork_interfaces__msg__Object__F20_20_V = 51
};

/// Constant 'F20_20_F'.
enum
{
  atwork_interfaces__msg__Object__F20_20_F = 52
};

/// Constant 'S40_40_H'.
enum
{
  atwork_interfaces__msg__Object__S40_40_H = 53
};

/// Constant 'S40_40_V'.
enum
{
  atwork_interfaces__msg__Object__S40_40_V = 54
};

/// Constant 'S40_40_F'.
enum
{
  atwork_interfaces__msg__Object__S40_40_F = 55
};

/// Constant 'M20_H'.
enum
{
  atwork_interfaces__msg__Object__M20_H = 56
};

/// Constant 'M20_V'.
enum
{
  atwork_interfaces__msg__Object__M20_V = 57
};

/// Constant 'M20_F'.
enum
{
  atwork_interfaces__msg__Object__M20_F = 58
};

/// Constant 'M20_100_H'.
enum
{
  atwork_interfaces__msg__Object__M20_100_H = 59
};

/// Constant 'M20_100_V'.
enum
{
  atwork_interfaces__msg__Object__M20_100_V = 60
};

/// Constant 'M20_100_F'.
enum
{
  atwork_interfaces__msg__Object__M20_100_F = 61
};

/// Constant 'M30_H'.
enum
{
  atwork_interfaces__msg__Object__M30_H = 62
};

/// Constant 'M30_V'.
enum
{
  atwork_interfaces__msg__Object__M30_V = 63
};

/// Constant 'M30_F'.
enum
{
  atwork_interfaces__msg__Object__M30_F = 64
};

/// Constant 'R20_H'.
enum
{
  atwork_interfaces__msg__Object__R20_H = 65
};

/// Constant 'R20_V'.
enum
{
  atwork_interfaces__msg__Object__R20_V = 66
};

/// Constant 'R20_F'.
enum
{
  atwork_interfaces__msg__Object__R20_F = 67
};

/// Constant 'CAVITY_END'.
enum
{
  atwork_interfaces__msg__Object__CAVITY_END = 67
};

// Include directives for member types
// Member 'pose'
#include "geometry_msgs/msg/detail/pose_stamped__struct.h"

/// Struct defined in msg/Object in the package atwork_interfaces.
/**
  * Object.msg
 */
typedef struct atwork_interfaces__msg__Object
{
  uint16_t object;
  uint16_t target;
  bool decoy;
  geometry_msgs__msg__PoseStamped pose;
} atwork_interfaces__msg__Object;

// Struct for a sequence of atwork_interfaces__msg__Object.
typedef struct atwork_interfaces__msg__Object__Sequence
{
  atwork_interfaces__msg__Object * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} atwork_interfaces__msg__Object__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ATWORK_INTERFACES__MSG__DETAIL__OBJECT__STRUCT_H_
