// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from atwork_interfaces:srv/GenerateTask.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "atwork_interfaces/srv/detail/generate_task__rosidl_typesupport_introspection_c.h"
#include "atwork_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "atwork_interfaces/srv/detail/generate_task__functions.h"
#include "atwork_interfaces/srv/detail/generate_task__struct.h"


// Include directives for member types
// Member `task_name`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void atwork_interfaces__srv__GenerateTask_Request__rosidl_typesupport_introspection_c__GenerateTask_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  atwork_interfaces__srv__GenerateTask_Request__init(message_memory);
}

void atwork_interfaces__srv__GenerateTask_Request__rosidl_typesupport_introspection_c__GenerateTask_Request_fini_function(void * message_memory)
{
  atwork_interfaces__srv__GenerateTask_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember atwork_interfaces__srv__GenerateTask_Request__rosidl_typesupport_introspection_c__GenerateTask_Request_message_member_array[1] = {
  {
    "task_name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(atwork_interfaces__srv__GenerateTask_Request, task_name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers atwork_interfaces__srv__GenerateTask_Request__rosidl_typesupport_introspection_c__GenerateTask_Request_message_members = {
  "atwork_interfaces__srv",  // message namespace
  "GenerateTask_Request",  // message name
  1,  // number of fields
  sizeof(atwork_interfaces__srv__GenerateTask_Request),
  atwork_interfaces__srv__GenerateTask_Request__rosidl_typesupport_introspection_c__GenerateTask_Request_message_member_array,  // message members
  atwork_interfaces__srv__GenerateTask_Request__rosidl_typesupport_introspection_c__GenerateTask_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  atwork_interfaces__srv__GenerateTask_Request__rosidl_typesupport_introspection_c__GenerateTask_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t atwork_interfaces__srv__GenerateTask_Request__rosidl_typesupport_introspection_c__GenerateTask_Request_message_type_support_handle = {
  0,
  &atwork_interfaces__srv__GenerateTask_Request__rosidl_typesupport_introspection_c__GenerateTask_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_atwork_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, atwork_interfaces, srv, GenerateTask_Request)() {
  if (!atwork_interfaces__srv__GenerateTask_Request__rosidl_typesupport_introspection_c__GenerateTask_Request_message_type_support_handle.typesupport_identifier) {
    atwork_interfaces__srv__GenerateTask_Request__rosidl_typesupport_introspection_c__GenerateTask_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &atwork_interfaces__srv__GenerateTask_Request__rosidl_typesupport_introspection_c__GenerateTask_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "atwork_interfaces/srv/detail/generate_task__rosidl_typesupport_introspection_c.h"
// already included above
// #include "atwork_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "atwork_interfaces/srv/detail/generate_task__functions.h"
// already included above
// #include "atwork_interfaces/srv/detail/generate_task__struct.h"


// Include directives for member types
// Member `task`
#include "atwork_interfaces/msg/task.h"
// Member `task`
#include "atwork_interfaces/msg/detail/task__rosidl_typesupport_introspection_c.h"
// Member `error`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void atwork_interfaces__srv__GenerateTask_Response__rosidl_typesupport_introspection_c__GenerateTask_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  atwork_interfaces__srv__GenerateTask_Response__init(message_memory);
}

void atwork_interfaces__srv__GenerateTask_Response__rosidl_typesupport_introspection_c__GenerateTask_Response_fini_function(void * message_memory)
{
  atwork_interfaces__srv__GenerateTask_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember atwork_interfaces__srv__GenerateTask_Response__rosidl_typesupport_introspection_c__GenerateTask_Response_message_member_array[2] = {
  {
    "task",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(atwork_interfaces__srv__GenerateTask_Response, task),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "error",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(atwork_interfaces__srv__GenerateTask_Response, error),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers atwork_interfaces__srv__GenerateTask_Response__rosidl_typesupport_introspection_c__GenerateTask_Response_message_members = {
  "atwork_interfaces__srv",  // message namespace
  "GenerateTask_Response",  // message name
  2,  // number of fields
  sizeof(atwork_interfaces__srv__GenerateTask_Response),
  atwork_interfaces__srv__GenerateTask_Response__rosidl_typesupport_introspection_c__GenerateTask_Response_message_member_array,  // message members
  atwork_interfaces__srv__GenerateTask_Response__rosidl_typesupport_introspection_c__GenerateTask_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  atwork_interfaces__srv__GenerateTask_Response__rosidl_typesupport_introspection_c__GenerateTask_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t atwork_interfaces__srv__GenerateTask_Response__rosidl_typesupport_introspection_c__GenerateTask_Response_message_type_support_handle = {
  0,
  &atwork_interfaces__srv__GenerateTask_Response__rosidl_typesupport_introspection_c__GenerateTask_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_atwork_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, atwork_interfaces, srv, GenerateTask_Response)() {
  atwork_interfaces__srv__GenerateTask_Response__rosidl_typesupport_introspection_c__GenerateTask_Response_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, atwork_interfaces, msg, Task)();
  if (!atwork_interfaces__srv__GenerateTask_Response__rosidl_typesupport_introspection_c__GenerateTask_Response_message_type_support_handle.typesupport_identifier) {
    atwork_interfaces__srv__GenerateTask_Response__rosidl_typesupport_introspection_c__GenerateTask_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &atwork_interfaces__srv__GenerateTask_Response__rosidl_typesupport_introspection_c__GenerateTask_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "atwork_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "atwork_interfaces/srv/detail/generate_task__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers atwork_interfaces__srv__detail__generate_task__rosidl_typesupport_introspection_c__GenerateTask_service_members = {
  "atwork_interfaces__srv",  // service namespace
  "GenerateTask",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // atwork_interfaces__srv__detail__generate_task__rosidl_typesupport_introspection_c__GenerateTask_Request_message_type_support_handle,
  NULL  // response message
  // atwork_interfaces__srv__detail__generate_task__rosidl_typesupport_introspection_c__GenerateTask_Response_message_type_support_handle
};

static rosidl_service_type_support_t atwork_interfaces__srv__detail__generate_task__rosidl_typesupport_introspection_c__GenerateTask_service_type_support_handle = {
  0,
  &atwork_interfaces__srv__detail__generate_task__rosidl_typesupport_introspection_c__GenerateTask_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, atwork_interfaces, srv, GenerateTask_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, atwork_interfaces, srv, GenerateTask_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_atwork_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, atwork_interfaces, srv, GenerateTask)() {
  if (!atwork_interfaces__srv__detail__generate_task__rosidl_typesupport_introspection_c__GenerateTask_service_type_support_handle.typesupport_identifier) {
    atwork_interfaces__srv__detail__generate_task__rosidl_typesupport_introspection_c__GenerateTask_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)atwork_interfaces__srv__detail__generate_task__rosidl_typesupport_introspection_c__GenerateTask_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, atwork_interfaces, srv, GenerateTask_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, atwork_interfaces, srv, GenerateTask_Response)()->data;
  }

  return &atwork_interfaces__srv__detail__generate_task__rosidl_typesupport_introspection_c__GenerateTask_service_type_support_handle;
}
