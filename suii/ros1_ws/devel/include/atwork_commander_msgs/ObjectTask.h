// Generated by gencpp from file atwork_commander_msgs/ObjectTask.msg
// DO NOT EDIT!


#ifndef ATWORK_COMMANDER_MSGS_MESSAGE_OBJECTTASK_H
#define ATWORK_COMMANDER_MSGS_MESSAGE_OBJECTTASK_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <atwork_commander_msgs/RobotHeader.h>
#include <atwork_commander_msgs/Transport.h>

namespace atwork_commander_msgs
{
template <class ContainerAllocator>
struct ObjectTask_
{
  typedef ObjectTask_<ContainerAllocator> Type;

  ObjectTask_()
    : execute_on()
    , subtasks()
    , prep_time()
    , exec_time()  {
    }
  ObjectTask_(const ContainerAllocator& _alloc)
    : execute_on(_alloc)
    , subtasks(_alloc)
    , prep_time()
    , exec_time()  {
  (void)_alloc;
    }



   typedef std::vector< ::atwork_commander_msgs::RobotHeader_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::atwork_commander_msgs::RobotHeader_<ContainerAllocator> >::other >  _execute_on_type;
  _execute_on_type execute_on;

   typedef std::vector< ::atwork_commander_msgs::Transport_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::atwork_commander_msgs::Transport_<ContainerAllocator> >::other >  _subtasks_type;
  _subtasks_type subtasks;

   typedef ros::Duration _prep_time_type;
  _prep_time_type prep_time;

   typedef ros::Duration _exec_time_type;
  _exec_time_type exec_time;





  typedef boost::shared_ptr< ::atwork_commander_msgs::ObjectTask_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::atwork_commander_msgs::ObjectTask_<ContainerAllocator> const> ConstPtr;

}; // struct ObjectTask_

typedef ::atwork_commander_msgs::ObjectTask_<std::allocator<void> > ObjectTask;

typedef boost::shared_ptr< ::atwork_commander_msgs::ObjectTask > ObjectTaskPtr;
typedef boost::shared_ptr< ::atwork_commander_msgs::ObjectTask const> ObjectTaskConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::atwork_commander_msgs::ObjectTask_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::atwork_commander_msgs::ObjectTask_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::atwork_commander_msgs::ObjectTask_<ContainerAllocator1> & lhs, const ::atwork_commander_msgs::ObjectTask_<ContainerAllocator2> & rhs)
{
  return lhs.execute_on == rhs.execute_on &&
    lhs.subtasks == rhs.subtasks &&
    lhs.prep_time == rhs.prep_time &&
    lhs.exec_time == rhs.exec_time;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::atwork_commander_msgs::ObjectTask_<ContainerAllocator1> & lhs, const ::atwork_commander_msgs::ObjectTask_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace atwork_commander_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::atwork_commander_msgs::ObjectTask_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::atwork_commander_msgs::ObjectTask_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::atwork_commander_msgs::ObjectTask_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::atwork_commander_msgs::ObjectTask_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::atwork_commander_msgs::ObjectTask_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::atwork_commander_msgs::ObjectTask_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::atwork_commander_msgs::ObjectTask_<ContainerAllocator> >
{
  static const char* value()
  {
    return "110802c2321e7e0a5f49840a38f9b422";
  }

  static const char* value(const ::atwork_commander_msgs::ObjectTask_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x110802c2321e7e0aULL;
  static const uint64_t static_value2 = 0x5f49840a38f9b422ULL;
};

template<class ContainerAllocator>
struct DataType< ::atwork_commander_msgs::ObjectTask_<ContainerAllocator> >
{
  static const char* value()
  {
    return "atwork_commander_msgs/ObjectTask";
  }

  static const char* value(const ::atwork_commander_msgs::ObjectTask_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::atwork_commander_msgs::ObjectTask_<ContainerAllocator> >
{
  static const char* value()
  {
    return "RobotHeader[] execute_on\n"
"\n"
"Transport[] subtasks\n"
"\n"
"duration prep_time\n"
"duration exec_time\n"
"\n"
"\n"
"================================================================================\n"
"MSG: atwork_commander_msgs/RobotHeader\n"
"# RobotHeader.msg\n"
"\n"
"Header header\n"
"string team_name\n"
"string robot_name\n"
"\n"
"================================================================================\n"
"MSG: std_msgs/Header\n"
"# Standard metadata for higher-level stamped data types.\n"
"# This is generally used to communicate timestamped data \n"
"# in a particular coordinate frame.\n"
"# \n"
"# sequence ID: consecutively increasing ID \n"
"uint32 seq\n"
"#Two-integer timestamp that is expressed as:\n"
"# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n"
"# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n"
"# time-handling sugar is provided by the client library\n"
"time stamp\n"
"#Frame this data is associated with\n"
"string frame_id\n"
"\n"
"================================================================================\n"
"MSG: atwork_commander_msgs/Transport\n"
"Object object\n"
"string source\n"
"string destination\n"
"\n"
"================================================================================\n"
"MSG: atwork_commander_msgs/Object\n"
"# Object.msg\n"
"\n"
"uint16 object\n"
"uint16 target\n"
"bool   decoy\n"
"\n"
"uint16 EMPTY = 0\n"
"\n"
"# atwork\n"
"uint16 ATWORK_START = 11\n"
"uint16 F20_20_B = 11\n"
"uint16 F20_20_G = 12\n"
"uint16 S40_40_B = 13\n"
"uint16 S40_40_G = 14\n"
"uint16 M20_100 = 15\n"
"uint16 M20 = 16\n"
"uint16 M30 = 17\n"
"uint16 R20 = 18\n"
"uint16 ATWORK_END = 19\n"
"\n"
"# rockin\n"
"uint16 ROCKIN_START = 21\n"
"uint16 BEARING_BOX = 21\n"
"uint16 BEARING = 22\n"
"uint16 AXIS = 23\n"
"uint16 DISTANCE_TUBE = 24\n"
"uint16 MOTOR = 25\n"
"uint16 ROCKIN_END = 26\n"
"\n"
"# container\n"
"uint16 CONTAINER_START = 31\n"
"uint16 CONTAINER_RED = 31\n"
"uint16 CONTAINER_BLUE = 32\n"
"uint16 CONTAINER_END = 33\n"
"\n"
"# cavity\n"
"uint16 CAVITY_START = 41\n"
"uint16 F20_20_H  = 41\n"
"uint16 F20_20_V  = 42\n"
"uint16 F20_20_F  = 43\n"
"uint16 S40_40_H  = 44\n"
"uint16 S40_40_V  = 45\n"
"uint16 S40_40_F  = 46\n"
"uint16 M20_H     = 47\n"
"uint16 M20_V     = 48\n"
"uint16 M20_F     = 49\n"
"uint16 M20_100_H = 50\n"
"uint16 M20_100_V = 51\n"
"uint16 M20_100_F = 52\n"
"uint16 M30_H     = 53\n"
"uint16 M30_V     = 54\n"
"uint16 M30_F     = 55\n"
"uint16 R20_H     = 56\n"
"uint16 R20_V     = 57\n"
"uint16 R20_F     = 58\n"
"uint16 CAVITY_END = 59\n"
;
  }

  static const char* value(const ::atwork_commander_msgs::ObjectTask_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::atwork_commander_msgs::ObjectTask_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.execute_on);
      stream.next(m.subtasks);
      stream.next(m.prep_time);
      stream.next(m.exec_time);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ObjectTask_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::atwork_commander_msgs::ObjectTask_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::atwork_commander_msgs::ObjectTask_<ContainerAllocator>& v)
  {
    s << indent << "execute_on[]" << std::endl;
    for (size_t i = 0; i < v.execute_on.size(); ++i)
    {
      s << indent << "  execute_on[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::atwork_commander_msgs::RobotHeader_<ContainerAllocator> >::stream(s, indent + "    ", v.execute_on[i]);
    }
    s << indent << "subtasks[]" << std::endl;
    for (size_t i = 0; i < v.subtasks.size(); ++i)
    {
      s << indent << "  subtasks[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::atwork_commander_msgs::Transport_<ContainerAllocator> >::stream(s, indent + "    ", v.subtasks[i]);
    }
    s << indent << "prep_time: ";
    Printer<ros::Duration>::stream(s, indent + "  ", v.prep_time);
    s << indent << "exec_time: ";
    Printer<ros::Duration>::stream(s, indent + "  ", v.exec_time);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ATWORK_COMMANDER_MSGS_MESSAGE_OBJECTTASK_H