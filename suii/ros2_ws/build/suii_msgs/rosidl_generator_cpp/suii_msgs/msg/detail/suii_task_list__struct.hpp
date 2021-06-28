// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from suii_msgs:msg/SuiiTaskList.idl
// generated code does not contain a copyright notice

#ifndef SUII_MSGS__MSG__DETAIL__SUII_TASK_LIST__STRUCT_HPP_
#define SUII_MSGS__MSG__DETAIL__SUII_TASK_LIST__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'tasks'
#include "suii_msgs/msg/detail/suii_task__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__suii_msgs__msg__SuiiTaskList __attribute__((deprecated))
#else
# define DEPRECATED__suii_msgs__msg__SuiiTaskList __declspec(deprecated)
#endif

namespace suii_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SuiiTaskList_
{
  using Type = SuiiTaskList_<ContainerAllocator>;

  explicit SuiiTaskList_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->error_index = 0l;
    }
  }

  explicit SuiiTaskList_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->error_index = 0l;
    }
  }

  // field types and members
  using _tasks_type =
    std::vector<suii_msgs::msg::SuiiTask_<ContainerAllocator>, typename ContainerAllocator::template rebind<suii_msgs::msg::SuiiTask_<ContainerAllocator>>::other>;
  _tasks_type tasks;
  using _error_index_type =
    int32_t;
  _error_index_type error_index;

  // setters for named parameter idiom
  Type & set__tasks(
    const std::vector<suii_msgs::msg::SuiiTask_<ContainerAllocator>, typename ContainerAllocator::template rebind<suii_msgs::msg::SuiiTask_<ContainerAllocator>>::other> & _arg)
  {
    this->tasks = _arg;
    return *this;
  }
  Type & set__error_index(
    const int32_t & _arg)
  {
    this->error_index = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    suii_msgs::msg::SuiiTaskList_<ContainerAllocator> *;
  using ConstRawPtr =
    const suii_msgs::msg::SuiiTaskList_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<suii_msgs::msg::SuiiTaskList_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<suii_msgs::msg::SuiiTaskList_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      suii_msgs::msg::SuiiTaskList_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<suii_msgs::msg::SuiiTaskList_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      suii_msgs::msg::SuiiTaskList_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<suii_msgs::msg::SuiiTaskList_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<suii_msgs::msg::SuiiTaskList_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<suii_msgs::msg::SuiiTaskList_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__suii_msgs__msg__SuiiTaskList
    std::shared_ptr<suii_msgs::msg::SuiiTaskList_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__suii_msgs__msg__SuiiTaskList
    std::shared_ptr<suii_msgs::msg::SuiiTaskList_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SuiiTaskList_ & other) const
  {
    if (this->tasks != other.tasks) {
      return false;
    }
    if (this->error_index != other.error_index) {
      return false;
    }
    return true;
  }
  bool operator!=(const SuiiTaskList_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SuiiTaskList_

// alias to use template instance with default allocator
using SuiiTaskList =
  suii_msgs::msg::SuiiTaskList_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace suii_msgs

#endif  // SUII_MSGS__MSG__DETAIL__SUII_TASK_LIST__STRUCT_HPP_
