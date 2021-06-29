// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from suii_msgs:srv/VisionScan.idl
// generated code does not contain a copyright notice

#ifndef SUII_MSGS__SRV__DETAIL__VISION_SCAN__STRUCT_HPP_
#define SUII_MSGS__SRV__DETAIL__VISION_SCAN__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__suii_msgs__srv__VisionScan_Request __attribute__((deprecated))
#else
# define DEPRECATED__suii_msgs__srv__VisionScan_Request __declspec(deprecated)
#endif

namespace suii_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct VisionScan_Request_
{
  using Type = VisionScan_Request_<ContainerAllocator>;

  explicit VisionScan_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit VisionScan_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  // field types and members
  using _structure_needs_at_least_one_member_type =
    uint8_t;
  _structure_needs_at_least_one_member_type structure_needs_at_least_one_member;


  // constant declarations

  // pointer types
  using RawPtr =
    suii_msgs::srv::VisionScan_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const suii_msgs::srv::VisionScan_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<suii_msgs::srv::VisionScan_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<suii_msgs::srv::VisionScan_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      suii_msgs::srv::VisionScan_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<suii_msgs::srv::VisionScan_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      suii_msgs::srv::VisionScan_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<suii_msgs::srv::VisionScan_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<suii_msgs::srv::VisionScan_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<suii_msgs::srv::VisionScan_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__suii_msgs__srv__VisionScan_Request
    std::shared_ptr<suii_msgs::srv::VisionScan_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__suii_msgs__srv__VisionScan_Request
    std::shared_ptr<suii_msgs::srv::VisionScan_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const VisionScan_Request_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const VisionScan_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct VisionScan_Request_

// alias to use template instance with default allocator
using VisionScan_Request =
  suii_msgs::srv::VisionScan_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace suii_msgs


// Include directives for member types
// Member 'result'
#include "suii_msgs/msg/detail/vision_scan_object__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__suii_msgs__srv__VisionScan_Response __attribute__((deprecated))
#else
# define DEPRECATED__suii_msgs__srv__VisionScan_Response __declspec(deprecated)
#endif

namespace suii_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct VisionScan_Response_
{
  using Type = VisionScan_Response_<ContainerAllocator>;

  explicit VisionScan_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit VisionScan_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _result_type =
    std::vector<suii_msgs::msg::VisionScanObject_<ContainerAllocator>, typename ContainerAllocator::template rebind<suii_msgs::msg::VisionScanObject_<ContainerAllocator>>::other>;
  _result_type result;

  // setters for named parameter idiom
  Type & set__result(
    const std::vector<suii_msgs::msg::VisionScanObject_<ContainerAllocator>, typename ContainerAllocator::template rebind<suii_msgs::msg::VisionScanObject_<ContainerAllocator>>::other> & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    suii_msgs::srv::VisionScan_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const suii_msgs::srv::VisionScan_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<suii_msgs::srv::VisionScan_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<suii_msgs::srv::VisionScan_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      suii_msgs::srv::VisionScan_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<suii_msgs::srv::VisionScan_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      suii_msgs::srv::VisionScan_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<suii_msgs::srv::VisionScan_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<suii_msgs::srv::VisionScan_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<suii_msgs::srv::VisionScan_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__suii_msgs__srv__VisionScan_Response
    std::shared_ptr<suii_msgs::srv::VisionScan_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__suii_msgs__srv__VisionScan_Response
    std::shared_ptr<suii_msgs::srv::VisionScan_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const VisionScan_Response_ & other) const
  {
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const VisionScan_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct VisionScan_Response_

// alias to use template instance with default allocator
using VisionScan_Response =
  suii_msgs::srv::VisionScan_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace suii_msgs

namespace suii_msgs
{

namespace srv
{

struct VisionScan
{
  using Request = suii_msgs::srv::VisionScan_Request;
  using Response = suii_msgs::srv::VisionScan_Response;
};

}  // namespace srv

}  // namespace suii_msgs

#endif  // SUII_MSGS__SRV__DETAIL__VISION_SCAN__STRUCT_HPP_
