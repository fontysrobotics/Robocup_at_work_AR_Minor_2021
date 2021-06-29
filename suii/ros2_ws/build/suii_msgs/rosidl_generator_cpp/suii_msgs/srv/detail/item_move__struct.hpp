// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from suii_msgs:srv/ItemMove.idl
// generated code does not contain a copyright notice

#ifndef SUII_MSGS__SRV__DETAIL__ITEM_MOVE__STRUCT_HPP_
#define SUII_MSGS__SRV__DETAIL__ITEM_MOVE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__suii_msgs__srv__ItemMove_Request __attribute__((deprecated))
#else
# define DEPRECATED__suii_msgs__srv__ItemMove_Request __declspec(deprecated)
#endif

namespace suii_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ItemMove_Request_
{
  using Type = ItemMove_Request_<ContainerAllocator>;

  explicit ItemMove_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->itemid = 0;
      this->torobot = false;
      this->newlink = "";
    }
  }

  explicit ItemMove_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : newlink(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->itemid = 0;
      this->torobot = false;
      this->newlink = "";
    }
  }

  // field types and members
  using _itemid_type =
    uint16_t;
  _itemid_type itemid;
  using _torobot_type =
    bool;
  _torobot_type torobot;
  using _newlink_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _newlink_type newlink;

  // setters for named parameter idiom
  Type & set__itemid(
    const uint16_t & _arg)
  {
    this->itemid = _arg;
    return *this;
  }
  Type & set__torobot(
    const bool & _arg)
  {
    this->torobot = _arg;
    return *this;
  }
  Type & set__newlink(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->newlink = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    suii_msgs::srv::ItemMove_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const suii_msgs::srv::ItemMove_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<suii_msgs::srv::ItemMove_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<suii_msgs::srv::ItemMove_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      suii_msgs::srv::ItemMove_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<suii_msgs::srv::ItemMove_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      suii_msgs::srv::ItemMove_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<suii_msgs::srv::ItemMove_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<suii_msgs::srv::ItemMove_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<suii_msgs::srv::ItemMove_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__suii_msgs__srv__ItemMove_Request
    std::shared_ptr<suii_msgs::srv::ItemMove_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__suii_msgs__srv__ItemMove_Request
    std::shared_ptr<suii_msgs::srv::ItemMove_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ItemMove_Request_ & other) const
  {
    if (this->itemid != other.itemid) {
      return false;
    }
    if (this->torobot != other.torobot) {
      return false;
    }
    if (this->newlink != other.newlink) {
      return false;
    }
    return true;
  }
  bool operator!=(const ItemMove_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ItemMove_Request_

// alias to use template instance with default allocator
using ItemMove_Request =
  suii_msgs::srv::ItemMove_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace suii_msgs


#ifndef _WIN32
# define DEPRECATED__suii_msgs__srv__ItemMove_Response __attribute__((deprecated))
#else
# define DEPRECATED__suii_msgs__srv__ItemMove_Response __declspec(deprecated)
#endif

namespace suii_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ItemMove_Response_
{
  using Type = ItemMove_Response_<ContainerAllocator>;

  explicit ItemMove_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->sucess = false;
    }
  }

  explicit ItemMove_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->sucess = false;
    }
  }

  // field types and members
  using _sucess_type =
    bool;
  _sucess_type sucess;

  // setters for named parameter idiom
  Type & set__sucess(
    const bool & _arg)
  {
    this->sucess = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    suii_msgs::srv::ItemMove_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const suii_msgs::srv::ItemMove_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<suii_msgs::srv::ItemMove_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<suii_msgs::srv::ItemMove_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      suii_msgs::srv::ItemMove_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<suii_msgs::srv::ItemMove_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      suii_msgs::srv::ItemMove_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<suii_msgs::srv::ItemMove_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<suii_msgs::srv::ItemMove_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<suii_msgs::srv::ItemMove_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__suii_msgs__srv__ItemMove_Response
    std::shared_ptr<suii_msgs::srv::ItemMove_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__suii_msgs__srv__ItemMove_Response
    std::shared_ptr<suii_msgs::srv::ItemMove_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ItemMove_Response_ & other) const
  {
    if (this->sucess != other.sucess) {
      return false;
    }
    return true;
  }
  bool operator!=(const ItemMove_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ItemMove_Response_

// alias to use template instance with default allocator
using ItemMove_Response =
  suii_msgs::srv::ItemMove_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace suii_msgs

namespace suii_msgs
{

namespace srv
{

struct ItemMove
{
  using Request = suii_msgs::srv::ItemMove_Request;
  using Response = suii_msgs::srv::ItemMove_Response;
};

}  // namespace srv

}  // namespace suii_msgs

#endif  // SUII_MSGS__SRV__DETAIL__ITEM_MOVE__STRUCT_HPP_
