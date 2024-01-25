// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from atwork_interfaces:msg/Task.idl
// generated code does not contain a copyright notice

#ifndef ATWORK_INTERFACES__MSG__DETAIL__TASK__FUNCTIONS_H_
#define ATWORK_INTERFACES__MSG__DETAIL__TASK__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "atwork_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "atwork_interfaces/msg/detail/task__struct.h"

/// Initialize msg/Task message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * atwork_interfaces__msg__Task
 * )) before or use
 * atwork_interfaces__msg__Task__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_atwork_interfaces
bool
atwork_interfaces__msg__Task__init(atwork_interfaces__msg__Task * msg);

/// Finalize msg/Task message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_atwork_interfaces
void
atwork_interfaces__msg__Task__fini(atwork_interfaces__msg__Task * msg);

/// Create msg/Task message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * atwork_interfaces__msg__Task__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_atwork_interfaces
atwork_interfaces__msg__Task *
atwork_interfaces__msg__Task__create();

/// Destroy msg/Task message.
/**
 * It calls
 * atwork_interfaces__msg__Task__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_atwork_interfaces
void
atwork_interfaces__msg__Task__destroy(atwork_interfaces__msg__Task * msg);

/// Check for msg/Task message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_atwork_interfaces
bool
atwork_interfaces__msg__Task__are_equal(const atwork_interfaces__msg__Task * lhs, const atwork_interfaces__msg__Task * rhs);

/// Copy a msg/Task message.
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
atwork_interfaces__msg__Task__copy(
  const atwork_interfaces__msg__Task * input,
  atwork_interfaces__msg__Task * output);

/// Initialize array of msg/Task messages.
/**
 * It allocates the memory for the number of elements and calls
 * atwork_interfaces__msg__Task__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_atwork_interfaces
bool
atwork_interfaces__msg__Task__Sequence__init(atwork_interfaces__msg__Task__Sequence * array, size_t size);

/// Finalize array of msg/Task messages.
/**
 * It calls
 * atwork_interfaces__msg__Task__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_atwork_interfaces
void
atwork_interfaces__msg__Task__Sequence__fini(atwork_interfaces__msg__Task__Sequence * array);

/// Create array of msg/Task messages.
/**
 * It allocates the memory for the array and calls
 * atwork_interfaces__msg__Task__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_atwork_interfaces
atwork_interfaces__msg__Task__Sequence *
atwork_interfaces__msg__Task__Sequence__create(size_t size);

/// Destroy array of msg/Task messages.
/**
 * It calls
 * atwork_interfaces__msg__Task__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_atwork_interfaces
void
atwork_interfaces__msg__Task__Sequence__destroy(atwork_interfaces__msg__Task__Sequence * array);

/// Check for msg/Task message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_atwork_interfaces
bool
atwork_interfaces__msg__Task__Sequence__are_equal(const atwork_interfaces__msg__Task__Sequence * lhs, const atwork_interfaces__msg__Task__Sequence * rhs);

/// Copy an array of msg/Task messages.
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
atwork_interfaces__msg__Task__Sequence__copy(
  const atwork_interfaces__msg__Task__Sequence * input,
  atwork_interfaces__msg__Task__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // ATWORK_INTERFACES__MSG__DETAIL__TASK__FUNCTIONS_H_
