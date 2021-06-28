# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from atwork_commander_msgs/RefboxState.msg. Do not edit."""
import codecs
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import atwork_commander_msgs.msg
import genpy
import geometry_msgs.msg
import nav_msgs.msg
import std_msgs.msg

class RefboxState(genpy.Message):
  _md5sum = "9afb7204601b3cb4869e154ac2a67ad9"
  _type = "atwork_commander_msgs/RefboxState"
  _has_header = False  # flag to mark the presence of a Header object
  _full_text = """uint8         state
time          end
Task          task
RobotState[]  robots

uint8 FAILURE     = 0
uint8 IDLE        = 1
uint8 READY       = 2
uint8 PREPARATION = 3
uint8 EXECUTION   = 4

================================================================================
MSG: atwork_commander_msgs/Task
# Task.msg

RobotHeader[] execute_on

Workstation[] arena_start_state
Workstation[] arena_target_state

duration prep_time
duration exec_time

string type
uint64 id

================================================================================
MSG: atwork_commander_msgs/RobotHeader
# RobotHeader.msg

Header header
string team_name
string robot_name

================================================================================
MSG: std_msgs/Header
# Standard metadata for higher-level stamped data types.
# This is generally used to communicate timestamped data 
# in a particular coordinate frame.
# 
# sequence ID: consecutively increasing ID 
uint32 seq
#Two-integer timestamp that is expressed as:
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')
# time-handling sugar is provided by the client library
time stamp
#Frame this data is associated with
string frame_id

================================================================================
MSG: atwork_commander_msgs/Workstation
# workstation.msg

 Object[] objects

# either a workstation name or 'robot'
# (for end of RTT or start of PPT)
string workstation_name

================================================================================
MSG: atwork_commander_msgs/Object
# Object.msg

uint16 object
uint16 target
bool   decoy

uint16 EMPTY = 0

# atwork
uint16 ATWORK_START = 11
uint16 F20_20_B = 11
uint16 F20_20_G = 12
uint16 S40_40_B = 13
uint16 S40_40_G = 14
uint16 M20_100 = 15
uint16 M20 = 16
uint16 M30 = 17
uint16 R20 = 18
uint16 ATWORK_END = 19

# rockin
uint16 ROCKIN_START = 21
uint16 BEARING_BOX = 21
uint16 BEARING = 22
uint16 AXIS = 23
uint16 DISTANCE_TUBE = 24
uint16 MOTOR = 25
uint16 ROCKIN_END = 26

# container
uint16 CONTAINER_START = 31
uint16 CONTAINER_RED = 31
uint16 CONTAINER_BLUE = 32
uint16 CONTAINER_END = 33

# cavity
uint16 CAVITY_START = 41
uint16 F20_20_H  = 41
uint16 F20_20_V  = 42
uint16 F20_20_F  = 43
uint16 S40_40_H  = 44
uint16 S40_40_V  = 45
uint16 S40_40_F  = 46
uint16 M20_H     = 47
uint16 M20_V     = 48
uint16 M20_F     = 49
uint16 M20_100_H = 50
uint16 M20_100_V = 51
uint16 M20_100_F = 52
uint16 M30_H     = 53
uint16 M30_V     = 54
uint16 M30_F     = 55
uint16 R20_H     = 56
uint16 R20_V     = 57
uint16 R20_F     = 58
uint16 CAVITY_END = 59

================================================================================
MSG: atwork_commander_msgs/RobotState
# RobotState.msg

RobotHeader sender

geometry_msgs/Pose2D pose
nav_msgs/Path path

Object[3] objects_on_robot
Workstation[] current_arena_state



# additional content for season 2021 or later (use markers?)
# TODO: datatype for barriertape
# TODO: datatype for obstacles

================================================================================
MSG: geometry_msgs/Pose2D
# Deprecated
# Please use the full 3D pose.

# In general our recommendation is to use a full 3D representation of everything and for 2D specific applications make the appropriate projections into the plane for their calculations but optimally will preserve the 3D information during processing.

# If we have parallel copies of 2D datatypes every UI and other pipeline will end up needing to have dual interfaces to plot everything. And you will end up with not being able to use 3D tools for 2D use cases even if they're completely valid, as you'd have to reimplement it with different inputs and outputs. It's not particularly hard to plot the 2D pose or compute the yaw error for the Pose message and there are already tools and libraries that can do this for you.


# This expresses a position and orientation on a 2D manifold.

float64 x
float64 y
float64 theta

================================================================================
MSG: nav_msgs/Path
#An array of poses that represents a Path for a robot to follow
Header header
geometry_msgs/PoseStamped[] poses

================================================================================
MSG: geometry_msgs/PoseStamped
# A Pose with reference coordinate frame and timestamp
Header header
Pose pose

================================================================================
MSG: geometry_msgs/Pose
# A representation of pose in free space, composed of position and orientation. 
Point position
Quaternion orientation

================================================================================
MSG: geometry_msgs/Point
# This contains the position of a point in free space
float64 x
float64 y
float64 z

================================================================================
MSG: geometry_msgs/Quaternion
# This represents an orientation in free space in quaternion form.

float64 x
float64 y
float64 z
float64 w
"""
  # Pseudo-constants
  FAILURE = 0
  IDLE = 1
  READY = 2
  PREPARATION = 3
  EXECUTION = 4

  __slots__ = ['state','end','task','robots']
  _slot_types = ['uint8','time','atwork_commander_msgs/Task','atwork_commander_msgs/RobotState[]']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       state,end,task,robots

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(RefboxState, self).__init__(*args, **kwds)
      # message fields cannot be None, assign default values for those that are
      if self.state is None:
        self.state = 0
      if self.end is None:
        self.end = genpy.Time()
      if self.task is None:
        self.task = atwork_commander_msgs.msg.Task()
      if self.robots is None:
        self.robots = []
    else:
      self.state = 0
      self.end = genpy.Time()
      self.task = atwork_commander_msgs.msg.Task()
      self.robots = []

  def _get_types(self):
    """
    internal API method
    """
    return self._slot_types

  def serialize(self, buff):
    """
    serialize message into buffer
    :param buff: buffer, ``StringIO``
    """
    try:
      _x = self
      buff.write(_get_struct_B2I().pack(_x.state, _x.end.secs, _x.end.nsecs))
      length = len(self.task.execute_on)
      buff.write(_struct_I.pack(length))
      for val1 in self.task.execute_on:
        _v1 = val1.header
        _x = _v1.seq
        buff.write(_get_struct_I().pack(_x))
        _v2 = _v1.stamp
        _x = _v2
        buff.write(_get_struct_2I().pack(_x.secs, _x.nsecs))
        _x = _v1.frame_id
        length = len(_x)
        if python3 or type(_x) == unicode:
          _x = _x.encode('utf-8')
          length = len(_x)
        buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
        _x = val1.team_name
        length = len(_x)
        if python3 or type(_x) == unicode:
          _x = _x.encode('utf-8')
          length = len(_x)
        buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
        _x = val1.robot_name
        length = len(_x)
        if python3 or type(_x) == unicode:
          _x = _x.encode('utf-8')
          length = len(_x)
        buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
      length = len(self.task.arena_start_state)
      buff.write(_struct_I.pack(length))
      for val1 in self.task.arena_start_state:
        length = len(val1.objects)
        buff.write(_struct_I.pack(length))
        for val2 in val1.objects:
          _x = val2
          buff.write(_get_struct_2HB().pack(_x.object, _x.target, _x.decoy))
        _x = val1.workstation_name
        length = len(_x)
        if python3 or type(_x) == unicode:
          _x = _x.encode('utf-8')
          length = len(_x)
        buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
      length = len(self.task.arena_target_state)
      buff.write(_struct_I.pack(length))
      for val1 in self.task.arena_target_state:
        length = len(val1.objects)
        buff.write(_struct_I.pack(length))
        for val2 in val1.objects:
          _x = val2
          buff.write(_get_struct_2HB().pack(_x.object, _x.target, _x.decoy))
        _x = val1.workstation_name
        length = len(_x)
        if python3 or type(_x) == unicode:
          _x = _x.encode('utf-8')
          length = len(_x)
        buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
      _x = self
      buff.write(_get_struct_4i().pack(_x.task.prep_time.secs, _x.task.prep_time.nsecs, _x.task.exec_time.secs, _x.task.exec_time.nsecs))
      _x = self.task.type
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
      _x = self.task.id
      buff.write(_get_struct_Q().pack(_x))
      length = len(self.robots)
      buff.write(_struct_I.pack(length))
      for val1 in self.robots:
        _v3 = val1.sender
        _v4 = _v3.header
        _x = _v4.seq
        buff.write(_get_struct_I().pack(_x))
        _v5 = _v4.stamp
        _x = _v5
        buff.write(_get_struct_2I().pack(_x.secs, _x.nsecs))
        _x = _v4.frame_id
        length = len(_x)
        if python3 or type(_x) == unicode:
          _x = _x.encode('utf-8')
          length = len(_x)
        buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
        _x = _v3.team_name
        length = len(_x)
        if python3 or type(_x) == unicode:
          _x = _x.encode('utf-8')
          length = len(_x)
        buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
        _x = _v3.robot_name
        length = len(_x)
        if python3 or type(_x) == unicode:
          _x = _x.encode('utf-8')
          length = len(_x)
        buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
        _v6 = val1.pose
        _x = _v6
        buff.write(_get_struct_3d().pack(_x.x, _x.y, _x.theta))
        _v7 = val1.path
        _v8 = _v7.header
        _x = _v8.seq
        buff.write(_get_struct_I().pack(_x))
        _v9 = _v8.stamp
        _x = _v9
        buff.write(_get_struct_2I().pack(_x.secs, _x.nsecs))
        _x = _v8.frame_id
        length = len(_x)
        if python3 or type(_x) == unicode:
          _x = _x.encode('utf-8')
          length = len(_x)
        buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
        length = len(_v7.poses)
        buff.write(_struct_I.pack(length))
        for val3 in _v7.poses:
          _v10 = val3.header
          _x = _v10.seq
          buff.write(_get_struct_I().pack(_x))
          _v11 = _v10.stamp
          _x = _v11
          buff.write(_get_struct_2I().pack(_x.secs, _x.nsecs))
          _x = _v10.frame_id
          length = len(_x)
          if python3 or type(_x) == unicode:
            _x = _x.encode('utf-8')
            length = len(_x)
          buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
          _v12 = val3.pose
          _v13 = _v12.position
          _x = _v13
          buff.write(_get_struct_3d().pack(_x.x, _x.y, _x.z))
          _v14 = _v12.orientation
          _x = _v14
          buff.write(_get_struct_4d().pack(_x.x, _x.y, _x.z, _x.w))
        if len(val1.objects_on_robot) != 3:
          self._check_types(ValueError("Expecting %s items but found %s when writing '%s'" % (3, len(val1.objects_on_robot), 'val1.objects_on_robot')))
        for val2 in val1.objects_on_robot:
          _x = val2
          buff.write(_get_struct_2HB().pack(_x.object, _x.target, _x.decoy))
        length = len(val1.current_arena_state)
        buff.write(_struct_I.pack(length))
        for val2 in val1.current_arena_state:
          length = len(val2.objects)
          buff.write(_struct_I.pack(length))
          for val3 in val2.objects:
            _x = val3
            buff.write(_get_struct_2HB().pack(_x.object, _x.target, _x.decoy))
          _x = val2.workstation_name
          length = len(_x)
          if python3 or type(_x) == unicode:
            _x = _x.encode('utf-8')
            length = len(_x)
          buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      if self.end is None:
        self.end = genpy.Time()
      if self.task is None:
        self.task = atwork_commander_msgs.msg.Task()
      if self.robots is None:
        self.robots = None
      end = 0
      _x = self
      start = end
      end += 9
      (_x.state, _x.end.secs, _x.end.nsecs,) = _get_struct_B2I().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.task.execute_on = []
      for i in range(0, length):
        val1 = atwork_commander_msgs.msg.RobotHeader()
        _v15 = val1.header
        start = end
        end += 4
        (_v15.seq,) = _get_struct_I().unpack(str[start:end])
        _v16 = _v15.stamp
        _x = _v16
        start = end
        end += 8
        (_x.secs, _x.nsecs,) = _get_struct_2I().unpack(str[start:end])
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          _v15.frame_id = str[start:end].decode('utf-8', 'rosmsg')
        else:
          _v15.frame_id = str[start:end]
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          val1.team_name = str[start:end].decode('utf-8', 'rosmsg')
        else:
          val1.team_name = str[start:end]
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          val1.robot_name = str[start:end].decode('utf-8', 'rosmsg')
        else:
          val1.robot_name = str[start:end]
        self.task.execute_on.append(val1)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.task.arena_start_state = []
      for i in range(0, length):
        val1 = atwork_commander_msgs.msg.Workstation()
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        val1.objects = []
        for i in range(0, length):
          val2 = atwork_commander_msgs.msg.Object()
          _x = val2
          start = end
          end += 5
          (_x.object, _x.target, _x.decoy,) = _get_struct_2HB().unpack(str[start:end])
          val2.decoy = bool(val2.decoy)
          val1.objects.append(val2)
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          val1.workstation_name = str[start:end].decode('utf-8', 'rosmsg')
        else:
          val1.workstation_name = str[start:end]
        self.task.arena_start_state.append(val1)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.task.arena_target_state = []
      for i in range(0, length):
        val1 = atwork_commander_msgs.msg.Workstation()
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        val1.objects = []
        for i in range(0, length):
          val2 = atwork_commander_msgs.msg.Object()
          _x = val2
          start = end
          end += 5
          (_x.object, _x.target, _x.decoy,) = _get_struct_2HB().unpack(str[start:end])
          val2.decoy = bool(val2.decoy)
          val1.objects.append(val2)
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          val1.workstation_name = str[start:end].decode('utf-8', 'rosmsg')
        else:
          val1.workstation_name = str[start:end]
        self.task.arena_target_state.append(val1)
      _x = self
      start = end
      end += 16
      (_x.task.prep_time.secs, _x.task.prep_time.nsecs, _x.task.exec_time.secs, _x.task.exec_time.nsecs,) = _get_struct_4i().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.task.type = str[start:end].decode('utf-8', 'rosmsg')
      else:
        self.task.type = str[start:end]
      start = end
      end += 8
      (self.task.id,) = _get_struct_Q().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.robots = []
      for i in range(0, length):
        val1 = atwork_commander_msgs.msg.RobotState()
        _v17 = val1.sender
        _v18 = _v17.header
        start = end
        end += 4
        (_v18.seq,) = _get_struct_I().unpack(str[start:end])
        _v19 = _v18.stamp
        _x = _v19
        start = end
        end += 8
        (_x.secs, _x.nsecs,) = _get_struct_2I().unpack(str[start:end])
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          _v18.frame_id = str[start:end].decode('utf-8', 'rosmsg')
        else:
          _v18.frame_id = str[start:end]
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          _v17.team_name = str[start:end].decode('utf-8', 'rosmsg')
        else:
          _v17.team_name = str[start:end]
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          _v17.robot_name = str[start:end].decode('utf-8', 'rosmsg')
        else:
          _v17.robot_name = str[start:end]
        _v20 = val1.pose
        _x = _v20
        start = end
        end += 24
        (_x.x, _x.y, _x.theta,) = _get_struct_3d().unpack(str[start:end])
        _v21 = val1.path
        _v22 = _v21.header
        start = end
        end += 4
        (_v22.seq,) = _get_struct_I().unpack(str[start:end])
        _v23 = _v22.stamp
        _x = _v23
        start = end
        end += 8
        (_x.secs, _x.nsecs,) = _get_struct_2I().unpack(str[start:end])
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          _v22.frame_id = str[start:end].decode('utf-8', 'rosmsg')
        else:
          _v22.frame_id = str[start:end]
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        _v21.poses = []
        for i in range(0, length):
          val3 = geometry_msgs.msg.PoseStamped()
          _v24 = val3.header
          start = end
          end += 4
          (_v24.seq,) = _get_struct_I().unpack(str[start:end])
          _v25 = _v24.stamp
          _x = _v25
          start = end
          end += 8
          (_x.secs, _x.nsecs,) = _get_struct_2I().unpack(str[start:end])
          start = end
          end += 4
          (length,) = _struct_I.unpack(str[start:end])
          start = end
          end += length
          if python3:
            _v24.frame_id = str[start:end].decode('utf-8', 'rosmsg')
          else:
            _v24.frame_id = str[start:end]
          _v26 = val3.pose
          _v27 = _v26.position
          _x = _v27
          start = end
          end += 24
          (_x.x, _x.y, _x.z,) = _get_struct_3d().unpack(str[start:end])
          _v28 = _v26.orientation
          _x = _v28
          start = end
          end += 32
          (_x.x, _x.y, _x.z, _x.w,) = _get_struct_4d().unpack(str[start:end])
          _v21.poses.append(val3)
        val1.objects_on_robot = []
        for i in range(0, 3):
          val2 = atwork_commander_msgs.msg.Object()
          _x = val2
          start = end
          end += 5
          (_x.object, _x.target, _x.decoy,) = _get_struct_2HB().unpack(str[start:end])
          val2.decoy = bool(val2.decoy)
          val1.objects_on_robot.append(val2)
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        val1.current_arena_state = []
        for i in range(0, length):
          val2 = atwork_commander_msgs.msg.Workstation()
          start = end
          end += 4
          (length,) = _struct_I.unpack(str[start:end])
          val2.objects = []
          for i in range(0, length):
            val3 = atwork_commander_msgs.msg.Object()
            _x = val3
            start = end
            end += 5
            (_x.object, _x.target, _x.decoy,) = _get_struct_2HB().unpack(str[start:end])
            val3.decoy = bool(val3.decoy)
            val2.objects.append(val3)
          start = end
          end += 4
          (length,) = _struct_I.unpack(str[start:end])
          start = end
          end += length
          if python3:
            val2.workstation_name = str[start:end].decode('utf-8', 'rosmsg')
          else:
            val2.workstation_name = str[start:end]
          val1.current_arena_state.append(val2)
        self.robots.append(val1)
      self.end.canon()
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      _x = self
      buff.write(_get_struct_B2I().pack(_x.state, _x.end.secs, _x.end.nsecs))
      length = len(self.task.execute_on)
      buff.write(_struct_I.pack(length))
      for val1 in self.task.execute_on:
        _v29 = val1.header
        _x = _v29.seq
        buff.write(_get_struct_I().pack(_x))
        _v30 = _v29.stamp
        _x = _v30
        buff.write(_get_struct_2I().pack(_x.secs, _x.nsecs))
        _x = _v29.frame_id
        length = len(_x)
        if python3 or type(_x) == unicode:
          _x = _x.encode('utf-8')
          length = len(_x)
        buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
        _x = val1.team_name
        length = len(_x)
        if python3 or type(_x) == unicode:
          _x = _x.encode('utf-8')
          length = len(_x)
        buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
        _x = val1.robot_name
        length = len(_x)
        if python3 or type(_x) == unicode:
          _x = _x.encode('utf-8')
          length = len(_x)
        buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
      length = len(self.task.arena_start_state)
      buff.write(_struct_I.pack(length))
      for val1 in self.task.arena_start_state:
        length = len(val1.objects)
        buff.write(_struct_I.pack(length))
        for val2 in val1.objects:
          _x = val2
          buff.write(_get_struct_2HB().pack(_x.object, _x.target, _x.decoy))
        _x = val1.workstation_name
        length = len(_x)
        if python3 or type(_x) == unicode:
          _x = _x.encode('utf-8')
          length = len(_x)
        buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
      length = len(self.task.arena_target_state)
      buff.write(_struct_I.pack(length))
      for val1 in self.task.arena_target_state:
        length = len(val1.objects)
        buff.write(_struct_I.pack(length))
        for val2 in val1.objects:
          _x = val2
          buff.write(_get_struct_2HB().pack(_x.object, _x.target, _x.decoy))
        _x = val1.workstation_name
        length = len(_x)
        if python3 or type(_x) == unicode:
          _x = _x.encode('utf-8')
          length = len(_x)
        buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
      _x = self
      buff.write(_get_struct_4i().pack(_x.task.prep_time.secs, _x.task.prep_time.nsecs, _x.task.exec_time.secs, _x.task.exec_time.nsecs))
      _x = self.task.type
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
      _x = self.task.id
      buff.write(_get_struct_Q().pack(_x))
      length = len(self.robots)
      buff.write(_struct_I.pack(length))
      for val1 in self.robots:
        _v31 = val1.sender
        _v32 = _v31.header
        _x = _v32.seq
        buff.write(_get_struct_I().pack(_x))
        _v33 = _v32.stamp
        _x = _v33
        buff.write(_get_struct_2I().pack(_x.secs, _x.nsecs))
        _x = _v32.frame_id
        length = len(_x)
        if python3 or type(_x) == unicode:
          _x = _x.encode('utf-8')
          length = len(_x)
        buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
        _x = _v31.team_name
        length = len(_x)
        if python3 or type(_x) == unicode:
          _x = _x.encode('utf-8')
          length = len(_x)
        buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
        _x = _v31.robot_name
        length = len(_x)
        if python3 or type(_x) == unicode:
          _x = _x.encode('utf-8')
          length = len(_x)
        buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
        _v34 = val1.pose
        _x = _v34
        buff.write(_get_struct_3d().pack(_x.x, _x.y, _x.theta))
        _v35 = val1.path
        _v36 = _v35.header
        _x = _v36.seq
        buff.write(_get_struct_I().pack(_x))
        _v37 = _v36.stamp
        _x = _v37
        buff.write(_get_struct_2I().pack(_x.secs, _x.nsecs))
        _x = _v36.frame_id
        length = len(_x)
        if python3 or type(_x) == unicode:
          _x = _x.encode('utf-8')
          length = len(_x)
        buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
        length = len(_v35.poses)
        buff.write(_struct_I.pack(length))
        for val3 in _v35.poses:
          _v38 = val3.header
          _x = _v38.seq
          buff.write(_get_struct_I().pack(_x))
          _v39 = _v38.stamp
          _x = _v39
          buff.write(_get_struct_2I().pack(_x.secs, _x.nsecs))
          _x = _v38.frame_id
          length = len(_x)
          if python3 or type(_x) == unicode:
            _x = _x.encode('utf-8')
            length = len(_x)
          buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
          _v40 = val3.pose
          _v41 = _v40.position
          _x = _v41
          buff.write(_get_struct_3d().pack(_x.x, _x.y, _x.z))
          _v42 = _v40.orientation
          _x = _v42
          buff.write(_get_struct_4d().pack(_x.x, _x.y, _x.z, _x.w))
        if len(val1.objects_on_robot) != 3:
          self._check_types(ValueError("Expecting %s items but found %s when writing '%s'" % (3, len(val1.objects_on_robot), 'val1.objects_on_robot')))
        for val2 in val1.objects_on_robot:
          _x = val2
          buff.write(_get_struct_2HB().pack(_x.object, _x.target, _x.decoy))
        length = len(val1.current_arena_state)
        buff.write(_struct_I.pack(length))
        for val2 in val1.current_arena_state:
          length = len(val2.objects)
          buff.write(_struct_I.pack(length))
          for val3 in val2.objects:
            _x = val3
            buff.write(_get_struct_2HB().pack(_x.object, _x.target, _x.decoy))
          _x = val2.workstation_name
          length = len(_x)
          if python3 or type(_x) == unicode:
            _x = _x.encode('utf-8')
            length = len(_x)
          buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      if self.end is None:
        self.end = genpy.Time()
      if self.task is None:
        self.task = atwork_commander_msgs.msg.Task()
      if self.robots is None:
        self.robots = None
      end = 0
      _x = self
      start = end
      end += 9
      (_x.state, _x.end.secs, _x.end.nsecs,) = _get_struct_B2I().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.task.execute_on = []
      for i in range(0, length):
        val1 = atwork_commander_msgs.msg.RobotHeader()
        _v43 = val1.header
        start = end
        end += 4
        (_v43.seq,) = _get_struct_I().unpack(str[start:end])
        _v44 = _v43.stamp
        _x = _v44
        start = end
        end += 8
        (_x.secs, _x.nsecs,) = _get_struct_2I().unpack(str[start:end])
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          _v43.frame_id = str[start:end].decode('utf-8', 'rosmsg')
        else:
          _v43.frame_id = str[start:end]
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          val1.team_name = str[start:end].decode('utf-8', 'rosmsg')
        else:
          val1.team_name = str[start:end]
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          val1.robot_name = str[start:end].decode('utf-8', 'rosmsg')
        else:
          val1.robot_name = str[start:end]
        self.task.execute_on.append(val1)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.task.arena_start_state = []
      for i in range(0, length):
        val1 = atwork_commander_msgs.msg.Workstation()
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        val1.objects = []
        for i in range(0, length):
          val2 = atwork_commander_msgs.msg.Object()
          _x = val2
          start = end
          end += 5
          (_x.object, _x.target, _x.decoy,) = _get_struct_2HB().unpack(str[start:end])
          val2.decoy = bool(val2.decoy)
          val1.objects.append(val2)
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          val1.workstation_name = str[start:end].decode('utf-8', 'rosmsg')
        else:
          val1.workstation_name = str[start:end]
        self.task.arena_start_state.append(val1)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.task.arena_target_state = []
      for i in range(0, length):
        val1 = atwork_commander_msgs.msg.Workstation()
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        val1.objects = []
        for i in range(0, length):
          val2 = atwork_commander_msgs.msg.Object()
          _x = val2
          start = end
          end += 5
          (_x.object, _x.target, _x.decoy,) = _get_struct_2HB().unpack(str[start:end])
          val2.decoy = bool(val2.decoy)
          val1.objects.append(val2)
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          val1.workstation_name = str[start:end].decode('utf-8', 'rosmsg')
        else:
          val1.workstation_name = str[start:end]
        self.task.arena_target_state.append(val1)
      _x = self
      start = end
      end += 16
      (_x.task.prep_time.secs, _x.task.prep_time.nsecs, _x.task.exec_time.secs, _x.task.exec_time.nsecs,) = _get_struct_4i().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.task.type = str[start:end].decode('utf-8', 'rosmsg')
      else:
        self.task.type = str[start:end]
      start = end
      end += 8
      (self.task.id,) = _get_struct_Q().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.robots = []
      for i in range(0, length):
        val1 = atwork_commander_msgs.msg.RobotState()
        _v45 = val1.sender
        _v46 = _v45.header
        start = end
        end += 4
        (_v46.seq,) = _get_struct_I().unpack(str[start:end])
        _v47 = _v46.stamp
        _x = _v47
        start = end
        end += 8
        (_x.secs, _x.nsecs,) = _get_struct_2I().unpack(str[start:end])
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          _v46.frame_id = str[start:end].decode('utf-8', 'rosmsg')
        else:
          _v46.frame_id = str[start:end]
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          _v45.team_name = str[start:end].decode('utf-8', 'rosmsg')
        else:
          _v45.team_name = str[start:end]
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          _v45.robot_name = str[start:end].decode('utf-8', 'rosmsg')
        else:
          _v45.robot_name = str[start:end]
        _v48 = val1.pose
        _x = _v48
        start = end
        end += 24
        (_x.x, _x.y, _x.theta,) = _get_struct_3d().unpack(str[start:end])
        _v49 = val1.path
        _v50 = _v49.header
        start = end
        end += 4
        (_v50.seq,) = _get_struct_I().unpack(str[start:end])
        _v51 = _v50.stamp
        _x = _v51
        start = end
        end += 8
        (_x.secs, _x.nsecs,) = _get_struct_2I().unpack(str[start:end])
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          _v50.frame_id = str[start:end].decode('utf-8', 'rosmsg')
        else:
          _v50.frame_id = str[start:end]
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        _v49.poses = []
        for i in range(0, length):
          val3 = geometry_msgs.msg.PoseStamped()
          _v52 = val3.header
          start = end
          end += 4
          (_v52.seq,) = _get_struct_I().unpack(str[start:end])
          _v53 = _v52.stamp
          _x = _v53
          start = end
          end += 8
          (_x.secs, _x.nsecs,) = _get_struct_2I().unpack(str[start:end])
          start = end
          end += 4
          (length,) = _struct_I.unpack(str[start:end])
          start = end
          end += length
          if python3:
            _v52.frame_id = str[start:end].decode('utf-8', 'rosmsg')
          else:
            _v52.frame_id = str[start:end]
          _v54 = val3.pose
          _v55 = _v54.position
          _x = _v55
          start = end
          end += 24
          (_x.x, _x.y, _x.z,) = _get_struct_3d().unpack(str[start:end])
          _v56 = _v54.orientation
          _x = _v56
          start = end
          end += 32
          (_x.x, _x.y, _x.z, _x.w,) = _get_struct_4d().unpack(str[start:end])
          _v49.poses.append(val3)
        val1.objects_on_robot = []
        for i in range(0, 3):
          val2 = atwork_commander_msgs.msg.Object()
          _x = val2
          start = end
          end += 5
          (_x.object, _x.target, _x.decoy,) = _get_struct_2HB().unpack(str[start:end])
          val2.decoy = bool(val2.decoy)
          val1.objects_on_robot.append(val2)
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        val1.current_arena_state = []
        for i in range(0, length):
          val2 = atwork_commander_msgs.msg.Workstation()
          start = end
          end += 4
          (length,) = _struct_I.unpack(str[start:end])
          val2.objects = []
          for i in range(0, length):
            val3 = atwork_commander_msgs.msg.Object()
            _x = val3
            start = end
            end += 5
            (_x.object, _x.target, _x.decoy,) = _get_struct_2HB().unpack(str[start:end])
            val3.decoy = bool(val3.decoy)
            val2.objects.append(val3)
          start = end
          end += 4
          (length,) = _struct_I.unpack(str[start:end])
          start = end
          end += length
          if python3:
            val2.workstation_name = str[start:end].decode('utf-8', 'rosmsg')
          else:
            val2.workstation_name = str[start:end]
          val1.current_arena_state.append(val2)
        self.robots.append(val1)
      self.end.canon()
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_2HB = None
def _get_struct_2HB():
    global _struct_2HB
    if _struct_2HB is None:
        _struct_2HB = struct.Struct("<2HB")
    return _struct_2HB
_struct_2I = None
def _get_struct_2I():
    global _struct_2I
    if _struct_2I is None:
        _struct_2I = struct.Struct("<2I")
    return _struct_2I
_struct_3d = None
def _get_struct_3d():
    global _struct_3d
    if _struct_3d is None:
        _struct_3d = struct.Struct("<3d")
    return _struct_3d
_struct_4d = None
def _get_struct_4d():
    global _struct_4d
    if _struct_4d is None:
        _struct_4d = struct.Struct("<4d")
    return _struct_4d
_struct_4i = None
def _get_struct_4i():
    global _struct_4i
    if _struct_4i is None:
        _struct_4i = struct.Struct("<4i")
    return _struct_4i
_struct_B2I = None
def _get_struct_B2I():
    global _struct_B2I
    if _struct_B2I is None:
        _struct_B2I = struct.Struct("<B2I")
    return _struct_B2I
_struct_Q = None
def _get_struct_Q():
    global _struct_Q
    if _struct_Q is None:
        _struct_Q = struct.Struct("<Q")
    return _struct_Q