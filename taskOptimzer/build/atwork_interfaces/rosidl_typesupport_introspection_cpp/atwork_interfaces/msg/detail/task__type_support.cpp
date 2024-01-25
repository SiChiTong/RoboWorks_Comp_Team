// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from atwork_interfaces:msg/Task.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "atwork_interfaces/msg/detail/task__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace atwork_interfaces
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void Task_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) atwork_interfaces::msg::Task(_init);
}

void Task_fini_function(void * message_memory)
{
  auto typed_message = static_cast<atwork_interfaces::msg::Task *>(message_memory);
  typed_message->~Task();
}

size_t size_function__Task__execute_on(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<atwork_interfaces::msg::RobotHeader> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Task__execute_on(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<atwork_interfaces::msg::RobotHeader> *>(untyped_member);
  return &member[index];
}

void * get_function__Task__execute_on(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<atwork_interfaces::msg::RobotHeader> *>(untyped_member);
  return &member[index];
}

void fetch_function__Task__execute_on(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const atwork_interfaces::msg::RobotHeader *>(
    get_const_function__Task__execute_on(untyped_member, index));
  auto & value = *reinterpret_cast<atwork_interfaces::msg::RobotHeader *>(untyped_value);
  value = item;
}

void assign_function__Task__execute_on(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<atwork_interfaces::msg::RobotHeader *>(
    get_function__Task__execute_on(untyped_member, index));
  const auto & value = *reinterpret_cast<const atwork_interfaces::msg::RobotHeader *>(untyped_value);
  item = value;
}

void resize_function__Task__execute_on(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<atwork_interfaces::msg::RobotHeader> *>(untyped_member);
  member->resize(size);
}

size_t size_function__Task__arena_start_state(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<atwork_interfaces::msg::Workstation> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Task__arena_start_state(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<atwork_interfaces::msg::Workstation> *>(untyped_member);
  return &member[index];
}

void * get_function__Task__arena_start_state(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<atwork_interfaces::msg::Workstation> *>(untyped_member);
  return &member[index];
}

void fetch_function__Task__arena_start_state(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const atwork_interfaces::msg::Workstation *>(
    get_const_function__Task__arena_start_state(untyped_member, index));
  auto & value = *reinterpret_cast<atwork_interfaces::msg::Workstation *>(untyped_value);
  value = item;
}

void assign_function__Task__arena_start_state(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<atwork_interfaces::msg::Workstation *>(
    get_function__Task__arena_start_state(untyped_member, index));
  const auto & value = *reinterpret_cast<const atwork_interfaces::msg::Workstation *>(untyped_value);
  item = value;
}

void resize_function__Task__arena_start_state(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<atwork_interfaces::msg::Workstation> *>(untyped_member);
  member->resize(size);
}

size_t size_function__Task__arena_target_state(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<atwork_interfaces::msg::Workstation> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Task__arena_target_state(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<atwork_interfaces::msg::Workstation> *>(untyped_member);
  return &member[index];
}

void * get_function__Task__arena_target_state(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<atwork_interfaces::msg::Workstation> *>(untyped_member);
  return &member[index];
}

void fetch_function__Task__arena_target_state(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const atwork_interfaces::msg::Workstation *>(
    get_const_function__Task__arena_target_state(untyped_member, index));
  auto & value = *reinterpret_cast<atwork_interfaces::msg::Workstation *>(untyped_value);
  value = item;
}

void assign_function__Task__arena_target_state(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<atwork_interfaces::msg::Workstation *>(
    get_function__Task__arena_target_state(untyped_member, index));
  const auto & value = *reinterpret_cast<const atwork_interfaces::msg::Workstation *>(untyped_value);
  item = value;
}

void resize_function__Task__arena_target_state(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<atwork_interfaces::msg::Workstation> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Task_message_member_array[10] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(atwork_interfaces::msg::Task, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "execute_on",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<atwork_interfaces::msg::RobotHeader>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(atwork_interfaces::msg::Task, execute_on),  // bytes offset in struct
    nullptr,  // default value
    size_function__Task__execute_on,  // size() function pointer
    get_const_function__Task__execute_on,  // get_const(index) function pointer
    get_function__Task__execute_on,  // get(index) function pointer
    fetch_function__Task__execute_on,  // fetch(index, &value) function pointer
    assign_function__Task__execute_on,  // assign(index, value) function pointer
    resize_function__Task__execute_on  // resize(index) function pointer
  },
  {
    "arena_start_state",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<atwork_interfaces::msg::Workstation>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(atwork_interfaces::msg::Task, arena_start_state),  // bytes offset in struct
    nullptr,  // default value
    size_function__Task__arena_start_state,  // size() function pointer
    get_const_function__Task__arena_start_state,  // get_const(index) function pointer
    get_function__Task__arena_start_state,  // get(index) function pointer
    fetch_function__Task__arena_start_state,  // fetch(index, &value) function pointer
    assign_function__Task__arena_start_state,  // assign(index, value) function pointer
    resize_function__Task__arena_start_state  // resize(index) function pointer
  },
  {
    "arena_target_state",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<atwork_interfaces::msg::Workstation>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(atwork_interfaces::msg::Task, arena_target_state),  // bytes offset in struct
    nullptr,  // default value
    size_function__Task__arena_target_state,  // size() function pointer
    get_const_function__Task__arena_target_state,  // get_const(index) function pointer
    get_function__Task__arena_target_state,  // get(index) function pointer
    fetch_function__Task__arena_target_state,  // fetch(index, &value) function pointer
    assign_function__Task__arena_target_state,  // assign(index, value) function pointer
    resize_function__Task__arena_target_state  // resize(index) function pointer
  },
  {
    "prep_time",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<builtin_interfaces::msg::Duration>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(atwork_interfaces::msg::Task, prep_time),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "exec_time",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<builtin_interfaces::msg::Duration>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(atwork_interfaces::msg::Task, exec_time),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "type",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(atwork_interfaces::msg::Task, type),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(atwork_interfaces::msg::Task, id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "config",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(atwork_interfaces::msg::Task, config),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "commit",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(atwork_interfaces::msg::Task, commit),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Task_message_members = {
  "atwork_interfaces::msg",  // message namespace
  "Task",  // message name
  10,  // number of fields
  sizeof(atwork_interfaces::msg::Task),
  Task_message_member_array,  // message members
  Task_init_function,  // function to initialize message memory (memory has to be allocated)
  Task_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Task_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Task_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace atwork_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<atwork_interfaces::msg::Task>()
{
  return &::atwork_interfaces::msg::rosidl_typesupport_introspection_cpp::Task_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, atwork_interfaces, msg, Task)() {
  return &::atwork_interfaces::msg::rosidl_typesupport_introspection_cpp::Task_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
