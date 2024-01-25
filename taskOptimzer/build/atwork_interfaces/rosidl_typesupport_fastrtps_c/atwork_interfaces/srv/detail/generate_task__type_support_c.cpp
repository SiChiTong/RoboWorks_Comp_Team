// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from atwork_interfaces:srv/GenerateTask.idl
// generated code does not contain a copyright notice
#include "atwork_interfaces/srv/detail/generate_task__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "atwork_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "atwork_interfaces/srv/detail/generate_task__struct.h"
#include "atwork_interfaces/srv/detail/generate_task__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/string.h"  // task_name
#include "rosidl_runtime_c/string_functions.h"  // task_name

// forward declare type support functions


using _GenerateTask_Request__ros_msg_type = atwork_interfaces__srv__GenerateTask_Request;

static bool _GenerateTask_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _GenerateTask_Request__ros_msg_type * ros_message = static_cast<const _GenerateTask_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: task_name
  {
    const rosidl_runtime_c__String * str = &ros_message->task_name;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  return true;
}

static bool _GenerateTask_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _GenerateTask_Request__ros_msg_type * ros_message = static_cast<_GenerateTask_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: task_name
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->task_name.data) {
      rosidl_runtime_c__String__init(&ros_message->task_name);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->task_name,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'task_name'\n");
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_atwork_interfaces
size_t get_serialized_size_atwork_interfaces__srv__GenerateTask_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _GenerateTask_Request__ros_msg_type * ros_message = static_cast<const _GenerateTask_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name task_name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->task_name.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _GenerateTask_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_atwork_interfaces__srv__GenerateTask_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_atwork_interfaces
size_t max_serialized_size_atwork_interfaces__srv__GenerateTask_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: task_name
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = atwork_interfaces__srv__GenerateTask_Request;
    is_plain =
      (
      offsetof(DataType, task_name) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _GenerateTask_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_atwork_interfaces__srv__GenerateTask_Request(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_GenerateTask_Request = {
  "atwork_interfaces::srv",
  "GenerateTask_Request",
  _GenerateTask_Request__cdr_serialize,
  _GenerateTask_Request__cdr_deserialize,
  _GenerateTask_Request__get_serialized_size,
  _GenerateTask_Request__max_serialized_size
};

static rosidl_message_type_support_t _GenerateTask_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_GenerateTask_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, atwork_interfaces, srv, GenerateTask_Request)() {
  return &_GenerateTask_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "atwork_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "atwork_interfaces/srv/detail/generate_task__struct.h"
// already included above
// #include "atwork_interfaces/srv/detail/generate_task__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "atwork_interfaces/msg/detail/task__functions.h"  // task
// already included above
// #include "rosidl_runtime_c/string.h"  // error
// already included above
// #include "rosidl_runtime_c/string_functions.h"  // error

// forward declare type support functions
size_t get_serialized_size_atwork_interfaces__msg__Task(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_atwork_interfaces__msg__Task(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, atwork_interfaces, msg, Task)();


using _GenerateTask_Response__ros_msg_type = atwork_interfaces__srv__GenerateTask_Response;

static bool _GenerateTask_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _GenerateTask_Response__ros_msg_type * ros_message = static_cast<const _GenerateTask_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: task
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, atwork_interfaces, msg, Task
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->task, cdr))
    {
      return false;
    }
  }

  // Field name: error
  {
    const rosidl_runtime_c__String * str = &ros_message->error;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  return true;
}

static bool _GenerateTask_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _GenerateTask_Response__ros_msg_type * ros_message = static_cast<_GenerateTask_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: task
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, atwork_interfaces, msg, Task
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->task))
    {
      return false;
    }
  }

  // Field name: error
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->error.data) {
      rosidl_runtime_c__String__init(&ros_message->error);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->error,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'error'\n");
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_atwork_interfaces
size_t get_serialized_size_atwork_interfaces__srv__GenerateTask_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _GenerateTask_Response__ros_msg_type * ros_message = static_cast<const _GenerateTask_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name task

  current_alignment += get_serialized_size_atwork_interfaces__msg__Task(
    &(ros_message->task), current_alignment);
  // field.name error
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->error.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _GenerateTask_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_atwork_interfaces__srv__GenerateTask_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_atwork_interfaces
size_t max_serialized_size_atwork_interfaces__srv__GenerateTask_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: task
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_atwork_interfaces__msg__Task(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: error
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = atwork_interfaces__srv__GenerateTask_Response;
    is_plain =
      (
      offsetof(DataType, error) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _GenerateTask_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_atwork_interfaces__srv__GenerateTask_Response(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_GenerateTask_Response = {
  "atwork_interfaces::srv",
  "GenerateTask_Response",
  _GenerateTask_Response__cdr_serialize,
  _GenerateTask_Response__cdr_deserialize,
  _GenerateTask_Response__get_serialized_size,
  _GenerateTask_Response__max_serialized_size
};

static rosidl_message_type_support_t _GenerateTask_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_GenerateTask_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, atwork_interfaces, srv, GenerateTask_Response)() {
  return &_GenerateTask_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "atwork_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "atwork_interfaces/srv/generate_task.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t GenerateTask__callbacks = {
  "atwork_interfaces::srv",
  "GenerateTask",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, atwork_interfaces, srv, GenerateTask_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, atwork_interfaces, srv, GenerateTask_Response)(),
};

static rosidl_service_type_support_t GenerateTask__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &GenerateTask__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, atwork_interfaces, srv, GenerateTask)() {
  return &GenerateTask__handle;
}

#if defined(__cplusplus)
}
#endif