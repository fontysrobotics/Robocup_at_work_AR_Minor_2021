// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from suii_msgs:msg/SuiiTask.idl
// generated code does not contain a copyright notice

#ifndef SUII_MSGS__MSG__DETAIL__SUII_TASK__STRUCT_HPP_
#define SUII_MSGS__MSG__DETAIL__SUII_TASK__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__suii_msgs__msg__SuiiTask __attribute__((deprecated))
#else
# define DEPRECATED__suii_msgs__msg__SuiiTask __declspec(deprecated)
#endif

namespace suii_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SuiiTask_
{
  using Type = SuiiTask_<ContainerAllocator>;

  explicit SuiiTask_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->action = 0;
      this->source = 0;
      this->destination = 0;
      this->object = 0;
      this->container = 0;
      this->status = 0;
      this->error_code = 0;
      this->orientation = 0;
    }
  }

  explicit SuiiTask_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->action = 0;
      this->source = 0;
      this->destination = 0;
      this->object = 0;
      this->container = 0;
      this->status = 0;
      this->error_code = 0;
      this->orientation = 0;
    }
  }

  // field types and members
  using _action_type =
    int16_t;
  _action_type action;
  using _source_type =
    int16_t;
  _source_type source;
  using _destination_type =
    int16_t;
  _destination_type destination;
  using _object_type =
    int16_t;
  _object_type object;
  using _container_type =
    int16_t;
  _container_type container;
  using _status_type =
    int16_t;
  _status_type status;
  using _error_code_type =
    int16_t;
  _error_code_type error_code;
  using _orientation_type =
    int16_t;
  _orientation_type orientation;

  // setters for named parameter idiom
  Type & set__action(
    const int16_t & _arg)
  {
    this->action = _arg;
    return *this;
  }
  Type & set__source(
    const int16_t & _arg)
  {
    this->source = _arg;
    return *this;
  }
  Type & set__destination(
    const int16_t & _arg)
  {
    this->destination = _arg;
    return *this;
  }
  Type & set__object(
    const int16_t & _arg)
  {
    this->object = _arg;
    return *this;
  }
  Type & set__container(
    const int16_t & _arg)
  {
    this->container = _arg;
    return *this;
  }
  Type & set__status(
    const int16_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__error_code(
    const int16_t & _arg)
  {
    this->error_code = _arg;
    return *this;
  }
  Type & set__orientation(
    const int16_t & _arg)
  {
    this->orientation = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    suii_msgs::msg::SuiiTask_<ContainerAllocator> *;
  using ConstRawPtr =
    const suii_msgs::msg::SuiiTask_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<suii_msgs::msg::SuiiTask_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<suii_msgs::msg::SuiiTask_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      suii_msgs::msg::SuiiTask_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<suii_msgs::msg::SuiiTask_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      suii_msgs::msg::SuiiTask_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<suii_msgs::msg::SuiiTask_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<suii_msgs::msg::SuiiTask_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<suii_msgs::msg::SuiiTask_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__suii_msgs__msg__SuiiTask
    std::shared_ptr<suii_msgs::msg::SuiiTask_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__suii_msgs__msg__SuiiTask
    std::shared_ptr<suii_msgs::msg::SuiiTask_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SuiiTask_ & other) const
  {
    if (this->action != other.action) {
      return false;
    }
    if (this->source != other.source) {
      return false;
    }
    if (this->destination != other.destination) {
      return false;
    }
    if (this->object != other.object) {
      return false;
    }
    if (this->container != other.container) {
      return false;
    }
    if (this->status != other.status) {
      return false;
    }
    if (this->error_code != other.error_code) {
      return false;
    }
    if (this->orientation != other.orientation) {
      return false;
    }
    return true;
  }
  bool operator!=(const SuiiTask_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SuiiTask_

// alias to use template instance with default allocator
using SuiiTask =
  suii_msgs::msg::SuiiTask_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace suii_msgs

#endif  // SUII_MSGS__MSG__DETAIL__SUII_TASK__STRUCT_HPP_
