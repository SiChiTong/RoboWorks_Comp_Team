// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from atwork_interfaces:msg/Object.idl
// generated code does not contain a copyright notice
#include "atwork_interfaces/msg/detail/object__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `pose`
#include "geometry_msgs/msg/detail/pose_stamped__functions.h"

bool
atwork_interfaces__msg__Object__init(atwork_interfaces__msg__Object * msg)
{
  if (!msg) {
    return false;
  }
  // object
  // target
  // decoy
  // pose
  if (!geometry_msgs__msg__PoseStamped__init(&msg->pose)) {
    atwork_interfaces__msg__Object__fini(msg);
    return false;
  }
  return true;
}

void
atwork_interfaces__msg__Object__fini(atwork_interfaces__msg__Object * msg)
{
  if (!msg) {
    return;
  }
  // object
  // target
  // decoy
  // pose
  geometry_msgs__msg__PoseStamped__fini(&msg->pose);
}

bool
atwork_interfaces__msg__Object__are_equal(const atwork_interfaces__msg__Object * lhs, const atwork_interfaces__msg__Object * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // object
  if (lhs->object != rhs->object) {
    return false;
  }
  // target
  if (lhs->target != rhs->target) {
    return false;
  }
  // decoy
  if (lhs->decoy != rhs->decoy) {
    return false;
  }
  // pose
  if (!geometry_msgs__msg__PoseStamped__are_equal(
      &(lhs->pose), &(rhs->pose)))
  {
    return false;
  }
  return true;
}

bool
atwork_interfaces__msg__Object__copy(
  const atwork_interfaces__msg__Object * input,
  atwork_interfaces__msg__Object * output)
{
  if (!input || !output) {
    return false;
  }
  // object
  output->object = input->object;
  // target
  output->target = input->target;
  // decoy
  output->decoy = input->decoy;
  // pose
  if (!geometry_msgs__msg__PoseStamped__copy(
      &(input->pose), &(output->pose)))
  {
    return false;
  }
  return true;
}

atwork_interfaces__msg__Object *
atwork_interfaces__msg__Object__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  atwork_interfaces__msg__Object * msg = (atwork_interfaces__msg__Object *)allocator.allocate(sizeof(atwork_interfaces__msg__Object), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(atwork_interfaces__msg__Object));
  bool success = atwork_interfaces__msg__Object__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
atwork_interfaces__msg__Object__destroy(atwork_interfaces__msg__Object * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    atwork_interfaces__msg__Object__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
atwork_interfaces__msg__Object__Sequence__init(atwork_interfaces__msg__Object__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  atwork_interfaces__msg__Object * data = NULL;

  if (size) {
    data = (atwork_interfaces__msg__Object *)allocator.zero_allocate(size, sizeof(atwork_interfaces__msg__Object), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = atwork_interfaces__msg__Object__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        atwork_interfaces__msg__Object__fini(&data[i - 1]);
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
atwork_interfaces__msg__Object__Sequence__fini(atwork_interfaces__msg__Object__Sequence * array)
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
      atwork_interfaces__msg__Object__fini(&array->data[i]);
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

atwork_interfaces__msg__Object__Sequence *
atwork_interfaces__msg__Object__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  atwork_interfaces__msg__Object__Sequence * array = (atwork_interfaces__msg__Object__Sequence *)allocator.allocate(sizeof(atwork_interfaces__msg__Object__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = atwork_interfaces__msg__Object__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
atwork_interfaces__msg__Object__Sequence__destroy(atwork_interfaces__msg__Object__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    atwork_interfaces__msg__Object__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
atwork_interfaces__msg__Object__Sequence__are_equal(const atwork_interfaces__msg__Object__Sequence * lhs, const atwork_interfaces__msg__Object__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!atwork_interfaces__msg__Object__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
atwork_interfaces__msg__Object__Sequence__copy(
  const atwork_interfaces__msg__Object__Sequence * input,
  atwork_interfaces__msg__Object__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(atwork_interfaces__msg__Object);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    atwork_interfaces__msg__Object * data =
      (atwork_interfaces__msg__Object *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!atwork_interfaces__msg__Object__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          atwork_interfaces__msg__Object__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!atwork_interfaces__msg__Object__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
