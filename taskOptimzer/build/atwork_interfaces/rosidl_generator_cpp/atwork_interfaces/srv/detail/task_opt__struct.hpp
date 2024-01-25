// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from atwork_interfaces:srv/TaskOpt.idl
// generated code does not contain a copyright notice

#ifndef ATWORK_INTERFACES__SRV__DETAIL__TASK_OPT__STRUCT_HPP_
#define ATWORK_INTERFACES__SRV__DETAIL__TASK_OPT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'atwork_task'
#include "atwork_interfaces/msg/detail/task__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__atwork_interfaces__srv__TaskOpt_Request __attribute__((deprecated))
#else
# define DEPRECATED__atwork_interfaces__srv__TaskOpt_Request __declspec(deprecated)
#endif

namespace atwork_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct TaskOpt_Request_
{
  using Type = TaskOpt_Request_<ContainerAllocator>;

  explicit TaskOpt_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : atwork_task(_init)
  {
    (void)_init;
  }

  explicit TaskOpt_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : atwork_task(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _atwork_task_type =
    atwork_interfaces::msg::Task_<ContainerAllocator>;
  _atwork_task_type atwork_task;

  // setters for named parameter idiom
  Type & set__atwork_task(
    const atwork_interfaces::msg::Task_<ContainerAllocator> & _arg)
  {
    this->atwork_task = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    atwork_interfaces::srv::TaskOpt_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const atwork_interfaces::srv::TaskOpt_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<atwork_interfaces::srv::TaskOpt_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<atwork_interfaces::srv::TaskOpt_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      atwork_interfaces::srv::TaskOpt_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<atwork_interfaces::srv::TaskOpt_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      atwork_interfaces::srv::TaskOpt_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<atwork_interfaces::srv::TaskOpt_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<atwork_interfaces::srv::TaskOpt_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<atwork_interfaces::srv::TaskOpt_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__atwork_interfaces__srv__TaskOpt_Request
    std::shared_ptr<atwork_interfaces::srv::TaskOpt_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__atwork_interfaces__srv__TaskOpt_Request
    std::shared_ptr<atwork_interfaces::srv::TaskOpt_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TaskOpt_Request_ & other) const
  {
    if (this->atwork_task != other.atwork_task) {
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
  atwork_interfaces::srv::TaskOpt_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace atwork_interfaces


#ifndef _WIN32
# define DEPRECATED__atwork_interfaces__srv__TaskOpt_Response __attribute__((deprecated))
#else
# define DEPRECATED__atwork_interfaces__srv__TaskOpt_Response __declspec(deprecated)
#endif

namespace atwork_interfaces
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
    atwork_interfaces::srv::TaskOpt_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const atwork_interfaces::srv::TaskOpt_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<atwork_interfaces::srv::TaskOpt_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<atwork_interfaces::srv::TaskOpt_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      atwork_interfaces::srv::TaskOpt_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<atwork_interfaces::srv::TaskOpt_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      atwork_interfaces::srv::TaskOpt_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<atwork_interfaces::srv::TaskOpt_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<atwork_interfaces::srv::TaskOpt_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<atwork_interfaces::srv::TaskOpt_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__atwork_interfaces__srv__TaskOpt_Response
    std::shared_ptr<atwork_interfaces::srv::TaskOpt_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__atwork_interfaces__srv__TaskOpt_Response
    std::shared_ptr<atwork_interfaces::srv::TaskOpt_Response_<ContainerAllocator> const>
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
  atwork_interfaces::srv::TaskOpt_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace atwork_interfaces

namespace atwork_interfaces
{

namespace srv
{

struct TaskOpt
{
  using Request = atwork_interfaces::srv::TaskOpt_Request;
  using Response = atwork_interfaces::srv::TaskOpt_Response;
};

}  // namespace srv

}  // namespace atwork_interfaces

#endif  // ATWORK_INTERFACES__SRV__DETAIL__TASK_OPT__STRUCT_HPP_
