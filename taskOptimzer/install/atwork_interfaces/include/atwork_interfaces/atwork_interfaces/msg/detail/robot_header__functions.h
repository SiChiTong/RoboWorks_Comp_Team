// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from atwork_interfaces:msg/RobotHeader.idl
// generated code does not contain a copyright notice

#ifndef ATWORK_INTERFACES__MSG__DETAIL__ROBOT_HEADER__FUNCTIONS_H_
#define ATWORK_INTERFACES__MSG__DETAIL__ROBOT_HEADER__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "atwork_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "atwork_interfaces/msg/detail/robot_header__struct.h"

/// Initialize msg/RobotHeader message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * atwork_interfaces__msg__RobotHeader
 * )) before or use
 * atwork_interfaces__msg__RobotHeader__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_atwork_interfaces
bool
atwork_interfaces__msg__RobotHeader__init(atwork_interfaces__msg__RobotHeader * msg);

/// Finalize msg/RobotHeader message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_atwork_interfaces
void
atwork_interfaces__msg__RobotHeader__fini(atwork_interfaces__msg__RobotHeader * msg);

/// Create msg/RobotHeader message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * atwork_interfaces__msg__RobotHeader__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_atwork_interfaces
atwork_interfaces__msg__RobotHeader *
atwork_interfaces__msg__RobotHeader__create();

/// Destroy msg/RobotHeader message.
/**
 * It calls
 * atwork_interfaces__msg__RobotHeader__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_atwork_interfaces
void
atwork_interfaces__msg__RobotHeader__destroy(atwork_interfaces__msg__RobotHeader * msg);

/// Check for msg/RobotHeader message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_atwork_interfaces
bool
atwork_interfaces__msg__RobotHeader__are_equal(const atwork_interfaces__msg__RobotHeader * lhs, const atwork_interfaces__msg__RobotHeader * rhs);

/// Copy a msg/RobotHeader message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_atwork_interfaces
bool
atwork_interfaces__msg__RobotHeader__copy(
  const atwork_interfaces__msg__RobotHeader * input,
  atwork_interfaces__msg__RobotHeader * output);

/// Initialize array of msg/RobotHeader messages.
/**
 * It allocates the memory for the number of elements and calls
 * atwork_interfaces__msg__RobotHeader__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_atwork_interfaces
bool
atwork_interfaces__msg__RobotHeader__Sequence__init(atwork_interfaces__msg__RobotHeader__Sequence * array, size_t size);

/// Finalize array of msg/RobotHeader messages.
/**
 * It calls
 * atwork_interfaces__msg__RobotHeader__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_atwork_interfaces
void
atwork_interfaces__msg__RobotHeader__Sequence__fini(atwork_interfaces__msg__RobotHeader__Sequence * array);

/// Create array of msg/RobotHeader messages.
/**
 * It allocates the memory for the array and calls
 * atwork_interfaces__msg__RobotHeader__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_atwork_interfaces
atwork_interfaces__msg__RobotHeader__Sequence *
atwork_interfaces__msg__RobotHeader__Sequence__create(size_t size);

/// Destroy array of msg/RobotHeader messages.
/**
 * It calls
 * atwork_interfaces__msg__RobotHeader__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_atwork_interfaces
void
atwork_interfaces__msg__RobotHeader__Sequence__destroy(atwork_interfaces__msg__RobotHeader__Sequence * array);

/// Check for msg/RobotHeader message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_atwork_interfaces
bool
atwork_interfaces__msg__RobotHeader__Sequence__are_equal(const atwork_interfaces__msg__RobotHeader__Sequence * lhs, const atwork_interfaces__msg__RobotHeader__Sequence * rhs);

/// Copy an array of msg/RobotHeader messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_atwork_interfaces
bool
atwork_interfaces__msg__RobotHeader__Sequence__copy(
  const atwork_interfaces__msg__RobotHeader__Sequence * input,
  atwork_interfaces__msg__RobotHeader__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // ATWORK_INTERFACES__MSG__DETAIL__ROBOT_HEADER__FUNCTIONS_H_
