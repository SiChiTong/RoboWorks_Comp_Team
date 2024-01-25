// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from atwork_interfaces:msg/Workstation.idl
// generated code does not contain a copyright notice

#ifndef ATWORK_INTERFACES__MSG__DETAIL__WORKSTATION__STRUCT_HPP_
#define ATWORK_INTERFACES__MSG__DETAIL__WORKSTATION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'objects'
#include "atwork_interfaces/msg/detail/object__struct.hpp"
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__atwork_interfaces__msg__Workstation __attribute__((deprecated))
#else
# define DEPRECATED__atwork_interfaces__msg__Workstation __declspec(deprecated)
#endif

namespace atwork_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Workstation_
{
  using Type = Workstation_<ContainerAllocator>;

  explicit Workstation_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : pose(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->type = "";
    }
  }

  explicit Workstation_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : name(_alloc),
    type(_alloc),
    pose(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->type = "";
    }
  }

  // field types and members
  using _objects_type =
    std::vector<atwork_interfaces::msg::Object_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<atwork_interfaces::msg::Object_<ContainerAllocator>>>;
  _objects_type objects;
  using _name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _name_type name;
  using _type_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _type_type type;
  using _pose_type =
    geometry_msgs::msg::Pose_<ContainerAllocator>;
  _pose_type pose;

  // setters for named parameter idiom
  Type & set__objects(
    const std::vector<atwork_interfaces::msg::Object_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<atwork_interfaces::msg::Object_<ContainerAllocator>>> & _arg)
  {
    this->objects = _arg;
    return *this;
  }
  Type & set__name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->name = _arg;
    return *this;
  }
  Type & set__type(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->type = _arg;
    return *this;
  }
  Type & set__pose(
    const geometry_msgs::msg::Pose_<ContainerAllocator> & _arg)
  {
    this->pose = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    atwork_interfaces::msg::Workstation_<ContainerAllocator> *;
  using ConstRawPtr =
    const atwork_interfaces::msg::Workstation_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<atwork_interfaces::msg::Workstation_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<atwork_interfaces::msg::Workstation_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      atwork_interfaces::msg::Workstation_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<atwork_interfaces::msg::Workstation_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      atwork_interfaces::msg::Workstation_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<atwork_interfaces::msg::Workstation_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<atwork_interfaces::msg::Workstation_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<atwork_interfaces::msg::Workstation_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__atwork_interfaces__msg__Workstation
    std::shared_ptr<atwork_interfaces::msg::Workstation_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__atwork_interfaces__msg__Workstation
    std::shared_ptr<atwork_interfaces::msg::Workstation_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Workstation_ & other) const
  {
    if (this->objects != other.objects) {
      return false;
    }
    if (this->name != other.name) {
      return false;
    }
    if (this->type != other.type) {
      return false;
    }
    if (this->pose != other.pose) {
      return false;
    }
    return true;
  }
  bool operator!=(const Workstation_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Workstation_

// alias to use template instance with default allocator
using Workstation =
  atwork_interfaces::msg::Workstation_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace atwork_interfaces

#endif  // ATWORK_INTERFACES__MSG__DETAIL__WORKSTATION__STRUCT_HPP_
