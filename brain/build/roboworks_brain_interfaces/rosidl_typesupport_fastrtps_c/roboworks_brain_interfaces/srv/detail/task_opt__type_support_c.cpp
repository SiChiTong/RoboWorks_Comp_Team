// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from roboworks_brain_interfaces:srv/TaskOpt.idl
// generated code does not contain a copyright notice
#include "roboworks_brain_interfaces/srv/detail/task_opt__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "roboworks_brain_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "roboworks_brain_interfaces/srv/detail/task_opt__struct.h"
#include "roboworks_brain_interfaces/srv/detail/task_opt__functions.h"
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

#include "rosidl_runtime_c/string.h"  // game_state, task_list
#include "rosidl_runtime_c/string_functions.h"  // game_state, task_list

// forward declare type support functions


using _TaskOpt_Request__ros_msg_type = roboworks_brain_interfaces__srv__TaskOpt_Request;

static bool _TaskOpt_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _TaskOpt_Request__ros_msg_type * ros_message = static_cast<const _TaskOpt_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: task_list
  {
    const rosidl_runtime_c__String * str = &ros_message->task_list;
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

  // Field name: game_state
  {
    const rosidl_runtime_c__String * str = &ros_message->game_state;
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

static bool _TaskOpt_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _TaskOpt_Request__ros_msg_type * ros_message = static_cast<_TaskOpt_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: task_list
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->task_list.data) {
      rosidl_runtime_c__String__init(&ros_message->task_list);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->task_list,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'task_list'\n");
      return false;
    }
  }

  // Field name: game_state
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->game_state.data) {
      rosidl_runtime_c__String__init(&ros_message->game_state);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->game_state,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'game_state'\n");
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_roboworks_brain_interfaces
size_t get_serialized_size_roboworks_brain_interfaces__srv__TaskOpt_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _TaskOpt_Request__ros_msg_type * ros_message = static_cast<const _TaskOpt_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name task_list
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->task_list.size + 1);
  // field.name game_state
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->game_state.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _TaskOpt_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_roboworks_brain_interfaces__srv__TaskOpt_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_roboworks_brain_interfaces
size_t max_serialized_size_roboworks_brain_interfaces__srv__TaskOpt_Request(
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

  // member: task_list
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
  // member: game_state
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
    using DataType = roboworks_brain_interfaces__srv__TaskOpt_Request;
    is_plain =
      (
      offsetof(DataType, game_state) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _TaskOpt_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_roboworks_brain_interfaces__srv__TaskOpt_Request(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_TaskOpt_Request = {
  "roboworks_brain_interfaces::srv",
  "TaskOpt_Request",
  _TaskOpt_Request__cdr_serialize,
  _TaskOpt_Request__cdr_deserialize,
  _TaskOpt_Request__get_serialized_size,
  _TaskOpt_Request__max_serialized_size
};

static rosidl_message_type_support_t _TaskOpt_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_TaskOpt_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, roboworks_brain_interfaces, srv, TaskOpt_Request)() {
  return &_TaskOpt_Request__type_support;
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
// #include "roboworks_brain_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "roboworks_brain_interfaces/srv/detail/task_opt__struct.h"
// already included above
// #include "roboworks_brain_interfaces/srv/detail/task_opt__functions.h"
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

// already included above
// #include "rosidl_runtime_c/string.h"  // masterlist
// already included above
// #include "rosidl_runtime_c/string_functions.h"  // masterlist

// forward declare type support functions


using _TaskOpt_Response__ros_msg_type = roboworks_brain_interfaces__srv__TaskOpt_Response;

static bool _TaskOpt_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _TaskOpt_Response__ros_msg_type * ros_message = static_cast<const _TaskOpt_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: masterlist
  {
    size_t size = ros_message->masterlist.size;
    auto array_ptr = ros_message->masterlist.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      const rosidl_runtime_c__String * str = &array_ptr[i];
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
  }

  return true;
}

static bool _TaskOpt_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _TaskOpt_Response__ros_msg_type * ros_message = static_cast<_TaskOpt_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: masterlist
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->masterlist.data) {
      rosidl_runtime_c__String__Sequence__fini(&ros_message->masterlist);
    }
    if (!rosidl_runtime_c__String__Sequence__init(&ros_message->masterlist, size)) {
      fprintf(stderr, "failed to create array for field 'masterlist'");
      return false;
    }
    auto array_ptr = ros_message->masterlist.data;
    for (size_t i = 0; i < size; ++i) {
      std::string tmp;
      cdr >> tmp;
      auto & ros_i = array_ptr[i];
      if (!ros_i.data) {
        rosidl_runtime_c__String__init(&ros_i);
      }
      bool succeeded = rosidl_runtime_c__String__assign(
        &ros_i,
        tmp.c_str());
      if (!succeeded) {
        fprintf(stderr, "failed to assign string into field 'masterlist'\n");
        return false;
      }
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_roboworks_brain_interfaces
size_t get_serialized_size_roboworks_brain_interfaces__srv__TaskOpt_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _TaskOpt_Response__ros_msg_type * ros_message = static_cast<const _TaskOpt_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name masterlist
  {
    size_t array_size = ros_message->masterlist.size;
    auto array_ptr = ros_message->masterlist.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (array_ptr[index].size + 1);
    }
  }

  return current_alignment - initial_alignment;
}

static uint32_t _TaskOpt_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_roboworks_brain_interfaces__srv__TaskOpt_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_roboworks_brain_interfaces
size_t max_serialized_size_roboworks_brain_interfaces__srv__TaskOpt_Response(
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

  // member: masterlist
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

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
    using DataType = roboworks_brain_interfaces__srv__TaskOpt_Response;
    is_plain =
      (
      offsetof(DataType, masterlist) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _TaskOpt_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_roboworks_brain_interfaces__srv__TaskOpt_Response(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_TaskOpt_Response = {
  "roboworks_brain_interfaces::srv",
  "TaskOpt_Response",
  _TaskOpt_Response__cdr_serialize,
  _TaskOpt_Response__cdr_deserialize,
  _TaskOpt_Response__get_serialized_size,
  _TaskOpt_Response__max_serialized_size
};

static rosidl_message_type_support_t _TaskOpt_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_TaskOpt_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, roboworks_brain_interfaces, srv, TaskOpt_Response)() {
  return &_TaskOpt_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "roboworks_brain_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "roboworks_brain_interfaces/srv/task_opt.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t TaskOpt__callbacks = {
  "roboworks_brain_interfaces::srv",
  "TaskOpt",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, roboworks_brain_interfaces, srv, TaskOpt_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, roboworks_brain_interfaces, srv, TaskOpt_Response)(),
};

static rosidl_service_type_support_t TaskOpt__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &TaskOpt__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, roboworks_brain_interfaces, srv, TaskOpt)() {
  return &TaskOpt__handle;
}

#if defined(__cplusplus)
}
#endif
