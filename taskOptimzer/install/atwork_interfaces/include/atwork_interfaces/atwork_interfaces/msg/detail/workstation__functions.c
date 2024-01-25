// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from atwork_interfaces:msg/Workstation.idl
// generated code does not contain a copyright notice
#include "atwork_interfaces/msg/detail/workstation__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `objects`
#include "atwork_interfaces/msg/detail/object__functions.h"
// Member `name`
// Member `type`
#include "rosidl_runtime_c/string_functions.h"
// Member `pose`
#include "geometry_msgs/msg/detail/pose__functions.h"

bool
atwork_interfaces__msg__Workstation__init(atwork_interfaces__msg__Workstation * msg)
{
  if (!msg) {
    return false;
  }
  // objects
  if (!atwork_interfaces__msg__Object__Sequence__init(&msg->objects, 0)) {
    atwork_interfaces__msg__Workstation__fini(msg);
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    atwork_interfaces__msg__Workstation__fini(msg);
    return false;
  }
  // type
  if (!rosidl_runtime_c__String__init(&msg->type)) {
    atwork_interfaces__msg__Workstation__fini(msg);
    return false;
  }
  // pose
  if (!geometry_msgs__msg__Pose__init(&msg->pose)) {
    atwork_interfaces__msg__Workstation__fini(msg);
    return false;
  }
  return true;
}

void
atwork_interfaces__msg__Workstation__fini(atwork_interfaces__msg__Workstation * msg)
{
  if (!msg) {
    return;
  }
  // objects
  atwork_interfaces__msg__Object__Sequence__fini(&msg->objects);
  // name
  rosidl_runtime_c__String__fini(&msg->name);
  // type
  rosidl_runtime_c__String__fini(&msg->type);
  // pose
  geometry_msgs__msg__Pose__fini(&msg->pose);
}

bool
atwork_interfaces__msg__Workstation__are_equal(const atwork_interfaces__msg__Workstation * lhs, const atwork_interfaces__msg__Workstation * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // objects
  if (!atwork_interfaces__msg__Object__Sequence__are_equal(
      &(lhs->objects), &(rhs->objects)))
  {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->name), &(rhs->name)))
  {
    return false;
  }
  // type
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->type), &(rhs->type)))
  {
    return false;
  }
  // pose
  if (!geometry_msgs__msg__Pose__are_equal(
      &(lhs->pose), &(rhs->pose)))
  {
    return false;
  }
  return true;
}

bool
atwork_interfaces__msg__Workstation__copy(
  const atwork_interfaces__msg__Workstation * input,
  atwork_interfaces__msg__Workstation * output)
{
  if (!input || !output) {
    return false;
  }
  // objects
  if (!atwork_interfaces__msg__Object__Sequence__copy(
      &(input->objects), &(output->objects)))
  {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__copy(
      &(input->name), &(output->name)))
  {
    return false;
  }
  // type
  if (!rosidl_runtime_c__String__copy(
      &(input->type), &(output->type)))
  {
    return false;
  }
  // pose
  if (!geometry_msgs__msg__Pose__copy(
      &(input->pose), &(output->pose)))
  {
    return false;
  }
  return true;
}

atwork_interfaces__msg__Workstation *
atwork_interfaces__msg__Workstation__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  atwork_interfaces__msg__Workstation * msg = (atwork_interfaces__msg__Workstation *)allocator.allocate(sizeof(atwork_interfaces__msg__Workstation), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(atwork_interfaces__msg__Workstation));
  bool success = atwork_interfaces__msg__Workstation__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
atwork_interfaces__msg__Workstation__destroy(atwork_interfaces__msg__Workstation * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    atwork_interfaces__msg__Workstation__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
atwork_interfaces__msg__Workstation__Sequence__init(atwork_interfaces__msg__Workstation__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  atwork_interfaces__msg__Workstation * data = NULL;

  if (size) {
    data = (atwork_interfaces__msg__Workstation *)allocator.zero_allocate(size, sizeof(atwork_interfaces__msg__Workstation), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = atwork_interfaces__msg__Workstation__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        atwork_interfaces__msg__Workstation__fini(&data[i - 1]);
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
atwork_interfaces__msg__Workstation__Sequence__fini(atwork_interfaces__msg__Workstation__Sequence * array)
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
      atwork_interfaces__msg__Workstation__fini(&array->data[i]);
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

atwork_interfaces__msg__Workstation__Sequence *
atwork_interfaces__msg__Workstation__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  atwork_interfaces__msg__Workstation__Sequence * array = (atwork_interfaces__msg__Workstation__Sequence *)allocator.allocate(sizeof(atwork_interfaces__msg__Workstation__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = atwork_interfaces__msg__Workstation__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
atwork_interfaces__msg__Workstation__Sequence__destroy(atwork_interfaces__msg__Workstation__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    atwork_interfaces__msg__Workstation__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
atwork_interfaces__msg__Workstation__Sequence__are_equal(const atwork_interfaces__msg__Workstation__Sequence * lhs, const atwork_interfaces__msg__Workstation__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!atwork_interfaces__msg__Workstation__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
atwork_interfaces__msg__Workstation__Sequence__copy(
  const atwork_interfaces__msg__Workstation__Sequence * input,
  atwork_interfaces__msg__Workstation__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(atwork_interfaces__msg__Workstation);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    atwork_interfaces__msg__Workstation * data =
      (atwork_interfaces__msg__Workstation *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!atwork_interfaces__msg__Workstation__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          atwork_interfaces__msg__Workstation__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!atwork_interfaces__msg__Workstation__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
