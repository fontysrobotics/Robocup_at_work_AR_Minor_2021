// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from suii_msgs:srv/NavigationRepose.idl
// generated code does not contain a copyright notice

#ifndef SUII_MSGS__SRV__DETAIL__NAVIGATION_REPOSE__STRUCT_HPP_
#define SUII_MSGS__SRV__DETAIL__NAVIGATION_REPOSE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'target'
#include "geometry_msgs/msg/detail/vector3__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__suii_msgs__srv__NavigationRepose_Request __attribute__((deprecated))
#else
# define DEPRECATED__suii_msgs__srv__NavigationRepose_Request __declspec(deprecated)
#endif

namespace suii_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct NavigationRepose_Request_
{
  using Type = NavigationRepose_Request_<ContainerAllocator>;

  explicit NavigationRepose_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : target(_init)
  {
    (void)_init;
  }

  explicit NavigationRepose_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : target(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _target_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _target_type target;

  // setters for named parameter idiom
  Type & set__target(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->target = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    suii_msgs::srv::NavigationRepose_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const suii_msgs::srv::NavigationRepose_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<suii_msgs::srv::NavigationRepose_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<suii_msgs::srv::NavigationRepose_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      suii_msgs::srv::NavigationRepose_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<suii_msgs::srv::NavigationRepose_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      suii_msgs::srv::NavigationRepose_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<suii_msgs::srv::NavigationRepose_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<suii_msgs::srv::NavigationRepose_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<suii_msgs::srv::NavigationRepose_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__suii_msgs__srv__NavigationRepose_Request
    std::shared_ptr<suii_msgs::srv::NavigationRepose_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__suii_msgs__srv__NavigationRepose_Request
    std::shared_ptr<suii_msgs::srv::NavigationRepose_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const NavigationRepose_Request_ & other) const
  {
    if (this->target != other.target) {
      return false;
    }
    return true;
  }
  bool operator!=(const NavigationRepose_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct NavigationRepose_Request_

// alias to use template instance with default allocator
using NavigationRepose_Request =
  suii_msgs::srv::NavigationRepose_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace suii_msgs


#ifndef _WIN32
# define DEPRECATED__suii_msgs__srv__NavigationRepose_Response __attribute__((deprecated))
#else
# define DEPRECATED__suii_msgs__srv__NavigationRepose_Response __declspec(deprecated)
#endif

namespace suii_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct NavigationRepose_Response_
{
  using Type = NavigationRepose_Response_<ContainerAllocator>;

  explicit NavigationRepose_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  explicit NavigationRepose_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  // field types and members
  using _status_type =
    uint8_t;
  _status_type status;

  // setters for named parameter idiom
  Type & set__status(
    const uint8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    suii_msgs::srv::NavigationRepose_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const suii_msgs::srv::NavigationRepose_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<suii_msgs::srv::NavigationRepose_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<suii_msgs::srv::NavigationRepose_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      suii_msgs::srv::NavigationRepose_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<suii_msgs::srv::NavigationRepose_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      suii_msgs::srv::NavigationRepose_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<suii_msgs::srv::NavigationRepose_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<suii_msgs::srv::NavigationRepose_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<suii_msgs::srv::NavigationRepose_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__suii_msgs__srv__NavigationRepose_Response
    std::shared_ptr<suii_msgs::srv::NavigationRepose_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__suii_msgs__srv__NavigationRepose_Response
    std::shared_ptr<suii_msgs::srv::NavigationRepose_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const NavigationRepose_Response_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    return true;
  }
  bool operator!=(const NavigationRepose_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct NavigationRepose_Response_

// alias to use template instance with default allocator
using NavigationRepose_Response =
  suii_msgs::srv::NavigationRepose_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace suii_msgs

namespace suii_msgs
{

namespace srv
{

struct NavigationRepose
{
  using Request = suii_msgs::srv::NavigationRepose_Request;
  using Response = suii_msgs::srv::NavigationRepose_Response;
};

}  // namespace srv

}  // namespace suii_msgs

#endif  // SUII_MSGS__SRV__DETAIL__NAVIGATION_REPOSE__STRUCT_HPP_
