// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from atwork_interfaces:msg/Workstation.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "atwork_interfaces/msg/detail/workstation__struct.hpp"
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

void Workstation_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) atwork_interfaces::msg::Workstation(_init);
}

void Workstation_fini_function(void * message_memory)
{
  auto typed_message = static_cast<atwork_interfaces::msg::Workstation *>(message_memory);
  typed_message->~Workstation();
}

size_t size_function__Workstation__objects(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<atwork_interfaces::msg::Object> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Workstation__objects(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<atwork_interfaces::msg::Object> *>(untyped_member);
  return &member[index];
}

void * get_function__Workstation__objects(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<atwork_interfaces::msg::Object> *>(untyped_member);
  return &member[index];
}

void fetch_function__Workstation__objects(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const atwork_interfaces::msg::Object *>(
    get_const_function__Workstation__objects(untyped_member, index));
  auto & value = *reinterpret_cast<atwork_interfaces::msg::Object *>(untyped_value);
  value = item;
}

void assign_function__Workstation__objects(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<atwork_interfaces::msg::Object *>(
    get_function__Workstation__objects(untyped_member, index));
  const auto & value = *reinterpret_cast<const atwork_interfaces::msg::Object *>(untyped_value);
  item = value;
}

void resize_function__Workstation__objects(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<atwork_interfaces::msg::Object> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Workstation_message_member_array[4] = {
  {
    "objects",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<atwork_interfaces::msg::Object>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(atwork_interfaces::msg::Workstation, objects),  // bytes offset in struct
    nullptr,  // default value
    size_function__Workstation__objects,  // size() function pointer
    get_const_function__Workstation__objects,  // get_const(index) function pointer
    get_function__Workstation__objects,  // get(index) function pointer
    fetch_function__Workstation__objects,  // fetch(index, &value) function pointer
    assign_function__Workstation__objects,  // assign(index, value) function pointer
    resize_function__Workstation__objects  // resize(index) function pointer
  },
  {
    "name",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(atwork_interfaces::msg::Workstation, name),  // bytes offset in struct
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
    offsetof(atwork_interfaces::msg::Workstation, type),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "pose",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geometry_msgs::msg::Pose>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(atwork_interfaces::msg::Workstation, pose),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Workstation_message_members = {
  "atwork_interfaces::msg",  // message namespace
  "Workstation",  // message name
  4,  // number of fields
  sizeof(atwork_interfaces::msg::Workstation),
  Workstation_message_member_array,  // message members
  Workstation_init_function,  // function to initialize message memory (memory has to be allocated)
  Workstation_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Workstation_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Workstation_message_members,
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
get_message_type_support_handle<atwork_interfaces::msg::Workstation>()
{
  return &::atwork_interfaces::msg::rosidl_typesupport_introspection_cpp::Workstation_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, atwork_interfaces, msg, Workstation)() {
  return &::atwork_interfaces::msg::rosidl_typesupport_introspection_cpp::Workstation_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
