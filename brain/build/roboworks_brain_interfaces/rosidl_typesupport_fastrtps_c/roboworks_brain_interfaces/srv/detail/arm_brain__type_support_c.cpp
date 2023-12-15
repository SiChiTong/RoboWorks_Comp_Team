// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from roboworks_brain_interfaces:srv/ArmBrain.idl
// generated code does not contain a copyright notice
#include "roboworks_brain_interfaces/srv/detail/arm_brain__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "roboworks_brain_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "roboworks_brain_interfaces/srv/detail/arm_brain__struct.h"
#include "roboworks_brain_interfaces/srv/detail/arm_brain__functions.h"
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


// forward declare type support functions


using _ArmBrain_Request__ros_msg_type = roboworks_brain_interfaces__srv__ArmBrain_Request;

static bool _ArmBrain_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ArmBrain_Request__ros_msg_type * ros_message = static_cast<const _ArmBrain_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: operation_type
  {
    cdr << ros_message->operation_type;
  }

  // Field name: object_id
  {
    cdr << ros_message->object_id;
  }

  return true;
}

static bool _ArmBrain_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ArmBrain_Request__ros_msg_type * ros_message = static_cast<_ArmBrain_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: operation_type
  {
    cdr >> ros_message->operation_type;
  }

  // Field name: object_id
  {
    cdr >> ros_message->object_id;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_roboworks_brain_interfaces
size_t get_serialized_size_roboworks_brain_interfaces__srv__ArmBrain_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ArmBrain_Request__ros_msg_type * ros_message = static_cast<const _ArmBrain_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name operation_type
  {
    size_t item_size = sizeof(ros_message->operation_type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name object_id
  {
    size_t item_size = sizeof(ros_message->object_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _ArmBrain_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_roboworks_brain_interfaces__srv__ArmBrain_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_roboworks_brain_interfaces
size_t max_serialized_size_roboworks_brain_interfaces__srv__ArmBrain_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: operation_type
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: object_id
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _ArmBrain_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_roboworks_brain_interfaces__srv__ArmBrain_Request(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_ArmBrain_Request = {
  "roboworks_brain_interfaces::srv",
  "ArmBrain_Request",
  _ArmBrain_Request__cdr_serialize,
  _ArmBrain_Request__cdr_deserialize,
  _ArmBrain_Request__get_serialized_size,
  _ArmBrain_Request__max_serialized_size
};

static rosidl_message_type_support_t _ArmBrain_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ArmBrain_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, roboworks_brain_interfaces, srv, ArmBrain_Request)() {
  return &_ArmBrain_Request__type_support;
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
// #include "roboworks_brain_interfaces/srv/detail/arm_brain__struct.h"
// already included above
// #include "roboworks_brain_interfaces/srv/detail/arm_brain__functions.h"
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

#include "rosidl_runtime_c/string.h"  // instruction
#include "rosidl_runtime_c/string_functions.h"  // instruction

// forward declare type support functions


using _ArmBrain_Response__ros_msg_type = roboworks_brain_interfaces__srv__ArmBrain_Response;

static bool _ArmBrain_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ArmBrain_Response__ros_msg_type * ros_message = static_cast<const _ArmBrain_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: success
  {
    cdr << ros_message->success;
  }

  // Field name: instruction
  {
    const rosidl_runtime_c__String * str = &ros_message->instruction;
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

static bool _ArmBrain_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ArmBrain_Response__ros_msg_type * ros_message = static_cast<_ArmBrain_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: success
  {
    cdr >> ros_message->success;
  }

  // Field name: instruction
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->instruction.data) {
      rosidl_runtime_c__String__init(&ros_message->instruction);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->instruction,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'instruction'\n");
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_roboworks_brain_interfaces
size_t get_serialized_size_roboworks_brain_interfaces__srv__ArmBrain_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ArmBrain_Response__ros_msg_type * ros_message = static_cast<const _ArmBrain_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name success
  {
    size_t item_size = sizeof(ros_message->success);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name instruction
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->instruction.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _ArmBrain_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_roboworks_brain_interfaces__srv__ArmBrain_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_roboworks_brain_interfaces
size_t max_serialized_size_roboworks_brain_interfaces__srv__ArmBrain_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: success
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: instruction
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

  return current_alignment - initial_alignment;
}

static size_t _ArmBrain_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_roboworks_brain_interfaces__srv__ArmBrain_Response(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_ArmBrain_Response = {
  "roboworks_brain_interfaces::srv",
  "ArmBrain_Response",
  _ArmBrain_Response__cdr_serialize,
  _ArmBrain_Response__cdr_deserialize,
  _ArmBrain_Response__get_serialized_size,
  _ArmBrain_Response__max_serialized_size
};

static rosidl_message_type_support_t _ArmBrain_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ArmBrain_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, roboworks_brain_interfaces, srv, ArmBrain_Response)() {
  return &_ArmBrain_Response__type_support;
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
#include "roboworks_brain_interfaces/srv/arm_brain.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t ArmBrain__callbacks = {
  "roboworks_brain_interfaces::srv",
  "ArmBrain",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, roboworks_brain_interfaces, srv, ArmBrain_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, roboworks_brain_interfaces, srv, ArmBrain_Response)(),
};

static rosidl_service_type_support_t ArmBrain__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &ArmBrain__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, roboworks_brain_interfaces, srv, ArmBrain)() {
  return &ArmBrain__handle;
}

#if defined(__cplusplus)
}
#endif
