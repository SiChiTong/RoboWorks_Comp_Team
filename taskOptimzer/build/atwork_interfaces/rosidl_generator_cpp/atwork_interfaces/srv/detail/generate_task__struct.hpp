// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from atwork_interfaces:srv/GenerateTask.idl
// generated code does not contain a copyright notice

#ifndef ATWORK_INTERFACES__SRV__DETAIL__GENERATE_TASK__STRUCT_HPP_
#define ATWORK_INTERFACES__SRV__DETAIL__GENERATE_TASK__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__atwork_interfaces__srv__GenerateTask_Request __attribute__((deprecated))
#else
# define DEPRECATED__atwork_interfaces__srv__GenerateTask_Request __declspec(deprecated)
#endif

namespace atwork_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GenerateTask_Request_
{
  using Type = GenerateTask_Request_<ContainerAllocator>;

  explicit GenerateTask_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->task_name = "";
    }
  }

  explicit GenerateTask_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : task_name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->task_name = "";
    }
  }

  // field types and members
  using _task_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _task_name_type task_name;

  // setters for named parameter idiom
  Type & set__task_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->task_name = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    atwork_interfaces::srv::GenerateTask_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const atwork_interfaces::srv::GenerateTask_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<atwork_interfaces::srv::GenerateTask_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<atwork_interfaces::srv::GenerateTask_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      atwork_interfaces::srv::GenerateTask_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<atwork_interfaces::srv::GenerateTask_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      atwork_interfaces::srv::GenerateTask_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<atwork_interfaces::srv::GenerateTask_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<atwork_interfaces::srv::GenerateTask_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<atwork_interfaces::srv::GenerateTask_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__atwork_interfaces__srv__GenerateTask_Request
    std::shared_ptr<atwork_interfaces::srv::GenerateTask_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__atwork_interfaces__srv__GenerateTask_Request
    std::shared_ptr<atwork_interfaces::srv::GenerateTask_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GenerateTask_Request_ & other) const
  {
    if (this->task_name != other.task_name) {
      return false;
    }
    return true;
  }
  bool operator!=(const GenerateTask_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GenerateTask_Request_

// alias to use template instance with default allocator
using GenerateTask_Request =
  atwork_interfaces::srv::GenerateTask_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace atwork_interfaces


// Include directives for member types
// Member 'task'
#include "atwork_interfaces/msg/detail/task__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__atwork_interfaces__srv__GenerateTask_Response __attribute__((deprecated))
#else
# define DEPRECATED__atwork_interfaces__srv__GenerateTask_Response __declspec(deprecated)
#endif

namespace atwork_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GenerateTask_Response_
{
  using Type = GenerateTask_Response_<ContainerAllocator>;

  explicit GenerateTask_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : task(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->error = "";
    }
  }

  explicit GenerateTask_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : task(_alloc, _init),
    error(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->error = "";
    }
  }

  // field types and members
  using _task_type =
    atwork_interfaces::msg::Task_<ContainerAllocator>;
  _task_type task;
  using _error_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _error_type error;

  // setters for named parameter idiom
  Type & set__task(
    const atwork_interfaces::msg::Task_<ContainerAllocator> & _arg)
  {
    this->task = _arg;
    return *this;
  }
  Type & set__error(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->error = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    atwork_interfaces::srv::GenerateTask_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const atwork_interfaces::srv::GenerateTask_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<atwork_interfaces::srv::GenerateTask_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<atwork_interfaces::srv::GenerateTask_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      atwork_interfaces::srv::GenerateTask_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<atwork_interfaces::srv::GenerateTask_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      atwork_interfaces::srv::GenerateTask_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<atwork_interfaces::srv::GenerateTask_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<atwork_interfaces::srv::GenerateTask_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<atwork_interfaces::srv::GenerateTask_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__atwork_interfaces__srv__GenerateTask_Response
    std::shared_ptr<atwork_interfaces::srv::GenerateTask_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__atwork_interfaces__srv__GenerateTask_Response
    std::shared_ptr<atwork_interfaces::srv::GenerateTask_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GenerateTask_Response_ & other) const
  {
    if (this->task != other.task) {
      return false;
    }
    if (this->error != other.error) {
      return false;
    }
    return true;
  }
  bool operator!=(const GenerateTask_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GenerateTask_Response_

// alias to use template instance with default allocator
using GenerateTask_Response =
  atwork_interfaces::srv::GenerateTask_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace atwork_interfaces

namespace atwork_interfaces
{

namespace srv
{

struct GenerateTask
{
  using Request = atwork_interfaces::srv::GenerateTask_Request;
  using Response = atwork_interfaces::srv::GenerateTask_Response;
};

}  // namespace srv

}  // namespace atwork_interfaces

#endif  // ATWORK_INTERFACES__SRV__DETAIL__GENERATE_TASK__STRUCT_HPP_
