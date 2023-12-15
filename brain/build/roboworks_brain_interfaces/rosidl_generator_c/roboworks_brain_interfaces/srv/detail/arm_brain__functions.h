// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from roboworks_brain_interfaces:srv/ArmBrain.idl
// generated code does not contain a copyright notice

#ifndef ROBOWORKS_BRAIN_INTERFACES__SRV__DETAIL__ARM_BRAIN__FUNCTIONS_H_
#define ROBOWORKS_BRAIN_INTERFACES__SRV__DETAIL__ARM_BRAIN__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "roboworks_brain_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "roboworks_brain_interfaces/srv/detail/arm_brain__struct.h"

/// Initialize srv/ArmBrain message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * roboworks_brain_interfaces__srv__ArmBrain_Request
 * )) before or use
 * roboworks_brain_interfaces__srv__ArmBrain_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_roboworks_brain_interfaces
bool
roboworks_brain_interfaces__srv__ArmBrain_Request__init(roboworks_brain_interfaces__srv__ArmBrain_Request * msg);

/// Finalize srv/ArmBrain message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_roboworks_brain_interfaces
void
roboworks_brain_interfaces__srv__ArmBrain_Request__fini(roboworks_brain_interfaces__srv__ArmBrain_Request * msg);

/// Create srv/ArmBrain message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * roboworks_brain_interfaces__srv__ArmBrain_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_roboworks_brain_interfaces
roboworks_brain_interfaces__srv__ArmBrain_Request *
roboworks_brain_interfaces__srv__ArmBrain_Request__create();

/// Destroy srv/ArmBrain message.
/**
 * It calls
 * roboworks_brain_interfaces__srv__ArmBrain_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_roboworks_brain_interfaces
void
roboworks_brain_interfaces__srv__ArmBrain_Request__destroy(roboworks_brain_interfaces__srv__ArmBrain_Request * msg);

/// Check for srv/ArmBrain message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_roboworks_brain_interfaces
bool
roboworks_brain_interfaces__srv__ArmBrain_Request__are_equal(const roboworks_brain_interfaces__srv__ArmBrain_Request * lhs, const roboworks_brain_interfaces__srv__ArmBrain_Request * rhs);

/// Copy a srv/ArmBrain message.
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
ROSIDL_GENERATOR_C_PUBLIC_roboworks_brain_interfaces
bool
roboworks_brain_interfaces__srv__ArmBrain_Request__copy(
  const roboworks_brain_interfaces__srv__ArmBrain_Request * input,
  roboworks_brain_interfaces__srv__ArmBrain_Request * output);

/// Initialize array of srv/ArmBrain messages.
/**
 * It allocates the memory for the number of elements and calls
 * roboworks_brain_interfaces__srv__ArmBrain_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_roboworks_brain_interfaces
bool
roboworks_brain_interfaces__srv__ArmBrain_Request__Sequence__init(roboworks_brain_interfaces__srv__ArmBrain_Request__Sequence * array, size_t size);

/// Finalize array of srv/ArmBrain messages.
/**
 * It calls
 * roboworks_brain_interfaces__srv__ArmBrain_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_roboworks_brain_interfaces
void
roboworks_brain_interfaces__srv__ArmBrain_Request__Sequence__fini(roboworks_brain_interfaces__srv__ArmBrain_Request__Sequence * array);

/// Create array of srv/ArmBrain messages.
/**
 * It allocates the memory for the array and calls
 * roboworks_brain_interfaces__srv__ArmBrain_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_roboworks_brain_interfaces
roboworks_brain_interfaces__srv__ArmBrain_Request__Sequence *
roboworks_brain_interfaces__srv__ArmBrain_Request__Sequence__create(size_t size);

/// Destroy array of srv/ArmBrain messages.
/**
 * It calls
 * roboworks_brain_interfaces__srv__ArmBrain_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_roboworks_brain_interfaces
void
roboworks_brain_interfaces__srv__ArmBrain_Request__Sequence__destroy(roboworks_brain_interfaces__srv__ArmBrain_Request__Sequence * array);

/// Check for srv/ArmBrain message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_roboworks_brain_interfaces
bool
roboworks_brain_interfaces__srv__ArmBrain_Request__Sequence__are_equal(const roboworks_brain_interfaces__srv__ArmBrain_Request__Sequence * lhs, const roboworks_brain_interfaces__srv__ArmBrain_Request__Sequence * rhs);

/// Copy an array of srv/ArmBrain messages.
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
ROSIDL_GENERATOR_C_PUBLIC_roboworks_brain_interfaces
bool
roboworks_brain_interfaces__srv__ArmBrain_Request__Sequence__copy(
  const roboworks_brain_interfaces__srv__ArmBrain_Request__Sequence * input,
  roboworks_brain_interfaces__srv__ArmBrain_Request__Sequence * output);

/// Initialize srv/ArmBrain message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * roboworks_brain_interfaces__srv__ArmBrain_Response
 * )) before or use
 * roboworks_brain_interfaces__srv__ArmBrain_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_roboworks_brain_interfaces
bool
roboworks_brain_interfaces__srv__ArmBrain_Response__init(roboworks_brain_interfaces__srv__ArmBrain_Response * msg);

/// Finalize srv/ArmBrain message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_roboworks_brain_interfaces
void
roboworks_brain_interfaces__srv__ArmBrain_Response__fini(roboworks_brain_interfaces__srv__ArmBrain_Response * msg);

/// Create srv/ArmBrain message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * roboworks_brain_interfaces__srv__ArmBrain_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_roboworks_brain_interfaces
roboworks_brain_interfaces__srv__ArmBrain_Response *
roboworks_brain_interfaces__srv__ArmBrain_Response__create();

/// Destroy srv/ArmBrain message.
/**
 * It calls
 * roboworks_brain_interfaces__srv__ArmBrain_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_roboworks_brain_interfaces
void
roboworks_brain_interfaces__srv__ArmBrain_Response__destroy(roboworks_brain_interfaces__srv__ArmBrain_Response * msg);

/// Check for srv/ArmBrain message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_roboworks_brain_interfaces
bool
roboworks_brain_interfaces__srv__ArmBrain_Response__are_equal(const roboworks_brain_interfaces__srv__ArmBrain_Response * lhs, const roboworks_brain_interfaces__srv__ArmBrain_Response * rhs);

/// Copy a srv/ArmBrain message.
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
ROSIDL_GENERATOR_C_PUBLIC_roboworks_brain_interfaces
bool
roboworks_brain_interfaces__srv__ArmBrain_Response__copy(
  const roboworks_brain_interfaces__srv__ArmBrain_Response * input,
  roboworks_brain_interfaces__srv__ArmBrain_Response * output);

/// Initialize array of srv/ArmBrain messages.
/**
 * It allocates the memory for the number of elements and calls
 * roboworks_brain_interfaces__srv__ArmBrain_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_roboworks_brain_interfaces
bool
roboworks_brain_interfaces__srv__ArmBrain_Response__Sequence__init(roboworks_brain_interfaces__srv__ArmBrain_Response__Sequence * array, size_t size);

/// Finalize array of srv/ArmBrain messages.
/**
 * It calls
 * roboworks_brain_interfaces__srv__ArmBrain_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_roboworks_brain_interfaces
void
roboworks_brain_interfaces__srv__ArmBrain_Response__Sequence__fini(roboworks_brain_interfaces__srv__ArmBrain_Response__Sequence * array);

/// Create array of srv/ArmBrain messages.
/**
 * It allocates the memory for the array and calls
 * roboworks_brain_interfaces__srv__ArmBrain_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_roboworks_brain_interfaces
roboworks_brain_interfaces__srv__ArmBrain_Response__Sequence *
roboworks_brain_interfaces__srv__ArmBrain_Response__Sequence__create(size_t size);

/// Destroy array of srv/ArmBrain messages.
/**
 * It calls
 * roboworks_brain_interfaces__srv__ArmBrain_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_roboworks_brain_interfaces
void
roboworks_brain_interfaces__srv__ArmBrain_Response__Sequence__destroy(roboworks_brain_interfaces__srv__ArmBrain_Response__Sequence * array);

/// Check for srv/ArmBrain message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_roboworks_brain_interfaces
bool
roboworks_brain_interfaces__srv__ArmBrain_Response__Sequence__are_equal(const roboworks_brain_interfaces__srv__ArmBrain_Response__Sequence * lhs, const roboworks_brain_interfaces__srv__ArmBrain_Response__Sequence * rhs);

/// Copy an array of srv/ArmBrain messages.
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
ROSIDL_GENERATOR_C_PUBLIC_roboworks_brain_interfaces
bool
roboworks_brain_interfaces__srv__ArmBrain_Response__Sequence__copy(
  const roboworks_brain_interfaces__srv__ArmBrain_Response__Sequence * input,
  roboworks_brain_interfaces__srv__ArmBrain_Response__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // ROBOWORKS_BRAIN_INTERFACES__SRV__DETAIL__ARM_BRAIN__FUNCTIONS_H_
