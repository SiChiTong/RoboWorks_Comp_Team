// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from atwork_interfaces:msg/Object.idl
// generated code does not contain a copyright notice

#ifndef ATWORK_INTERFACES__MSG__DETAIL__OBJECT__STRUCT_HPP_
#define ATWORK_INTERFACES__MSG__DETAIL__OBJECT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'pose'
#include "geometry_msgs/msg/detail/pose_stamped__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__atwork_interfaces__msg__Object __attribute__((deprecated))
#else
# define DEPRECATED__atwork_interfaces__msg__Object __declspec(deprecated)
#endif

namespace atwork_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Object_
{
  using Type = Object_<ContainerAllocator>;

  explicit Object_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : pose(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->object = 0;
      this->target = 0;
      this->decoy = false;
    }
  }

  explicit Object_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : pose(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->object = 0;
      this->target = 0;
      this->decoy = false;
    }
  }

  // field types and members
  using _object_type =
    uint16_t;
  _object_type object;
  using _target_type =
    uint16_t;
  _target_type target;
  using _decoy_type =
    bool;
  _decoy_type decoy;
  using _pose_type =
    geometry_msgs::msg::PoseStamped_<ContainerAllocator>;
  _pose_type pose;

  // setters for named parameter idiom
  Type & set__object(
    const uint16_t & _arg)
  {
    this->object = _arg;
    return *this;
  }
  Type & set__target(
    const uint16_t & _arg)
  {
    this->target = _arg;
    return *this;
  }
  Type & set__decoy(
    const bool & _arg)
  {
    this->decoy = _arg;
    return *this;
  }
  Type & set__pose(
    const geometry_msgs::msg::PoseStamped_<ContainerAllocator> & _arg)
  {
    this->pose = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint16_t EMPTY =
    0u;
  static constexpr uint16_t ATWORK_START =
    11u;
  static constexpr uint16_t F20_20_B =
    11u;
  static constexpr uint16_t F20_20_G =
    12u;
  static constexpr uint16_t S40_40_B =
    13u;
  static constexpr uint16_t S40_40_G =
    14u;
  static constexpr uint16_t M20_100 =
    15u;
  static constexpr uint16_t M20 =
    16u;
  static constexpr uint16_t M30 =
    17u;
  static constexpr uint16_t R20 =
    18u;
  static constexpr uint16_t ATWORK_END =
    18u;
  static constexpr uint16_t ADVANCED_START =
    20u;
  static constexpr uint16_t AXIS2 =
    20u;
  static constexpr uint16_t BEARING2 =
    21u;
  static constexpr uint16_t HOUSING =
    22u;
  static constexpr uint16_t MOTOR2 =
    23u;
  static constexpr uint16_t SPACER =
    24u;
  static constexpr uint16_t SCREWDRIVER =
    25u;
  static constexpr uint16_t WRENCH =
    26u;
  static constexpr uint16_t DRILL =
    27u;
  static constexpr uint16_t ALLENKEY =
    28u;
  static constexpr uint16_t ADVANCED_END =
    28u;
  static constexpr uint16_t ROCKIN_START =
    30u;
  static constexpr uint16_t BEARING_BOX =
    31u;
  static constexpr uint16_t BEARING =
    32u;
  static constexpr uint16_t AXIS =
    33u;
  static constexpr uint16_t DISTANCE_TUBE =
    34u;
  static constexpr uint16_t MOTOR =
    35u;
  static constexpr uint16_t ROCKIN_END =
    35u;
  static constexpr uint16_t CONTAINER_START =
    40u;
  static constexpr uint16_t CONTAINER_RED =
    40u;
  static constexpr uint16_t CONTAINER_BLUE =
    41u;
  static constexpr uint16_t CONTAINER_END =
    41u;
  static constexpr uint16_t CAVITY_START =
    50u;
  static constexpr uint16_t F20_20_H =
    50u;
  static constexpr uint16_t F20_20_V =
    51u;
  static constexpr uint16_t F20_20_F =
    52u;
  static constexpr uint16_t S40_40_H =
    53u;
  static constexpr uint16_t S40_40_V =
    54u;
  static constexpr uint16_t S40_40_F =
    55u;
  static constexpr uint16_t M20_H =
    56u;
  static constexpr uint16_t M20_V =
    57u;
  static constexpr uint16_t M20_F =
    58u;
  static constexpr uint16_t M20_100_H =
    59u;
  static constexpr uint16_t M20_100_V =
    60u;
  static constexpr uint16_t M20_100_F =
    61u;
  static constexpr uint16_t M30_H =
    62u;
  static constexpr uint16_t M30_V =
    63u;
  static constexpr uint16_t M30_F =
    64u;
  static constexpr uint16_t R20_H =
    65u;
  static constexpr uint16_t R20_V =
    66u;
  static constexpr uint16_t R20_F =
    67u;
  static constexpr uint16_t CAVITY_END =
    67u;

  // pointer types
  using RawPtr =
    atwork_interfaces::msg::Object_<ContainerAllocator> *;
  using ConstRawPtr =
    const atwork_interfaces::msg::Object_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<atwork_interfaces::msg::Object_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<atwork_interfaces::msg::Object_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      atwork_interfaces::msg::Object_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<atwork_interfaces::msg::Object_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      atwork_interfaces::msg::Object_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<atwork_interfaces::msg::Object_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<atwork_interfaces::msg::Object_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<atwork_interfaces::msg::Object_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__atwork_interfaces__msg__Object
    std::shared_ptr<atwork_interfaces::msg::Object_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__atwork_interfaces__msg__Object
    std::shared_ptr<atwork_interfaces::msg::Object_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Object_ & other) const
  {
    if (this->object != other.object) {
      return false;
    }
    if (this->target != other.target) {
      return false;
    }
    if (this->decoy != other.decoy) {
      return false;
    }
    if (this->pose != other.pose) {
      return false;
    }
    return true;
  }
  bool operator!=(const Object_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Object_

// alias to use template instance with default allocator
using Object =
  atwork_interfaces::msg::Object_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Object_<ContainerAllocator>::EMPTY;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Object_<ContainerAllocator>::ATWORK_START;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Object_<ContainerAllocator>::F20_20_B;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Object_<ContainerAllocator>::F20_20_G;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Object_<ContainerAllocator>::S40_40_B;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Object_<ContainerAllocator>::S40_40_G;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Object_<ContainerAllocator>::M20_100;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Object_<ContainerAllocator>::M20;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Object_<ContainerAllocator>::M30;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Object_<ContainerAllocator>::R20;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Object_<ContainerAllocator>::ATWORK_END;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Object_<ContainerAllocator>::ADVANCED_START;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Object_<ContainerAllocator>::AXIS2;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Object_<ContainerAllocator>::BEARING2;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Object_<ContainerAllocator>::HOUSING;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Object_<ContainerAllocator>::MOTOR2;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Object_<ContainerAllocator>::SPACER;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Object_<ContainerAllocator>::SCREWDRIVER;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Object_<ContainerAllocator>::WRENCH;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Object_<ContainerAllocator>::DRILL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Object_<ContainerAllocator>::ALLENKEY;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Object_<ContainerAllocator>::ADVANCED_END;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Object_<ContainerAllocator>::ROCKIN_START;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Object_<ContainerAllocator>::BEARING_BOX;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Object_<ContainerAllocator>::BEARING;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Object_<ContainerAllocator>::AXIS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Object_<ContainerAllocator>::DISTANCE_TUBE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Object_<ContainerAllocator>::MOTOR;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Object_<ContainerAllocator>::ROCKIN_END;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Object_<ContainerAllocator>::CONTAINER_START;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Object_<ContainerAllocator>::CONTAINER_RED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Object_<ContainerAllocator>::CONTAINER_BLUE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Object_<ContainerAllocator>::CONTAINER_END;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Object_<ContainerAllocator>::CAVITY_START;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Object_<ContainerAllocator>::F20_20_H;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Object_<ContainerAllocator>::F20_20_V;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Object_<ContainerAllocator>::F20_20_F;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Object_<ContainerAllocator>::S40_40_H;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Object_<ContainerAllocator>::S40_40_V;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Object_<ContainerAllocator>::S40_40_F;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Object_<ContainerAllocator>::M20_H;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Object_<ContainerAllocator>::M20_V;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Object_<ContainerAllocator>::M20_F;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Object_<ContainerAllocator>::M20_100_H;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Object_<ContainerAllocator>::M20_100_V;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Object_<ContainerAllocator>::M20_100_F;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Object_<ContainerAllocator>::M30_H;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Object_<ContainerAllocator>::M30_V;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Object_<ContainerAllocator>::M30_F;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Object_<ContainerAllocator>::R20_H;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Object_<ContainerAllocator>::R20_V;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Object_<ContainerAllocator>::R20_F;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t Object_<ContainerAllocator>::CAVITY_END;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace atwork_interfaces

#endif  // ATWORK_INTERFACES__MSG__DETAIL__OBJECT__STRUCT_HPP_
