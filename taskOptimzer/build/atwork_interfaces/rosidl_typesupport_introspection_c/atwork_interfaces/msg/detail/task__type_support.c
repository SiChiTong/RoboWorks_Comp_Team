// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from atwork_interfaces:msg/Task.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "atwork_interfaces/msg/detail/task__rosidl_typesupport_introspection_c.h"
#include "atwork_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "atwork_interfaces/msg/detail/task__functions.h"
#include "atwork_interfaces/msg/detail/task__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `execute_on`
#include "atwork_interfaces/msg/robot_header.h"
// Member `execute_on`
#include "atwork_interfaces/msg/detail/robot_header__rosidl_typesupport_introspection_c.h"
// Member `arena_start_state`
// Member `arena_target_state`
#include "atwork_interfaces/msg/workstation.h"
// Member `arena_start_state`
// Member `arena_target_state`
#include "atwork_interfaces/msg/detail/workstation__rosidl_typesupport_introspection_c.h"
// Member `prep_time`
// Member `exec_time`
#include "builtin_interfaces/msg/duration.h"
// Member `prep_time`
// Member `exec_time`
#include "builtin_interfaces/msg/detail/duration__rosidl_typesupport_introspection_c.h"
// Member `type`
// Member `config`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void atwork_interfaces__msg__Task__rosidl_typesupport_introspection_c__Task_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  atwork_interfaces__msg__Task__init(message_memory);
}

void atwork_interfaces__msg__Task__rosidl_typesupport_introspection_c__Task_fini_function(void * message_memory)
{
  atwork_interfaces__msg__Task__fini(message_memory);
}

size_t atwork_interfaces__msg__Task__rosidl_typesupport_introspection_c__size_function__Task__execute_on(
  const void * untyped_member)
{
  const atwork_interfaces__msg__RobotHeader__Sequence * member =
    (const atwork_interfaces__msg__RobotHeader__Sequence *)(untyped_member);
  return member->size;
}

const void * atwork_interfaces__msg__Task__rosidl_typesupport_introspection_c__get_const_function__Task__execute_on(
  const void * untyped_member, size_t index)
{
  const atwork_interfaces__msg__RobotHeader__Sequence * member =
    (const atwork_interfaces__msg__RobotHeader__Sequence *)(untyped_member);
  return &member->data[index];
}

void * atwork_interfaces__msg__Task__rosidl_typesupport_introspection_c__get_function__Task__execute_on(
  void * untyped_member, size_t index)
{
  atwork_interfaces__msg__RobotHeader__Sequence * member =
    (atwork_interfaces__msg__RobotHeader__Sequence *)(untyped_member);
  return &member->data[index];
}

void atwork_interfaces__msg__Task__rosidl_typesupport_introspection_c__fetch_function__Task__execute_on(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const atwork_interfaces__msg__RobotHeader * item =
    ((const atwork_interfaces__msg__RobotHeader *)
    atwork_interfaces__msg__Task__rosidl_typesupport_introspection_c__get_const_function__Task__execute_on(untyped_member, index));
  atwork_interfaces__msg__RobotHeader * value =
    (atwork_interfaces__msg__RobotHeader *)(untyped_value);
  *value = *item;
}

void atwork_interfaces__msg__Task__rosidl_typesupport_introspection_c__assign_function__Task__execute_on(
  void * untyped_member, size_t index, const void * untyped_value)
{
  atwork_interfaces__msg__RobotHeader * item =
    ((atwork_interfaces__msg__RobotHeader *)
    atwork_interfaces__msg__Task__rosidl_typesupport_introspection_c__get_function__Task__execute_on(untyped_member, index));
  const atwork_interfaces__msg__RobotHeader * value =
    (const atwork_interfaces__msg__RobotHeader *)(untyped_value);
  *item = *value;
}

bool atwork_interfaces__msg__Task__rosidl_typesupport_introspection_c__resize_function__Task__execute_on(
  void * untyped_member, size_t size)
{
  atwork_interfaces__msg__RobotHeader__Sequence * member =
    (atwork_interfaces__msg__RobotHeader__Sequence *)(untyped_member);
  atwork_interfaces__msg__RobotHeader__Sequence__fini(member);
  return atwork_interfaces__msg__RobotHeader__Sequence__init(member, size);
}

size_t atwork_interfaces__msg__Task__rosidl_typesupport_introspection_c__size_function__Task__arena_start_state(
  const void * untyped_member)
{
  const atwork_interfaces__msg__Workstation__Sequence * member =
    (const atwork_interfaces__msg__Workstation__Sequence *)(untyped_member);
  return member->size;
}

const void * atwork_interfaces__msg__Task__rosidl_typesupport_introspection_c__get_const_function__Task__arena_start_state(
  const void * untyped_member, size_t index)
{
  const atwork_interfaces__msg__Workstation__Sequence * member =
    (const atwork_interfaces__msg__Workstation__Sequence *)(untyped_member);
  return &member->data[index];
}

void * atwork_interfaces__msg__Task__rosidl_typesupport_introspection_c__get_function__Task__arena_start_state(
  void * untyped_member, size_t index)
{
  atwork_interfaces__msg__Workstation__Sequence * member =
    (atwork_interfaces__msg__Workstation__Sequence *)(untyped_member);
  return &member->data[index];
}

void atwork_interfaces__msg__Task__rosidl_typesupport_introspection_c__fetch_function__Task__arena_start_state(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const atwork_interfaces__msg__Workstation * item =
    ((const atwork_interfaces__msg__Workstation *)
    atwork_interfaces__msg__Task__rosidl_typesupport_introspection_c__get_const_function__Task__arena_start_state(untyped_member, index));
  atwork_interfaces__msg__Workstation * value =
    (atwork_interfaces__msg__Workstation *)(untyped_value);
  *value = *item;
}

void atwork_interfaces__msg__Task__rosidl_typesupport_introspection_c__assign_function__Task__arena_start_state(
  void * untyped_member, size_t index, const void * untyped_value)
{
  atwork_interfaces__msg__Workstation * item =
    ((atwork_interfaces__msg__Workstation *)
    atwork_interfaces__msg__Task__rosidl_typesupport_introspection_c__get_function__Task__arena_start_state(untyped_member, index));
  const atwork_interfaces__msg__Workstation * value =
    (const atwork_interfaces__msg__Workstation *)(untyped_value);
  *item = *value;
}

bool atwork_interfaces__msg__Task__rosidl_typesupport_introspection_c__resize_function__Task__arena_start_state(
  void * untyped_member, size_t size)
{
  atwork_interfaces__msg__Workstation__Sequence * member =
    (atwork_interfaces__msg__Workstation__Sequence *)(untyped_member);
  atwork_interfaces__msg__Workstation__Sequence__fini(member);
  return atwork_interfaces__msg__Workstation__Sequence__init(member, size);
}

size_t atwork_interfaces__msg__Task__rosidl_typesupport_introspection_c__size_function__Task__arena_target_state(
  const void * untyped_member)
{
  const atwork_interfaces__msg__Workstation__Sequence * member =
    (const atwork_interfaces__msg__Workstation__Sequence *)(untyped_member);
  return member->size;
}

const void * atwork_interfaces__msg__Task__rosidl_typesupport_introspection_c__get_const_function__Task__arena_target_state(
  const void * untyped_member, size_t index)
{
  const atwork_interfaces__msg__Workstation__Sequence * member =
    (const atwork_interfaces__msg__Workstation__Sequence *)(untyped_member);
  return &member->data[index];
}

void * atwork_interfaces__msg__Task__rosidl_typesupport_introspection_c__get_function__Task__arena_target_state(
  void * untyped_member, size_t index)
{
  atwork_interfaces__msg__Workstation__Sequence * member =
    (atwork_interfaces__msg__Workstation__Sequence *)(untyped_member);
  return &member->data[index];
}

void atwork_interfaces__msg__Task__rosidl_typesupport_introspection_c__fetch_function__Task__arena_target_state(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const atwork_interfaces__msg__Workstation * item =
    ((const atwork_interfaces__msg__Workstation *)
    atwork_interfaces__msg__Task__rosidl_typesupport_introspection_c__get_const_function__Task__arena_target_state(untyped_member, index));
  atwork_interfaces__msg__Workstation * value =
    (atwork_interfaces__msg__Workstation *)(untyped_value);
  *value = *item;
}

void atwork_interfaces__msg__Task__rosidl_typesupport_introspection_c__assign_function__Task__arena_target_state(
  void * untyped_member, size_t index, const void * untyped_value)
{
  atwork_interfaces__msg__Workstation * item =
    ((atwork_interfaces__msg__Workstation *)
    atwork_interfaces__msg__Task__rosidl_typesupport_introspection_c__get_function__Task__arena_target_state(untyped_member, index));
  const atwork_interfaces__msg__Workstation * value =
    (const atwork_interfaces__msg__Workstation *)(untyped_value);
  *item = *value;
}

bool atwork_interfaces__msg__Task__rosidl_typesupport_introspection_c__resize_function__Task__arena_target_state(
  void * untyped_member, size_t size)
{
  atwork_interfaces__msg__Workstation__Sequence * member =
    (atwork_interfaces__msg__Workstation__Sequence *)(untyped_member);
  atwork_interfaces__msg__Workstation__Sequence__fini(member);
  return atwork_interfaces__msg__Workstation__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember atwork_interfaces__msg__Task__rosidl_typesupport_introspection_c__Task_message_member_array[10] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(atwork_interfaces__msg__Task, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "execute_on",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(atwork_interfaces__msg__Task, execute_on),  // bytes offset in struct
    NULL,  // default value
    atwork_interfaces__msg__Task__rosidl_typesupport_introspection_c__size_function__Task__execute_on,  // size() function pointer
    atwork_interfaces__msg__Task__rosidl_typesupport_introspection_c__get_const_function__Task__execute_on,  // get_const(index) function pointer
    atwork_interfaces__msg__Task__rosidl_typesupport_introspection_c__get_function__Task__execute_on,  // get(index) function pointer
    atwork_interfaces__msg__Task__rosidl_typesupport_introspection_c__fetch_function__Task__execute_on,  // fetch(index, &value) function pointer
    atwork_interfaces__msg__Task__rosidl_typesupport_introspection_c__assign_function__Task__execute_on,  // assign(index, value) function pointer
    atwork_interfaces__msg__Task__rosidl_typesupport_introspection_c__resize_function__Task__execute_on  // resize(index) function pointer
  },
  {
    "arena_start_state",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(atwork_interfaces__msg__Task, arena_start_state),  // bytes offset in struct
    NULL,  // default value
    atwork_interfaces__msg__Task__rosidl_typesupport_introspection_c__size_function__Task__arena_start_state,  // size() function pointer
    atwork_interfaces__msg__Task__rosidl_typesupport_introspection_c__get_const_function__Task__arena_start_state,  // get_const(index) function pointer
    atwork_interfaces__msg__Task__rosidl_typesupport_introspection_c__get_function__Task__arena_start_state,  // get(index) function pointer
    atwork_interfaces__msg__Task__rosidl_typesupport_introspection_c__fetch_function__Task__arena_start_state,  // fetch(index, &value) function pointer
    atwork_interfaces__msg__Task__rosidl_typesupport_introspection_c__assign_function__Task__arena_start_state,  // assign(index, value) function pointer
    atwork_interfaces__msg__Task__rosidl_typesupport_introspection_c__resize_function__Task__arena_start_state  // resize(index) function pointer
  },
  {
    "arena_target_state",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(atwork_interfaces__msg__Task, arena_target_state),  // bytes offset in struct
    NULL,  // default value
    atwork_interfaces__msg__Task__rosidl_typesupport_introspection_c__size_function__Task__arena_target_state,  // size() function pointer
    atwork_interfaces__msg__Task__rosidl_typesupport_introspection_c__get_const_function__Task__arena_target_state,  // get_const(index) function pointer
    atwork_interfaces__msg__Task__rosidl_typesupport_introspection_c__get_function__Task__arena_target_state,  // get(index) function pointer
    atwork_interfaces__msg__Task__rosidl_typesupport_introspection_c__fetch_function__Task__arena_target_state,  // fetch(index, &value) function pointer
    atwork_interfaces__msg__Task__rosidl_typesupport_introspection_c__assign_function__Task__arena_target_state,  // assign(index, value) function pointer
    atwork_interfaces__msg__Task__rosidl_typesupport_introspection_c__resize_function__Task__arena_target_state  // resize(index) function pointer
  },
  {
    "prep_time",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(atwork_interfaces__msg__Task, prep_time),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "exec_time",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(atwork_interfaces__msg__Task, exec_time),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(atwork_interfaces__msg__Task, type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(atwork_interfaces__msg__Task, id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "config",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(atwork_interfaces__msg__Task, config),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "commit",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(atwork_interfaces__msg__Task, commit),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers atwork_interfaces__msg__Task__rosidl_typesupport_introspection_c__Task_message_members = {
  "atwork_interfaces__msg",  // message namespace
  "Task",  // message name
  10,  // number of fields
  sizeof(atwork_interfaces__msg__Task),
  atwork_interfaces__msg__Task__rosidl_typesupport_introspection_c__Task_message_member_array,  // message members
  atwork_interfaces__msg__Task__rosidl_typesupport_introspection_c__Task_init_function,  // function to initialize message memory (memory has to be allocated)
  atwork_interfaces__msg__Task__rosidl_typesupport_introspection_c__Task_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t atwork_interfaces__msg__Task__rosidl_typesupport_introspection_c__Task_message_type_support_handle = {
  0,
  &atwork_interfaces__msg__Task__rosidl_typesupport_introspection_c__Task_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_atwork_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, atwork_interfaces, msg, Task)() {
  atwork_interfaces__msg__Task__rosidl_typesupport_introspection_c__Task_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  atwork_interfaces__msg__Task__rosidl_typesupport_introspection_c__Task_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, atwork_interfaces, msg, RobotHeader)();
  atwork_interfaces__msg__Task__rosidl_typesupport_introspection_c__Task_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, atwork_interfaces, msg, Workstation)();
  atwork_interfaces__msg__Task__rosidl_typesupport_introspection_c__Task_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, atwork_interfaces, msg, Workstation)();
  atwork_interfaces__msg__Task__rosidl_typesupport_introspection_c__Task_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Duration)();
  atwork_interfaces__msg__Task__rosidl_typesupport_introspection_c__Task_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Duration)();
  if (!atwork_interfaces__msg__Task__rosidl_typesupport_introspection_c__Task_message_type_support_handle.typesupport_identifier) {
    atwork_interfaces__msg__Task__rosidl_typesupport_introspection_c__Task_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &atwork_interfaces__msg__Task__rosidl_typesupport_introspection_c__Task_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
