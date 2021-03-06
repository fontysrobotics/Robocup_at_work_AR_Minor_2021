// Generated by gencpp from file atwork_commander_msgs/LoadTaskResponse.msg
// DO NOT EDIT!


#ifndef ATWORK_COMMANDER_MSGS_MESSAGE_LOADTASKRESPONSE_H
#define ATWORK_COMMANDER_MSGS_MESSAGE_LOADTASKRESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace atwork_commander_msgs
{
template <class ContainerAllocator>
struct LoadTaskResponse_
{
  typedef LoadTaskResponse_<ContainerAllocator> Type;

  LoadTaskResponse_()
    : error()  {
    }
  LoadTaskResponse_(const ContainerAllocator& _alloc)
    : error(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _error_type;
  _error_type error;





  typedef boost::shared_ptr< ::atwork_commander_msgs::LoadTaskResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::atwork_commander_msgs::LoadTaskResponse_<ContainerAllocator> const> ConstPtr;

}; // struct LoadTaskResponse_

typedef ::atwork_commander_msgs::LoadTaskResponse_<std::allocator<void> > LoadTaskResponse;

typedef boost::shared_ptr< ::atwork_commander_msgs::LoadTaskResponse > LoadTaskResponsePtr;
typedef boost::shared_ptr< ::atwork_commander_msgs::LoadTaskResponse const> LoadTaskResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::atwork_commander_msgs::LoadTaskResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::atwork_commander_msgs::LoadTaskResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::atwork_commander_msgs::LoadTaskResponse_<ContainerAllocator1> & lhs, const ::atwork_commander_msgs::LoadTaskResponse_<ContainerAllocator2> & rhs)
{
  return lhs.error == rhs.error;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::atwork_commander_msgs::LoadTaskResponse_<ContainerAllocator1> & lhs, const ::atwork_commander_msgs::LoadTaskResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace atwork_commander_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::atwork_commander_msgs::LoadTaskResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::atwork_commander_msgs::LoadTaskResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::atwork_commander_msgs::LoadTaskResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::atwork_commander_msgs::LoadTaskResponse_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::atwork_commander_msgs::LoadTaskResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::atwork_commander_msgs::LoadTaskResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::atwork_commander_msgs::LoadTaskResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "eca8b96616c32aacf1be8bbf14c70eba";
  }

  static const char* value(const ::atwork_commander_msgs::LoadTaskResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xeca8b96616c32aacULL;
  static const uint64_t static_value2 = 0xf1be8bbf14c70ebaULL;
};

template<class ContainerAllocator>
struct DataType< ::atwork_commander_msgs::LoadTaskResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "atwork_commander_msgs/LoadTaskResponse";
  }

  static const char* value(const ::atwork_commander_msgs::LoadTaskResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::atwork_commander_msgs::LoadTaskResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string error\n"
"\n"
;
  }

  static const char* value(const ::atwork_commander_msgs::LoadTaskResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::atwork_commander_msgs::LoadTaskResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.error);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct LoadTaskResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::atwork_commander_msgs::LoadTaskResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::atwork_commander_msgs::LoadTaskResponse_<ContainerAllocator>& v)
  {
    s << indent << "error: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.error);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ATWORK_COMMANDER_MSGS_MESSAGE_LOADTASKRESPONSE_H
