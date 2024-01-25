// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from atwork_interfaces:msg/RobotHeader.idl
// generated code does not contain a copyright notice
#include "atwork_interfaces/msg/detail/robot_header__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `team_name`
// Member `robot_name`
#include "rosidl_runtime_c/string_functions.h"
// Member `transforms`
#include "geometry_msgs/msg/detail/transform_stamped__functions.h"

bool
atwork_interfaces__msg__RobotHeader__init(atwork_interfaces__msg__RobotHeader * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    atwork_interfaces__msg__RobotHeader__fini(msg);
    return false;
  }
  // team_name
  if (!rosidl_runtime_c__String__init(&msg->team_name)) {
    atwork_interfaces__msg__RobotHeader__fini(msg);
    return false;
  }
  // robot_name
  if (!rosidl_runtime_c__String__init(&msg->robot_name)) {
    atwork_interfaces__msg__RobotHeader__fini(msg);
    return false;
  }
  // transforms
  if (!geometry_msgs__msg__TransformStamped__Sequence__init(&msg->transforms, 0)) {
    atwork_interfaces__msg__RobotHeader__fini(msg);
    return false;
  }
  return true;
}

void
atwork_interfaces__msg__RobotHeader__fini(atwork_interfaces__msg__RobotHeader * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // team_name
  rosidl_runtime_c__String__fini(&msg->team_name);
  // robot_name
  rosidl_runtime_c__String__fini(&msg->robot_name);
  // transforms
  geometry_msgs__msg__TransformStamped__Sequence__fini(&msg->transforms);
}

bool
atwork_interfaces__msg__RobotHeader__are_equal(const atwork_interfaces__msg__RobotHeader * lhs, const atwork_interfaces__msg__RobotHeader * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // team_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->team_name), &(rhs->team_name)))
  {
    return false;
  }
  // robot_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->robot_name), &(rhs->robot_name)))
  {
    return false;
  }
  // transforms
  if (!geometry_msgs__msg__TransformStamped__Sequence__are_equal(
      &(lhs->transforms), &(rhs->transforms)))
  {
    return false;
  }
  return true;
}

bool
atwork_interfaces__msg__RobotHeader__copy(
  const atwork_interfaces__msg__RobotHeader * input,
  atwork_interfaces__msg__RobotHeader * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // team_name
  if (!rosidl_runtime_c__String__copy(
      &(input->team_name), &(output->team_name)))
  {
    return false;
  }
  // robot_name
  if (!rosidl_runtime_c__String__copy(
      &(input->robot_name), &(output->robot_name)))
  {
    return false;
  }
  // transforms
  if (!geometry_msgs__msg__TransformStamped__Sequence__copy(
      &(input->transforms), &(output->transforms)))
  {
    return false;
  }
  return true;
}

atwork_interfaces__msg__RobotHeader *
atwork_interfaces__msg__RobotHeader__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  atwork_interfaces__msg__RobotHeader * msg = (atwork_interfaces__msg__RobotHeader *)allocator.allocate(sizeof(atwork_interfaces__msg__RobotHeader), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(atwork_interfaces__msg__RobotHeader));
  bool success = atwork_interfaces__msg__RobotHeader__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
atwork_interfaces__msg__RobotHeader__destroy(atwork_interfaces__msg__RobotHeader * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    atwork_interfaces__msg__RobotHeader__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
atwork_interfaces__msg__RobotHeader__Sequence__init(atwork_interfaces__msg__RobotHeader__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  atwork_interfaces__msg__RobotHeader * data = NULL;

  if (size) {
    data = (atwork_interfaces__msg__RobotHeader *)allocator.zero_allocate(size, sizeof(atwork_interfaces__msg__RobotHeader), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = atwork_interfaces__msg__RobotHeader__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        atwork_interfaces__msg__RobotHeader__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
atwork_interfaces__msg__RobotHeader__Sequence__fini(atwork_interfaces__msg__RobotHeader__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      atwork_interfaces__msg__RobotHeader__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

atwork_interfaces__msg__RobotHeader__Sequence *
atwork_interfaces__msg__RobotHeader__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  atwork_interfaces__msg__RobotHeader__Sequence * array = (atwork_interfaces__msg__RobotHeader__Sequence *)allocator.allocate(sizeof(atwork_interfaces__msg__RobotHeader__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = atwork_interfaces__msg__RobotHeader__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
atwork_interfaces__msg__RobotHeader__Sequence__destroy(atwork_interfaces__msg__RobotHeader__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    atwork_interfaces__msg__RobotHeader__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
atwork_interfaces__msg__RobotHeader__Sequence__are_equal(const atwork_interfaces__msg__RobotHeader__Sequence * lhs, const atwork_interfaces__msg__RobotHeader__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!atwork_interfaces__msg__RobotHeader__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
atwork_interfaces__msg__RobotHeader__Sequence__copy(
  const atwork_interfaces__msg__RobotHeader__Sequence * input,
  atwork_interfaces__msg__RobotHeader__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(atwork_interfaces__msg__RobotHeader);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    atwork_interfaces__msg__RobotHeader * data =
      (atwork_interfaces__msg__RobotHeader *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!atwork_interfaces__msg__RobotHeader__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          atwork_interfaces__msg__RobotHeader__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!atwork_interfaces__msg__RobotHeader__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
