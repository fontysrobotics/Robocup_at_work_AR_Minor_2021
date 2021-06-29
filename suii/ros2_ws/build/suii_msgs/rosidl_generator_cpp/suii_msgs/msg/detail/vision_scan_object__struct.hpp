// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from suii_msgs:msg/VisionScanObject.idl
// generated code does not contain a copyright notice

#ifndef SUII_MSGS__MSG__DETAIL__VISION_SCAN_OBJECT__STRUCT_HPP_
#define SUII_MSGS__MSG__DETAIL__VISION_SCAN_OBJECT__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__suii_msgs__msg__VisionScanObject __attribute__((deprecated))
#else
# define DEPRECATED__suii_msgs__msg__VisionScanObject __declspec(deprecated)
#endif

namespace suii_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct VisionScanObject_
{
  using Type = VisionScanObject_<ContainerAllocator>;

  explicit VisionScanObject_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0ul;
      this->link = "";
      this->sure = 0;
    }
  }

  explicit VisionScanObject_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : link(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0ul;
      this->link = "";
      this->sure = 0;
    }
  }

  // field types and members
  using _id_type =
    uint32_t;
  _id_type id;
  using _link_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _link_type link;
  using _sure_type =
    uint8_t;
  _sure_type sure;

  // setters for named parameter idiom
  Type & set__id(
    const uint32_t & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__link(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->link = _arg;
    return *this;
  }
  Type & set__sure(
    const uint8_t & _arg)
  {
    this->sure = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    suii_msgs::msg::VisionScanObject_<ContainerAllocator> *;
  using ConstRawPtr =
    const suii_msgs::msg::VisionScanObject_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<suii_msgs::msg::VisionScanObject_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<suii_msgs::msg::VisionScanObject_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      suii_msgs::msg::VisionScanObject_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<suii_msgs::msg::VisionScanObject_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      suii_msgs::msg::VisionScanObject_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<suii_msgs::msg::VisionScanObject_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<suii_msgs::msg::VisionScanObject_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<suii_msgs::msg::VisionScanObject_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__suii_msgs__msg__VisionScanObject
    std::shared_ptr<suii_msgs::msg::VisionScanObject_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__suii_msgs__msg__VisionScanObject
    std::shared_ptr<suii_msgs::msg::VisionScanObject_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const VisionScanObject_ & other) const
  {
    if (this->id != other.id) {
      return false;
    }
    if (this->link != other.link) {
      return false;
    }
    if (this->sure != other.sure) {
      return false;
    }
    return true;
  }
  bool operator!=(const VisionScanObject_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct VisionScanObject_

// alias to use template instance with default allocator
using VisionScanObject =
  suii_msgs::msg::VisionScanObject_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace suii_msgs

#endif  // SUII_MSGS__MSG__DETAIL__VISION_SCAN_OBJECT__STRUCT_HPP_
