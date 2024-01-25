// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from atwork_interfaces:msg/Task.idl
// generated code does not contain a copyright notice
#include "atwork_interfaces/msg/detail/task__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `execute_on`
#include "atwork_interfaces/msg/detail/robot_header__functions.h"
// Member `arena_start_state`
// Member `arena_target_state`
#include "atwork_interfaces/msg/detail/workstation__functions.h"
// Member `prep_time`
// Member `exec_time`
#include "builtin_interfaces/msg/detail/duration__functions.h"
// Member `type`
// Member `config`
#include "rosidl_runtime_c/string_functions.h"

bool
atwork_interfaces__msg__Task__init(atwork_interfaces__msg__Task * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    atwork_interfaces__msg__Task__fini(msg);
    return false;
  }
  // execute_on
  if (!atwork_interfaces__msg__RobotHeader__Sequence__init(&msg->execute_on, 0)) {
    atwork_interfaces__msg__Task__fini(msg);
    return false;
  }
  // arena_start_state
  if (!atwork_interfaces__msg__Workstation__Sequence__init(&msg->arena_start_state, 0)) {
    atwork_interfaces__msg__Task__fini(msg);
    return false;
  }
  // arena_target_state
  if (!atwork_interfaces__msg__Workstation__Sequence__init(&msg->arena_target_state, 0)) {
    atwork_interfaces__msg__Task__fini(msg);
    return false;
  }
  // prep_time
  if (!builtin_interfaces__msg__Duration__init(&msg->prep_time)) {
    atwork_interfaces__msg__Task__fini(msg);
    return false;
  }
  // exec_time
  if (!builtin_interfaces__msg__Duration__init(&msg->exec_time)) {
    atwork_interfaces__msg__Task__fini(msg);
    return false;
  }
  // type
  if (!rosidl_runtime_c__String__init(&msg->type)) {
    atwork_interfaces__msg__Task__fini(msg);
    return false;
  }
  // id
  // config
  if (!rosidl_runtime_c__String__init(&msg->config)) {
    atwork_interfaces__msg__Task__fini(msg);
    return false;
  }
  // commit
  return true;
}

void
atwork_interfaces__msg__Task__fini(atwork_interfaces__msg__Task * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // execute_on
  atwork_interfaces__msg__RobotHeader__Sequence__fini(&msg->execute_on);
  // arena_start_state
  atwork_interfaces__msg__Workstation__Sequence__fini(&msg->arena_start_state);
  // arena_target_state
  atwork_interfaces__msg__Workstation__Sequence__fini(&msg->arena_target_state);
  // prep_time
  builtin_interfaces__msg__Duration__fini(&msg->prep_time);
  // exec_time
  builtin_interfaces__msg__Duration__fini(&msg->exec_time);
  // type
  rosidl_runtime_c__String__fini(&msg->type);
  // id
  // config
  rosidl_runtime_c__String__fini(&msg->config);
  // commit
}

bool
atwork_interfaces__msg__Task__are_equal(const atwork_interfaces__msg__Task * lhs, const atwork_interfaces__msg__Task * rhs)
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
  // execute_on
  if (!atwork_interfaces__msg__RobotHeader__Sequence__are_equal(
      &(lhs->execute_on), &(rhs->execute_on)))
  {
    return false;
  }
  // arena_start_state
  if (!atwork_interfaces__msg__Workstation__Sequence__are_equal(
      &(lhs->arena_start_state), &(rhs->arena_start_state)))
  {
    return false;
  }
  // arena_target_state
  if (!atwork_interfaces__msg__Workstation__Sequence__are_equal(
      &(lhs->arena_target_state), &(rhs->arena_target_state)))
  {
    return false;
  }
  // prep_time
  if (!builtin_interfaces__msg__Duration__are_equal(
      &(lhs->prep_time), &(rhs->prep_time)))
  {
    return false;
  }
  // exec_time
  if (!builtin_interfaces__msg__Duration__are_equal(
      &(lhs->exec_time), &(rhs->exec_time)))
  {
    return false;
  }
  // type
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->type), &(rhs->type)))
  {
    return false;
  }
  // id
  if (lhs->id != rhs->id) {
    return false;
  }
  // config
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->config), &(rhs->config)))
  {
    return false;
  }
  // commit
  if (lhs->commit != rhs->commit) {
    return false;
  }
  return true;
}

bool
atwork_interfaces__msg__Task__copy(
  const atwork_interfaces__msg__Task * input,
  atwork_interfaces__msg__Task * output)
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
  // execute_on
  if (!atwork_interfaces__msg__RobotHeader__Sequence__copy(
      &(input->execute_on), &(output->execute_on)))
  {
    return false;
  }
  // arena_start_state
  if (!atwork_interfaces__msg__Workstation__Sequence__copy(
      &(input->arena_start_state), &(output->arena_start_state)))
  {
    return false;
  }
  // arena_target_state
  if (!atwork_interfaces__msg__Workstation__Sequence__copy(
      &(input->arena_target_state), &(output->arena_target_state)))
  {
    return false;
  }
  // prep_time
  if (!builtin_interfaces__msg__Duration__copy(
      &(input->prep_time), &(output->prep_time)))
  {
    return false;
  }
  // exec_time
  if (!builtin_interfaces__msg__Duration__copy(
      &(input->exec_time), &(output->exec_time)))
  {
    return false;
  }
  // type
  if (!rosidl_runtime_c__String__copy(
      &(input->type), &(output->type)))
  {
    return false;
  }
  // id
  output->id = input->id;
  // config
  if (!rosidl_runtime_c__String__copy(
      &(input->config), &(output->config)))
  {
    return false;
  }
  // commit
  output->commit = input->commit;
  return true;
}

atwork_interfaces__msg__Task *
atwork_interfaces__msg__Task__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  atwork_interfaces__msg__Task * msg = (atwork_interfaces__msg__Task *)allocator.allocate(sizeof(atwork_interfaces__msg__Task), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(atwork_interfaces__msg__Task));
  bool success = atwork_interfaces__msg__Task__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
atwork_interfaces__msg__Task__destroy(atwork_interfaces__msg__Task * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    atwork_interfaces__msg__Task__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
atwork_interfaces__msg__Task__Sequence__init(atwork_interfaces__msg__Task__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  atwork_interfaces__msg__Task * data = NULL;

  if (size) {
    data = (atwork_interfaces__msg__Task *)allocator.zero_allocate(size, sizeof(atwork_interfaces__msg__Task), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = atwork_interfaces__msg__Task__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        atwork_interfaces__msg__Task__fini(&data[i - 1]);
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
atwork_interfaces__msg__Task__Sequence__fini(atwork_interfaces__msg__Task__Sequence * array)
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
      atwork_interfaces__msg__Task__fini(&array->data[i]);
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

atwork_interfaces__msg__Task__Sequence *
atwork_interfaces__msg__Task__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  atwork_interfaces__msg__Task__Sequence * array = (atwork_interfaces__msg__Task__Sequence *)allocator.allocate(sizeof(atwork_interfaces__msg__Task__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = atwork_interfaces__msg__Task__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
atwork_interfaces__msg__Task__Sequence__destroy(atwork_interfaces__msg__Task__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    atwork_interfaces__msg__Task__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
atwork_interfaces__msg__Task__Sequence__are_equal(const atwork_interfaces__msg__Task__Sequence * lhs, const atwork_interfaces__msg__Task__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!atwork_interfaces__msg__Task__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
atwork_interfaces__msg__Task__Sequence__copy(
  const atwork_interfaces__msg__Task__Sequence * input,
  atwork_interfaces__msg__Task__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(atwork_interfaces__msg__Task);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    atwork_interfaces__msg__Task * data =
      (atwork_interfaces__msg__Task *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!atwork_interfaces__msg__Task__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          atwork_interfaces__msg__Task__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!atwork_interfaces__msg__Task__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
