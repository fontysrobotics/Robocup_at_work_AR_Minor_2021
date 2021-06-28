// Generated by gencpp from file suii_communication_ros1/TableGoalRequest.msg
// DO NOT EDIT!


#ifndef SUII_COMMUNICATION_ROS1_MESSAGE_TABLEGOALREQUEST_H
#define SUII_COMMUNICATION_ROS1_MESSAGE_TABLEGOALREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace suii_communication_ros1
{
template <class ContainerAllocator>
struct TableGoalRequest_
{
  typedef TableGoalRequest_<ContainerAllocator> Type;

  TableGoalRequest_()
    : table()  {
    }
  TableGoalRequest_(const ContainerAllocator& _alloc)
    : table(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _table_type;
  _table_type table;





  typedef boost::shared_ptr< ::suii_communication_ros1::TableGoalRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::suii_communication_ros1::TableGoalRequest_<ContainerAllocator> const> ConstPtr;

}; // struct TableGoalRequest_

typedef ::suii_communication_ros1::TableGoalRequest_<std::allocator<void> > TableGoalRequest;

typedef boost::shared_ptr< ::suii_communication_ros1::TableGoalRequest > TableGoalRequestPtr;
typedef boost::shared_ptr< ::suii_communication_ros1::TableGoalRequest const> TableGoalRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::suii_communication_ros1::TableGoalRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::suii_communication_ros1::TableGoalRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::suii_communication_ros1::TableGoalRequest_<ContainerAllocator1> & lhs, const ::suii_communication_ros1::TableGoalRequest_<ContainerAllocator2> & rhs)
{
  return lhs.table == rhs.table;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::suii_communication_ros1::TableGoalRequest_<ContainerAllocator1> & lhs, const ::suii_communication_ros1::TableGoalRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace suii_communication_ros1

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::suii_communication_ros1::TableGoalRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::suii_communication_ros1::TableGoalRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::suii_communication_ros1::TableGoalRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::suii_communication_ros1::TableGoalRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::suii_communication_ros1::TableGoalRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::suii_communication_ros1::TableGoalRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::suii_communication_ros1::TableGoalRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "b23eaeab3fab1fc0f4aed0e9b11c7ae0";
  }

  static const char* value(const ::suii_communication_ros1::TableGoalRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xb23eaeab3fab1fc0ULL;
  static const uint64_t static_value2 = 0xf4aed0e9b11c7ae0ULL;
};

template<class ContainerAllocator>
struct DataType< ::suii_communication_ros1::TableGoalRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "suii_communication_ros1/TableGoalRequest";
  }

  static const char* value(const ::suii_communication_ros1::TableGoalRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::suii_communication_ros1::TableGoalRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string table\n"
;
  }

  static const char* value(const ::suii_communication_ros1::TableGoalRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::suii_communication_ros1::TableGoalRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.table);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct TableGoalRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::suii_communication_ros1::TableGoalRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::suii_communication_ros1::TableGoalRequest_<ContainerAllocator>& v)
  {
    s << indent << "table: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.table);
  }
};

} // namespace message_operations
} // namespace ros

#endif // SUII_COMMUNICATION_ROS1_MESSAGE_TABLEGOALREQUEST_H