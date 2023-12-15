// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from roboworks_brain_interfaces:srv/ArmBrain.idl
// generated code does not contain a copyright notice

#ifndef ROBOWORKS_BRAIN_INTERFACES__SRV__DETAIL__ARM_BRAIN__STRUCT_HPP_
#define ROBOWORKS_BRAIN_INTERFACES__SRV__DETAIL__ARM_BRAIN__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__roboworks_brain_interfaces__srv__ArmBrain_Request __attribute__((deprecated))
#else
# define DEPRECATED__roboworks_brain_interfaces__srv__ArmBrain_Request __declspec(deprecated)
#endif

namespace roboworks_brain_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ArmBrain_Request_
{
  using Type = ArmBrain_Request_<ContainerAllocator>;

  explicit ArmBrain_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->operation_type = 0ul;
      this->object_id = 0ul;
    }
  }

  explicit ArmBrain_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->operation_type = 0ul;
      this->object_id = 0ul;
    }
  }

  // field types and members
  using _operation_type_type =
    uint32_t;
  _operation_type_type operation_type;
  using _object_id_type =
    uint32_t;
  _object_id_type object_id;

  // setters for named parameter idiom
  Type & set__operation_type(
    const uint32_t & _arg)
  {
    this->operation_type = _arg;
    return *this;
  }
  Type & set__object_id(
    const uint32_t & _arg)
  {
    this->object_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    roboworks_brain_interfaces::srv::ArmBrain_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const roboworks_brain_interfaces::srv::ArmBrain_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<roboworks_brain_interfaces::srv::ArmBrain_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<roboworks_brain_interfaces::srv::ArmBrain_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      roboworks_brain_interfaces::srv::ArmBrain_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<roboworks_brain_interfaces::srv::ArmBrain_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      roboworks_brain_interfaces::srv::ArmBrain_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<roboworks_brain_interfaces::srv::ArmBrain_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<roboworks_brain_interfaces::srv::ArmBrain_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<roboworks_brain_interfaces::srv::ArmBrain_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__roboworks_brain_interfaces__srv__ArmBrain_Request
    std::shared_ptr<roboworks_brain_interfaces::srv::ArmBrain_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__roboworks_brain_interfaces__srv__ArmBrain_Request
    std::shared_ptr<roboworks_brain_interfaces::srv::ArmBrain_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ArmBrain_Request_ & other) const
  {
    if (this->operation_type != other.operation_type) {
      return false;
    }
    if (this->object_id != other.object_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const ArmBrain_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ArmBrain_Request_

// alias to use template instance with default allocator
using ArmBrain_Request =
  roboworks_brain_interfaces::srv::ArmBrain_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace roboworks_brain_interfaces


#ifndef _WIN32
# define DEPRECATED__roboworks_brain_interfaces__srv__ArmBrain_Response __attribute__((deprecated))
#else
# define DEPRECATED__roboworks_brain_interfaces__srv__ArmBrain_Response __declspec(deprecated)
#endif

namespace roboworks_brain_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ArmBrain_Response_
{
  using Type = ArmBrain_Response_<ContainerAllocator>;

  explicit ArmBrain_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = 0ul;
      this->instruction = "";
    }
  }

  explicit ArmBrain_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : instruction(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = 0ul;
      this->instruction = "";
    }
  }

  // field types and members
  using _success_type =
    uint32_t;
  _success_type success;
  using _instruction_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _instruction_type instruction;

  // setters for named parameter idiom
  Type & set__success(
    const uint32_t & _arg)
  {
    this->success = _arg;
    return *this;
  }
  Type & set__instruction(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->instruction = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    roboworks_brain_interfaces::srv::ArmBrain_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const roboworks_brain_interfaces::srv::ArmBrain_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<roboworks_brain_interfaces::srv::ArmBrain_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<roboworks_brain_interfaces::srv::ArmBrain_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      roboworks_brain_interfaces::srv::ArmBrain_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<roboworks_brain_interfaces::srv::ArmBrain_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      roboworks_brain_interfaces::srv::ArmBrain_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<roboworks_brain_interfaces::srv::ArmBrain_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<roboworks_brain_interfaces::srv::ArmBrain_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<roboworks_brain_interfaces::srv::ArmBrain_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__roboworks_brain_interfaces__srv__ArmBrain_Response
    std::shared_ptr<roboworks_brain_interfaces::srv::ArmBrain_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__roboworks_brain_interfaces__srv__ArmBrain_Response
    std::shared_ptr<roboworks_brain_interfaces::srv::ArmBrain_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ArmBrain_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->instruction != other.instruction) {
      return false;
    }
    return true;
  }
  bool operator!=(const ArmBrain_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ArmBrain_Response_

// alias to use template instance with default allocator
using ArmBrain_Response =
  roboworks_brain_interfaces::srv::ArmBrain_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace roboworks_brain_interfaces

namespace roboworks_brain_interfaces
{

namespace srv
{

struct ArmBrain
{
  using Request = roboworks_brain_interfaces::srv::ArmBrain_Request;
  using Response = roboworks_brain_interfaces::srv::ArmBrain_Response;
};

}  // namespace srv

}  // namespace roboworks_brain_interfaces

#endif  // ROBOWORKS_BRAIN_INTERFACES__SRV__DETAIL__ARM_BRAIN__STRUCT_HPP_
