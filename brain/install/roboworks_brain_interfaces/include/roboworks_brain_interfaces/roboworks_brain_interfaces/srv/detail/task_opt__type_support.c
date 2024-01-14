// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from roboworks_brain_interfaces:srv/TaskOpt.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "roboworks_brain_interfaces/srv/detail/task_opt__rosidl_typesupport_introspection_c.h"
#include "roboworks_brain_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "roboworks_brain_interfaces/srv/detail/task_opt__functions.h"
#include "roboworks_brain_interfaces/srv/detail/task_opt__struct.h"


// Include directives for member types
// Member `task_list`
// Member `game_state`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void roboworks_brain_interfaces__srv__TaskOpt_Request__rosidl_typesupport_introspection_c__TaskOpt_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  roboworks_brain_interfaces__srv__TaskOpt_Request__init(message_memory);
}

void roboworks_brain_interfaces__srv__TaskOpt_Request__rosidl_typesupport_introspection_c__TaskOpt_Request_fini_function(void * message_memory)
{
  roboworks_brain_interfaces__srv__TaskOpt_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember roboworks_brain_interfaces__srv__TaskOpt_Request__rosidl_typesupport_introspection_c__TaskOpt_Request_message_member_array[2] = {
  {
    "task_list",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(roboworks_brain_interfaces__srv__TaskOpt_Request, task_list),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "game_state",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(roboworks_brain_interfaces__srv__TaskOpt_Request, game_state),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers roboworks_brain_interfaces__srv__TaskOpt_Request__rosidl_typesupport_introspection_c__TaskOpt_Request_message_members = {
  "roboworks_brain_interfaces__srv",  // message namespace
  "TaskOpt_Request",  // message name
  2,  // number of fields
  sizeof(roboworks_brain_interfaces__srv__TaskOpt_Request),
  roboworks_brain_interfaces__srv__TaskOpt_Request__rosidl_typesupport_introspection_c__TaskOpt_Request_message_member_array,  // message members
  roboworks_brain_interfaces__srv__TaskOpt_Request__rosidl_typesupport_introspection_c__TaskOpt_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  roboworks_brain_interfaces__srv__TaskOpt_Request__rosidl_typesupport_introspection_c__TaskOpt_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t roboworks_brain_interfaces__srv__TaskOpt_Request__rosidl_typesupport_introspection_c__TaskOpt_Request_message_type_support_handle = {
  0,
  &roboworks_brain_interfaces__srv__TaskOpt_Request__rosidl_typesupport_introspection_c__TaskOpt_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_roboworks_brain_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, roboworks_brain_interfaces, srv, TaskOpt_Request)() {
  if (!roboworks_brain_interfaces__srv__TaskOpt_Request__rosidl_typesupport_introspection_c__TaskOpt_Request_message_type_support_handle.typesupport_identifier) {
    roboworks_brain_interfaces__srv__TaskOpt_Request__rosidl_typesupport_introspection_c__TaskOpt_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &roboworks_brain_interfaces__srv__TaskOpt_Request__rosidl_typesupport_introspection_c__TaskOpt_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "roboworks_brain_interfaces/srv/detail/task_opt__rosidl_typesupport_introspection_c.h"
// already included above
// #include "roboworks_brain_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "roboworks_brain_interfaces/srv/detail/task_opt__functions.h"
// already included above
// #include "roboworks_brain_interfaces/srv/detail/task_opt__struct.h"


// Include directives for member types
// Member `masterlist`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void roboworks_brain_interfaces__srv__TaskOpt_Response__rosidl_typesupport_introspection_c__TaskOpt_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  roboworks_brain_interfaces__srv__TaskOpt_Response__init(message_memory);
}

void roboworks_brain_interfaces__srv__TaskOpt_Response__rosidl_typesupport_introspection_c__TaskOpt_Response_fini_function(void * message_memory)
{
  roboworks_brain_interfaces__srv__TaskOpt_Response__fini(message_memory);
}

size_t roboworks_brain_interfaces__srv__TaskOpt_Response__rosidl_typesupport_introspection_c__size_function__TaskOpt_Response__masterlist(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * roboworks_brain_interfaces__srv__TaskOpt_Response__rosidl_typesupport_introspection_c__get_const_function__TaskOpt_Response__masterlist(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * roboworks_brain_interfaces__srv__TaskOpt_Response__rosidl_typesupport_introspection_c__get_function__TaskOpt_Response__masterlist(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void roboworks_brain_interfaces__srv__TaskOpt_Response__rosidl_typesupport_introspection_c__fetch_function__TaskOpt_Response__masterlist(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    roboworks_brain_interfaces__srv__TaskOpt_Response__rosidl_typesupport_introspection_c__get_const_function__TaskOpt_Response__masterlist(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void roboworks_brain_interfaces__srv__TaskOpt_Response__rosidl_typesupport_introspection_c__assign_function__TaskOpt_Response__masterlist(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    roboworks_brain_interfaces__srv__TaskOpt_Response__rosidl_typesupport_introspection_c__get_function__TaskOpt_Response__masterlist(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool roboworks_brain_interfaces__srv__TaskOpt_Response__rosidl_typesupport_introspection_c__resize_function__TaskOpt_Response__masterlist(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember roboworks_brain_interfaces__srv__TaskOpt_Response__rosidl_typesupport_introspection_c__TaskOpt_Response_message_member_array[1] = {
  {
    "masterlist",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(roboworks_brain_interfaces__srv__TaskOpt_Response, masterlist),  // bytes offset in struct
    NULL,  // default value
    roboworks_brain_interfaces__srv__TaskOpt_Response__rosidl_typesupport_introspection_c__size_function__TaskOpt_Response__masterlist,  // size() function pointer
    roboworks_brain_interfaces__srv__TaskOpt_Response__rosidl_typesupport_introspection_c__get_const_function__TaskOpt_Response__masterlist,  // get_const(index) function pointer
    roboworks_brain_interfaces__srv__TaskOpt_Response__rosidl_typesupport_introspection_c__get_function__TaskOpt_Response__masterlist,  // get(index) function pointer
    roboworks_brain_interfaces__srv__TaskOpt_Response__rosidl_typesupport_introspection_c__fetch_function__TaskOpt_Response__masterlist,  // fetch(index, &value) function pointer
    roboworks_brain_interfaces__srv__TaskOpt_Response__rosidl_typesupport_introspection_c__assign_function__TaskOpt_Response__masterlist,  // assign(index, value) function pointer
    roboworks_brain_interfaces__srv__TaskOpt_Response__rosidl_typesupport_introspection_c__resize_function__TaskOpt_Response__masterlist  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers roboworks_brain_interfaces__srv__TaskOpt_Response__rosidl_typesupport_introspection_c__TaskOpt_Response_message_members = {
  "roboworks_brain_interfaces__srv",  // message namespace
  "TaskOpt_Response",  // message name
  1,  // number of fields
  sizeof(roboworks_brain_interfaces__srv__TaskOpt_Response),
  roboworks_brain_interfaces__srv__TaskOpt_Response__rosidl_typesupport_introspection_c__TaskOpt_Response_message_member_array,  // message members
  roboworks_brain_interfaces__srv__TaskOpt_Response__rosidl_typesupport_introspection_c__TaskOpt_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  roboworks_brain_interfaces__srv__TaskOpt_Response__rosidl_typesupport_introspection_c__TaskOpt_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t roboworks_brain_interfaces__srv__TaskOpt_Response__rosidl_typesupport_introspection_c__TaskOpt_Response_message_type_support_handle = {
  0,
  &roboworks_brain_interfaces__srv__TaskOpt_Response__rosidl_typesupport_introspection_c__TaskOpt_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_roboworks_brain_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, roboworks_brain_interfaces, srv, TaskOpt_Response)() {
  if (!roboworks_brain_interfaces__srv__TaskOpt_Response__rosidl_typesupport_introspection_c__TaskOpt_Response_message_type_support_handle.typesupport_identifier) {
    roboworks_brain_interfaces__srv__TaskOpt_Response__rosidl_typesupport_introspection_c__TaskOpt_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &roboworks_brain_interfaces__srv__TaskOpt_Response__rosidl_typesupport_introspection_c__TaskOpt_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "roboworks_brain_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "roboworks_brain_interfaces/srv/detail/task_opt__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers roboworks_brain_interfaces__srv__detail__task_opt__rosidl_typesupport_introspection_c__TaskOpt_service_members = {
  "roboworks_brain_interfaces__srv",  // service namespace
  "TaskOpt",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // roboworks_brain_interfaces__srv__detail__task_opt__rosidl_typesupport_introspection_c__TaskOpt_Request_message_type_support_handle,
  NULL  // response message
  // roboworks_brain_interfaces__srv__detail__task_opt__rosidl_typesupport_introspection_c__TaskOpt_Response_message_type_support_handle
};

static rosidl_service_type_support_t roboworks_brain_interfaces__srv__detail__task_opt__rosidl_typesupport_introspection_c__TaskOpt_service_type_support_handle = {
  0,
  &roboworks_brain_interfaces__srv__detail__task_opt__rosidl_typesupport_introspection_c__TaskOpt_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, roboworks_brain_interfaces, srv, TaskOpt_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, roboworks_brain_interfaces, srv, TaskOpt_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_roboworks_brain_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, roboworks_brain_interfaces, srv, TaskOpt)() {
  if (!roboworks_brain_interfaces__srv__detail__task_opt__rosidl_typesupport_introspection_c__TaskOpt_service_type_support_handle.typesupport_identifier) {
    roboworks_brain_interfaces__srv__detail__task_opt__rosidl_typesupport_introspection_c__TaskOpt_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)roboworks_brain_interfaces__srv__detail__task_opt__rosidl_typesupport_introspection_c__TaskOpt_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, roboworks_brain_interfaces, srv, TaskOpt_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, roboworks_brain_interfaces, srv, TaskOpt_Response)()->data;
  }

  return &roboworks_brain_interfaces__srv__detail__task_opt__rosidl_typesupport_introspection_c__TaskOpt_service_type_support_handle;
}
