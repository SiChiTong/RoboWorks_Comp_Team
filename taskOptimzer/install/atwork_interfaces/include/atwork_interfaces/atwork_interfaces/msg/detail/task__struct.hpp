// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from atwork_interfaces:msg/Task.idl
// generated code does not contain a copyright notice

#ifndef ATWORK_INTERFACES__MSG__DETAIL__TASK__STRUCT_HPP_
#define ATWORK_INTERFACES__MSG__DETAIL__TASK__STRUCT_HPP_

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
// Member 'execute_on'
#include "atwork_interfaces/msg/detail/robot_header__struct.hpp"
// Member 'arena_start_state'
// Member 'arena_target_state'
#include "atwork_interfaces/msg/detail/workstation__struct.hpp"
// Member 'prep_time'
// Member 'exec_time'
#include "builtin_interfaces/msg/detail/duration__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__atwork_interfaces__msg__Task __attribute__((deprecated))
#else
# define DEPRECATED__atwork_interfaces__msg__Task __declspec(deprecated)
#endif

namespace atwork_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Task_
{
  using Type = Task_<ContainerAllocator>;

  explicit Task_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    prep_time(_init),
    exec_time(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->type = "";
      this->id = 0ull;
      this->config = "";
      this->commit = 0ull;
    }
  }

  explicit Task_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    prep_time(_alloc, _init),
    exec_time(_alloc, _init),
    type(_alloc),
    config(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->type = "";
      this->id = 0ull;
      this->config = "";
      this->commit = 0ull;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _execute_on_type =
    std::vector<atwork_interfaces::msg::RobotHeader_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<atwork_interfaces::msg::RobotHeader_<ContainerAllocator>>>;
  _execute_on_type execute_on;
  using _arena_start_state_type =
    std::vector<atwork_interfaces::msg::Workstation_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<atwork_interfaces::msg::Workstation_<ContainerAllocator>>>;
  _arena_start_state_type arena_start_state;
  using _arena_target_state_type =
    std::vector<atwork_interfaces::msg::Workstation_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<atwork_interfaces::msg::Workstation_<ContainerAllocator>>>;
  _arena_target_state_type arena_target_state;
  using _prep_time_type =
    builtin_interfaces::msg::Duration_<ContainerAllocator>;
  _prep_time_type prep_time;
  using _exec_time_type =
    builtin_interfaces::msg::Duration_<ContainerAllocator>;
  _exec_time_type exec_time;
  using _type_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _type_type type;
  using _id_type =
    uint64_t;
  _id_type id;
  using _config_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _config_type config;
  using _commit_type =
    uint64_t;
  _commit_type commit;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__execute_on(
    const std::vector<atwork_interfaces::msg::RobotHeader_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<atwork_interfaces::msg::RobotHeader_<ContainerAllocator>>> & _arg)
  {
    this->execute_on = _arg;
    return *this;
  }
  Type & set__arena_start_state(
    const std::vector<atwork_interfaces::msg::Workstation_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<atwork_interfaces::msg::Workstation_<ContainerAllocator>>> & _arg)
  {
    this->arena_start_state = _arg;
    return *this;
  }
  Type & set__arena_target_state(
    const std::vector<atwork_interfaces::msg::Workstation_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<atwork_interfaces::msg::Workstation_<ContainerAllocator>>> & _arg)
  {
    this->arena_target_state = _arg;
    return *this;
  }
  Type & set__prep_time(
    const builtin_interfaces::msg::Duration_<ContainerAllocator> & _arg)
  {
    this->prep_time = _arg;
    return *this;
  }
  Type & set__exec_time(
    const builtin_interfaces::msg::Duration_<ContainerAllocator> & _arg)
  {
    this->exec_time = _arg;
    return *this;
  }
  Type & set__type(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->type = _arg;
    return *this;
  }
  Type & set__id(
    const uint64_t & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__config(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->config = _arg;
    return *this;
  }
  Type & set__commit(
    const uint64_t & _arg)
  {
    this->commit = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    atwork_interfaces::msg::Task_<ContainerAllocator> *;
  using ConstRawPtr =
    const atwork_interfaces::msg::Task_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<atwork_interfaces::msg::Task_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<atwork_interfaces::msg::Task_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      atwork_interfaces::msg::Task_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<atwork_interfaces::msg::Task_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      atwork_interfaces::msg::Task_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<atwork_interfaces::msg::Task_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<atwork_interfaces::msg::Task_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<atwork_interfaces::msg::Task_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__atwork_interfaces__msg__Task
    std::shared_ptr<atwork_interfaces::msg::Task_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__atwork_interfaces__msg__Task
    std::shared_ptr<atwork_interfaces::msg::Task_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Task_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->execute_on != other.execute_on) {
      return false;
    }
    if (this->arena_start_state != other.arena_start_state) {
      return false;
    }
    if (this->arena_target_state != other.arena_target_state) {
      return false;
    }
    if (this->prep_time != other.prep_time) {
      return false;
    }
    if (this->exec_time != other.exec_time) {
      return false;
    }
    if (this->type != other.type) {
      return false;
    }
    if (this->id != other.id) {
      return false;
    }
    if (this->config != other.config) {
      return false;
    }
    if (this->commit != other.commit) {
      return false;
    }
    return true;
  }
  bool operator!=(const Task_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Task_

// alias to use template instance with default allocator
using Task =
  atwork_interfaces::msg::Task_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace atwork_interfaces

#endif  // ATWORK_INTERFACES__MSG__DETAIL__TASK__STRUCT_HPP_
