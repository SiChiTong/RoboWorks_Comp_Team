// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from atwork_interfaces:msg/RobotHeader.idl
// generated code does not contain a copyright notice

#ifndef ATWORK_INTERFACES__MSG__DETAIL__ROBOT_HEADER__STRUCT_HPP_
#define ATWORK_INTERFACES__MSG__DETAIL__ROBOT_HEADER__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"
// Member 'transforms'
#include "geometry_msgs/msg/detail/transform_stamped__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__atwork_interfaces__msg__RobotHeader __attribute__((deprecated))
#else
# define DEPRECATED__atwork_interfaces__msg__RobotHeader __declspec(deprecated)
#endif

namespace atwork_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RobotHeader_
{
  using Type = RobotHeader_<ContainerAllocator>;

  explicit RobotHeader_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->team_name = "";
      this->robot_name = "";
    }
  }

  explicit RobotHeader_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    team_name(_alloc),
    robot_name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->team_name = "";
      this->robot_name = "";
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _team_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _team_name_type team_name;
  using _robot_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _robot_name_type robot_name;
  using _transforms_type =
    std::vector<geometry_msgs::msg::TransformStamped_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::TransformStamped_<ContainerAllocator>>>;
  _transforms_type transforms;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__team_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->team_name = _arg;
    return *this;
  }
  Type & set__robot_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->robot_name = _arg;
    return *this;
  }
  Type & set__transforms(
    const std::vector<geometry_msgs::msg::TransformStamped_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::TransformStamped_<ContainerAllocator>>> & _arg)
  {
    this->transforms = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    atwork_interfaces::msg::RobotHeader_<ContainerAllocator> *;
  using ConstRawPtr =
    const atwork_interfaces::msg::RobotHeader_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<atwork_interfaces::msg::RobotHeader_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<atwork_interfaces::msg::RobotHeader_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      atwork_interfaces::msg::RobotHeader_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<atwork_interfaces::msg::RobotHeader_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      atwork_interfaces::msg::RobotHeader_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<atwork_interfaces::msg::RobotHeader_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<atwork_interfaces::msg::RobotHeader_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<atwork_interfaces::msg::RobotHeader_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__atwork_interfaces__msg__RobotHeader
    std::shared_ptr<atwork_interfaces::msg::RobotHeader_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__atwork_interfaces__msg__RobotHeader
    std::shared_ptr<atwork_interfaces::msg::RobotHeader_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RobotHeader_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->team_name != other.team_name) {
      return false;
    }
    if (this->robot_name != other.robot_name) {
      return false;
    }
    if (this->transforms != other.transforms) {
      return false;
    }
    return true;
  }
  bool operator!=(const RobotHeader_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RobotHeader_

// alias to use template instance with default allocator
using RobotHeader =
  atwork_interfaces::msg::RobotHeader_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace atwork_interfaces

#endif  // ATWORK_INTERFACES__MSG__DETAIL__ROBOT_HEADER__STRUCT_HPP_
