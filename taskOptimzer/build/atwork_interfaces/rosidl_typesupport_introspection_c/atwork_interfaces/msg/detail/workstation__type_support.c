// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from atwork_interfaces:msg/Workstation.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "atwork_interfaces/msg/detail/workstation__rosidl_typesupport_introspection_c.h"
#include "atwork_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "atwork_interfaces/msg/detail/workstation__functions.h"
#include "atwork_interfaces/msg/detail/workstation__struct.h"


// Include directives for member types
// Member `objects`
#include "atwork_interfaces/msg/object.h"
// Member `objects`
#include "atwork_interfaces/msg/detail/object__rosidl_typesupport_introspection_c.h"
// Member `name`
// Member `type`
#include "rosidl_runtime_c/string_functions.h"
// Member `pose`
#include "geometry_msgs/msg/pose.h"
// Member `pose`
#include "geometry_msgs/msg/detail/pose__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void atwork_interfaces__msg__Workstation__rosidl_typesupport_introspection_c__Workstation_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  atwork_interfaces__msg__Workstation__init(message_memory);
}

void atwork_interfaces__msg__Workstation__rosidl_typesupport_introspection_c__Workstation_fini_function(void * message_memory)
{
  atwork_interfaces__msg__Workstation__fini(message_memory);
}

size_t atwork_interfaces__msg__Workstation__rosidl_typesupport_introspection_c__size_function__Workstation__objects(
  const void * untyped_member)
{
  const atwork_interfaces__msg__Object__Sequence * member =
    (const atwork_interfaces__msg__Object__Sequence *)(untyped_member);
  return member->size;
}

const void * atwork_interfaces__msg__Workstation__rosidl_typesupport_introspection_c__get_const_function__Workstation__objects(
  const void * untyped_member, size_t index)
{
  const atwork_interfaces__msg__Object__Sequence * member =
    (const atwork_interfaces__msg__Object__Sequence *)(untyped_member);
  return &member->data[index];
}

void * atwork_interfaces__msg__Workstation__rosidl_typesupport_introspection_c__get_function__Workstation__objects(
  void * untyped_member, size_t index)
{
  atwork_interfaces__msg__Object__Sequence * member =
    (atwork_interfaces__msg__Object__Sequence *)(untyped_member);
  return &member->data[index];
}

void atwork_interfaces__msg__Workstation__rosidl_typesupport_introspection_c__fetch_function__Workstation__objects(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const atwork_interfaces__msg__Object * item =
    ((const atwork_interfaces__msg__Object *)
    atwork_interfaces__msg__Workstation__rosidl_typesupport_introspection_c__get_const_function__Workstation__objects(untyped_member, index));
  atwork_interfaces__msg__Object * value =
    (atwork_interfaces__msg__Object *)(untyped_value);
  *value = *item;
}

void atwork_interfaces__msg__Workstation__rosidl_typesupport_introspection_c__assign_function__Workstation__objects(
  void * untyped_member, size_t index, const void * untyped_value)
{
  atwork_interfaces__msg__Object * item =
    ((atwork_interfaces__msg__Object *)
    atwork_interfaces__msg__Workstation__rosidl_typesupport_introspection_c__get_function__Workstation__objects(untyped_member, index));
  const atwork_interfaces__msg__Object * value =
    (const atwork_interfaces__msg__Object *)(untyped_value);
  *item = *value;
}

bool atwork_interfaces__msg__Workstation__rosidl_typesupport_introspection_c__resize_function__Workstation__objects(
  void * untyped_member, size_t size)
{
  atwork_interfaces__msg__Object__Sequence * member =
    (atwork_interfaces__msg__Object__Sequence *)(untyped_member);
  atwork_interfaces__msg__Object__Sequence__fini(member);
  return atwork_interfaces__msg__Object__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember atwork_interfaces__msg__Workstation__rosidl_typesupport_introspection_c__Workstation_message_member_array[4] = {
  {
    "objects",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(atwork_interfaces__msg__Workstation, objects),  // bytes offset in struct
    NULL,  // default value
    atwork_interfaces__msg__Workstation__rosidl_typesupport_introspection_c__size_function__Workstation__objects,  // size() function pointer
    atwork_interfaces__msg__Workstation__rosidl_typesupport_introspection_c__get_const_function__Workstation__objects,  // get_const(index) function pointer
    atwork_interfaces__msg__Workstation__rosidl_typesupport_introspection_c__get_function__Workstation__objects,  // get(index) function pointer
    atwork_interfaces__msg__Workstation__rosidl_typesupport_introspection_c__fetch_function__Workstation__objects,  // fetch(index, &value) function pointer
    atwork_interfaces__msg__Workstation__rosidl_typesupport_introspection_c__assign_function__Workstation__objects,  // assign(index, value) function pointer
    atwork_interfaces__msg__Workstation__rosidl_typesupport_introspection_c__resize_function__Workstation__objects  // resize(index) function pointer
  },
  {
    "name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(atwork_interfaces__msg__Workstation, name),  // bytes offset in struct
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
    offsetof(atwork_interfaces__msg__Workstation, type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pose",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(atwork_interfaces__msg__Workstation, pose),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers atwork_interfaces__msg__Workstation__rosidl_typesupport_introspection_c__Workstation_message_members = {
  "atwork_interfaces__msg",  // message namespace
  "Workstation",  // message name
  4,  // number of fields
  sizeof(atwork_interfaces__msg__Workstation),
  atwork_interfaces__msg__Workstation__rosidl_typesupport_introspection_c__Workstation_message_member_array,  // message members
  atwork_interfaces__msg__Workstation__rosidl_typesupport_introspection_c__Workstation_init_function,  // function to initialize message memory (memory has to be allocated)
  atwork_interfaces__msg__Workstation__rosidl_typesupport_introspection_c__Workstation_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t atwork_interfaces__msg__Workstation__rosidl_typesupport_introspection_c__Workstation_message_type_support_handle = {
  0,
  &atwork_interfaces__msg__Workstation__rosidl_typesupport_introspection_c__Workstation_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_atwork_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, atwork_interfaces, msg, Workstation)() {
  atwork_interfaces__msg__Workstation__rosidl_typesupport_introspection_c__Workstation_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, atwork_interfaces, msg, Object)();
  atwork_interfaces__msg__Workstation__rosidl_typesupport_introspection_c__Workstation_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Pose)();
  if (!atwork_interfaces__msg__Workstation__rosidl_typesupport_introspection_c__Workstation_message_type_support_handle.typesupport_identifier) {
    atwork_interfaces__msg__Workstation__rosidl_typesupport_introspection_c__Workstation_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &atwork_interfaces__msg__Workstation__rosidl_typesupport_introspection_c__Workstation_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
