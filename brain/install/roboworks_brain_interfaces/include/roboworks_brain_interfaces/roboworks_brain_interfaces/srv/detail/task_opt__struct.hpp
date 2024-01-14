// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from roboworks_brain_interfaces:srv/TaskOpt.idl
// generated code does not contain a copyright notice

#ifndef ROBOWORKS_BRAIN_INTERFACES__SRV__DETAIL__TASK_OPT__STRUCT_HPP_
#define ROBOWORKS_BRAIN_INTERFACES__SRV__DETAIL__TASK_OPT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__roboworks_brain_interfaces__srv__TaskOpt_Request __attribute__((deprecated))
#else
# define DEPRECATED__roboworks_brain_interfaces__srv__TaskOpt_Request __declspec(deprecated)
#endif

namespace roboworks_brain_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct TaskOpt_Request_
{
  using Type = TaskOpt_Request_<ContainerAllocator>;

  explicit TaskOpt_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->task_list = "";
      this->game_state = "";
    }
  }

  explicit TaskOpt_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : task_list(_alloc),
    game_state(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->task_list = "";
      this->game_state = "";
    }
  }

  // field types and members
  using _task_list_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _task_list_type task_list;
  using _game_state_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _game_state_type game_state;

  // setters for named parameter idiom
  Type & set__task_list(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->task_list = _arg;
    return *this;
  }
  Type & set__game_state(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->game_state = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    roboworks_brain_interfaces::srv::TaskOpt_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const roboworks_brain_interfaces::srv::TaskOpt_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<roboworks_brain_interfaces::srv::TaskOpt_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<roboworks_brain_interfaces::srv::TaskOpt_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      roboworks_brain_interfaces::srv::TaskOpt_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<roboworks_brain_interfaces::srv::TaskOpt_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      roboworks_brain_interfaces::srv::TaskOpt_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<roboworks_brain_interfaces::srv::TaskOpt_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<roboworks_brain_interfaces::srv::TaskOpt_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<roboworks_brain_interfaces::srv::TaskOpt_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__roboworks_brain_interfaces__srv__TaskOpt_Request
    std::shared_ptr<roboworks_brain_interfaces::srv::TaskOpt_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__roboworks_brain_interfaces__srv__TaskOpt_Request
    std::shared_ptr<roboworks_brain_interfaces::srv::TaskOpt_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TaskOpt_Request_ & other) const
  {
    if (this->task_list != other.task_list) {
      return false;
    }
    if (this->game_state != other.game_state) {
      return false;
    }
    return true;
  }
  bool operator!=(const TaskOpt_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TaskOpt_Request_

// alias to use template instance with default allocator
using TaskOpt_Request =
  roboworks_brain_interfaces::srv::TaskOpt_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace roboworks_brain_interfaces


#ifndef _WIN32
# define DEPRECATED__roboworks_brain_interfaces__srv__TaskOpt_Response __attribute__((deprecated))
#else
# define DEPRECATED__roboworks_brain_interfaces__srv__TaskOpt_Response __declspec(deprecated)
#endif

namespace roboworks_brain_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct TaskOpt_Response_
{
  using Type = TaskOpt_Response_<ContainerAllocator>;

  explicit TaskOpt_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit TaskOpt_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _masterlist_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _masterlist_type masterlist;

  // setters for named parameter idiom
  Type & set__masterlist(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->masterlist = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    roboworks_brain_interfaces::srv::TaskOpt_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const roboworks_brain_interfaces::srv::TaskOpt_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<roboworks_brain_interfaces::srv::TaskOpt_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<roboworks_brain_interfaces::srv::TaskOpt_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      roboworks_brain_interfaces::srv::TaskOpt_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<roboworks_brain_interfaces::srv::TaskOpt_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      roboworks_brain_interfaces::srv::TaskOpt_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<roboworks_brain_interfaces::srv::TaskOpt_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<roboworks_brain_interfaces::srv::TaskOpt_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<roboworks_brain_interfaces::srv::TaskOpt_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__roboworks_brain_interfaces__srv__TaskOpt_Response
    std::shared_ptr<roboworks_brain_interfaces::srv::TaskOpt_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__roboworks_brain_interfaces__srv__TaskOpt_Response
    std::shared_ptr<roboworks_brain_interfaces::srv::TaskOpt_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TaskOpt_Response_ & other) const
  {
    if (this->masterlist != other.masterlist) {
      return false;
    }
    return true;
  }
  bool operator!=(const TaskOpt_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TaskOpt_Response_

// alias to use template instance with default allocator
using TaskOpt_Response =
  roboworks_brain_interfaces::srv::TaskOpt_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace roboworks_brain_interfaces

namespace roboworks_brain_interfaces
{

namespace srv
{

struct TaskOpt
{
  using Request = roboworks_brain_interfaces::srv::TaskOpt_Request;
  using Response = roboworks_brain_interfaces::srv::TaskOpt_Response;
};

}  // namespace srv

}  // namespace roboworks_brain_interfaces

#endif  // ROBOWORKS_BRAIN_INTERFACES__SRV__DETAIL__TASK_OPT__STRUCT_HPP_
