// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from atwork_interfaces:srv/TaskOpt.idl
// generated code does not contain a copyright notice
#include "atwork_interfaces/srv/detail/task_opt__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `atwork_task`
#include "atwork_interfaces/msg/detail/task__functions.h"

bool
atwork_interfaces__srv__TaskOpt_Request__init(atwork_interfaces__srv__TaskOpt_Request * msg)
{
  if (!msg) {
    return false;
  }
  // atwork_task
  if (!atwork_interfaces__msg__Task__init(&msg->atwork_task)) {
    atwork_interfaces__srv__TaskOpt_Request__fini(msg);
    return false;
  }
  return true;
}

void
atwork_interfaces__srv__TaskOpt_Request__fini(atwork_interfaces__srv__TaskOpt_Request * msg)
{
  if (!msg) {
    return;
  }
  // atwork_task
  atwork_interfaces__msg__Task__fini(&msg->atwork_task);
}

bool
atwork_interfaces__srv__TaskOpt_Request__are_equal(const atwork_interfaces__srv__TaskOpt_Request * lhs, const atwork_interfaces__srv__TaskOpt_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // atwork_task
  if (!atwork_interfaces__msg__Task__are_equal(
      &(lhs->atwork_task), &(rhs->atwork_task)))
  {
    return false;
  }
  return true;
}

bool
atwork_interfaces__srv__TaskOpt_Request__copy(
  const atwork_interfaces__srv__TaskOpt_Request * input,
  atwork_interfaces__srv__TaskOpt_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // atwork_task
  if (!atwork_interfaces__msg__Task__copy(
      &(input->atwork_task), &(output->atwork_task)))
  {
    return false;
  }
  return true;
}

atwork_interfaces__srv__TaskOpt_Request *
atwork_interfaces__srv__TaskOpt_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  atwork_interfaces__srv__TaskOpt_Request * msg = (atwork_interfaces__srv__TaskOpt_Request *)allocator.allocate(sizeof(atwork_interfaces__srv__TaskOpt_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(atwork_interfaces__srv__TaskOpt_Request));
  bool success = atwork_interfaces__srv__TaskOpt_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
atwork_interfaces__srv__TaskOpt_Request__destroy(atwork_interfaces__srv__TaskOpt_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    atwork_interfaces__srv__TaskOpt_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
atwork_interfaces__srv__TaskOpt_Request__Sequence__init(atwork_interfaces__srv__TaskOpt_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  atwork_interfaces__srv__TaskOpt_Request * data = NULL;

  if (size) {
    data = (atwork_interfaces__srv__TaskOpt_Request *)allocator.zero_allocate(size, sizeof(atwork_interfaces__srv__TaskOpt_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = atwork_interfaces__srv__TaskOpt_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        atwork_interfaces__srv__TaskOpt_Request__fini(&data[i - 1]);
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
atwork_interfaces__srv__TaskOpt_Request__Sequence__fini(atwork_interfaces__srv__TaskOpt_Request__Sequence * array)
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
      atwork_interfaces__srv__TaskOpt_Request__fini(&array->data[i]);
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

atwork_interfaces__srv__TaskOpt_Request__Sequence *
atwork_interfaces__srv__TaskOpt_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  atwork_interfaces__srv__TaskOpt_Request__Sequence * array = (atwork_interfaces__srv__TaskOpt_Request__Sequence *)allocator.allocate(sizeof(atwork_interfaces__srv__TaskOpt_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = atwork_interfaces__srv__TaskOpt_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
atwork_interfaces__srv__TaskOpt_Request__Sequence__destroy(atwork_interfaces__srv__TaskOpt_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    atwork_interfaces__srv__TaskOpt_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
atwork_interfaces__srv__TaskOpt_Request__Sequence__are_equal(const atwork_interfaces__srv__TaskOpt_Request__Sequence * lhs, const atwork_interfaces__srv__TaskOpt_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!atwork_interfaces__srv__TaskOpt_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
atwork_interfaces__srv__TaskOpt_Request__Sequence__copy(
  const atwork_interfaces__srv__TaskOpt_Request__Sequence * input,
  atwork_interfaces__srv__TaskOpt_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(atwork_interfaces__srv__TaskOpt_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    atwork_interfaces__srv__TaskOpt_Request * data =
      (atwork_interfaces__srv__TaskOpt_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!atwork_interfaces__srv__TaskOpt_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          atwork_interfaces__srv__TaskOpt_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!atwork_interfaces__srv__TaskOpt_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `masterlist`
#include "rosidl_runtime_c/string_functions.h"

bool
atwork_interfaces__srv__TaskOpt_Response__init(atwork_interfaces__srv__TaskOpt_Response * msg)
{
  if (!msg) {
    return false;
  }
  // masterlist
  if (!rosidl_runtime_c__String__Sequence__init(&msg->masterlist, 0)) {
    atwork_interfaces__srv__TaskOpt_Response__fini(msg);
    return false;
  }
  return true;
}

void
atwork_interfaces__srv__TaskOpt_Response__fini(atwork_interfaces__srv__TaskOpt_Response * msg)
{
  if (!msg) {
    return;
  }
  // masterlist
  rosidl_runtime_c__String__Sequence__fini(&msg->masterlist);
}

bool
atwork_interfaces__srv__TaskOpt_Response__are_equal(const atwork_interfaces__srv__TaskOpt_Response * lhs, const atwork_interfaces__srv__TaskOpt_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // masterlist
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->masterlist), &(rhs->masterlist)))
  {
    return false;
  }
  return true;
}

bool
atwork_interfaces__srv__TaskOpt_Response__copy(
  const atwork_interfaces__srv__TaskOpt_Response * input,
  atwork_interfaces__srv__TaskOpt_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // masterlist
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->masterlist), &(output->masterlist)))
  {
    return false;
  }
  return true;
}

atwork_interfaces__srv__TaskOpt_Response *
atwork_interfaces__srv__TaskOpt_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  atwork_interfaces__srv__TaskOpt_Response * msg = (atwork_interfaces__srv__TaskOpt_Response *)allocator.allocate(sizeof(atwork_interfaces__srv__TaskOpt_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(atwork_interfaces__srv__TaskOpt_Response));
  bool success = atwork_interfaces__srv__TaskOpt_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
atwork_interfaces__srv__TaskOpt_Response__destroy(atwork_interfaces__srv__TaskOpt_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    atwork_interfaces__srv__TaskOpt_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
atwork_interfaces__srv__TaskOpt_Response__Sequence__init(atwork_interfaces__srv__TaskOpt_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  atwork_interfaces__srv__TaskOpt_Response * data = NULL;

  if (size) {
    data = (atwork_interfaces__srv__TaskOpt_Response *)allocator.zero_allocate(size, sizeof(atwork_interfaces__srv__TaskOpt_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = atwork_interfaces__srv__TaskOpt_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        atwork_interfaces__srv__TaskOpt_Response__fini(&data[i - 1]);
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
atwork_interfaces__srv__TaskOpt_Response__Sequence__fini(atwork_interfaces__srv__TaskOpt_Response__Sequence * array)
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
      atwork_interfaces__srv__TaskOpt_Response__fini(&array->data[i]);
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

atwork_interfaces__srv__TaskOpt_Response__Sequence *
atwork_interfaces__srv__TaskOpt_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  atwork_interfaces__srv__TaskOpt_Response__Sequence * array = (atwork_interfaces__srv__TaskOpt_Response__Sequence *)allocator.allocate(sizeof(atwork_interfaces__srv__TaskOpt_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = atwork_interfaces__srv__TaskOpt_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
atwork_interfaces__srv__TaskOpt_Response__Sequence__destroy(atwork_interfaces__srv__TaskOpt_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    atwork_interfaces__srv__TaskOpt_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
atwork_interfaces__srv__TaskOpt_Response__Sequence__are_equal(const atwork_interfaces__srv__TaskOpt_Response__Sequence * lhs, const atwork_interfaces__srv__TaskOpt_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!atwork_interfaces__srv__TaskOpt_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
atwork_interfaces__srv__TaskOpt_Response__Sequence__copy(
  const atwork_interfaces__srv__TaskOpt_Response__Sequence * input,
  atwork_interfaces__srv__TaskOpt_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(atwork_interfaces__srv__TaskOpt_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    atwork_interfaces__srv__TaskOpt_Response * data =
      (atwork_interfaces__srv__TaskOpt_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!atwork_interfaces__srv__TaskOpt_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          atwork_interfaces__srv__TaskOpt_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!atwork_interfaces__srv__TaskOpt_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
