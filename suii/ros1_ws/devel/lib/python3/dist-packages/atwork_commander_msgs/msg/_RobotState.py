# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from atwork_commander_msgs/RobotState.msg. Do not edit."""
import codecs
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import atwork_commander_msgs.msg
import geometry_msgs.msg
import nav_msgs.msg
import std_msgs.msg

class RobotState(genpy.Message):
  _md5sum = "dd883dda0c5739d8cae16aa5923663e5"
  _type = "atwork_commander_msgs/RobotState"
  _has_header = False  # flag to mark the presence of a Header object
  _full_text = """# RobotState.msg

RobotHeader sender

geometry_msgs/Pose2D pose
nav_msgs/Path path

Object[3] objects_on_robot
Workstation[] current_arena_state



# additional content for season 2021 or later (use markers?)
# TODO: datatype for barriertape
# TODO: datatype for obstacles

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
MSG: atwork_commander_msgs/Workstation
# workstation.msg

 Object[] objects

# either a workstation name or 'robot'
# (for end of RTT or start of PPT)
string workstation_name
"""
  __slots__ = ['sender','pose','path','objects_on_robot','current_arena_state']
  _slot_types = ['atwork_commander_msgs/RobotHeader','geometry_msgs/Pose2D','nav_msgs/Path','atwork_commander_msgs/Object[3]','atwork_commander_msgs/Workstation[]']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       sender,pose,path,objects_on_robot,current_arena_state

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(RobotState, self).__init__(*args, **kwds)
      # message fields cannot be None, assign default values for those that are
      if self.sender is None:
        self.sender = atwork_commander_msgs.msg.RobotHeader()
      if self.pose is None:
        self.pose = geometry_msgs.msg.Pose2D()
      if self.path is None:
        self.path = nav_msgs.msg.Path()
      if self.objects_on_robot is None:
        self.objects_on_robot = [atwork_commander_msgs.msg.Object() for _ in range(3)]
      if self.current_arena_state is None:
        self.current_arena_state = []
    else:
      self.sender = atwork_commander_msgs.msg.RobotHeader()
      self.pose = geometry_msgs.msg.Pose2D()
      self.path = nav_msgs.msg.Path()
      self.objects_on_robot = [atwork_commander_msgs.msg.Object() for _ in range(3)]
      self.current_arena_state = []

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
      buff.write(_get_struct_3I().pack(_x.sender.header.seq, _x.sender.header.stamp.secs, _x.sender.header.stamp.nsecs))
      _x = self.sender.header.frame_id
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
      _x = self.sender.team_name
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
      _x = self.sender.robot_name
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
      _x = self
      buff.write(_get_struct_3d3I().pack(_x.pose.x, _x.pose.y, _x.pose.theta, _x.path.header.seq, _x.path.header.stamp.secs, _x.path.header.stamp.nsecs))
      _x = self.path.header.frame_id
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
      length = len(self.path.poses)
      buff.write(_struct_I.pack(length))
      for val1 in self.path.poses:
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
        _v3 = val1.pose
        _v4 = _v3.position
        _x = _v4
        buff.write(_get_struct_3d().pack(_x.x, _x.y, _x.z))
        _v5 = _v3.orientation
        _x = _v5
        buff.write(_get_struct_4d().pack(_x.x, _x.y, _x.z, _x.w))
      if len(self.objects_on_robot) != 3:
        self._check_types(ValueError("Expecting %s items but found %s when writing '%s'" % (3, len(self.objects_on_robot), 'self.objects_on_robot')))
      for val1 in self.objects_on_robot:
        _x = val1
        buff.write(_get_struct_2HB().pack(_x.object, _x.target, _x.decoy))
      length = len(self.current_arena_state)
      buff.write(_struct_I.pack(length))
      for val1 in self.current_arena_state:
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
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      if self.sender is None:
        self.sender = atwork_commander_msgs.msg.RobotHeader()
      if self.pose is None:
        self.pose = geometry_msgs.msg.Pose2D()
      if self.path is None:
        self.path = nav_msgs.msg.Path()
      if self.objects_on_robot is None:
        self.objects_on_robot = None
      if self.current_arena_state is None:
        self.current_arena_state = None
      end = 0
      _x = self
      start = end
      end += 12
      (_x.sender.header.seq, _x.sender.header.stamp.secs, _x.sender.header.stamp.nsecs,) = _get_struct_3I().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.sender.header.frame_id = str[start:end].decode('utf-8', 'rosmsg')
      else:
        self.sender.header.frame_id = str[start:end]
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.sender.team_name = str[start:end].decode('utf-8', 'rosmsg')
      else:
        self.sender.team_name = str[start:end]
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.sender.robot_name = str[start:end].decode('utf-8', 'rosmsg')
      else:
        self.sender.robot_name = str[start:end]
      _x = self
      start = end
      end += 36
      (_x.pose.x, _x.pose.y, _x.pose.theta, _x.path.header.seq, _x.path.header.stamp.secs, _x.path.header.stamp.nsecs,) = _get_struct_3d3I().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.path.header.frame_id = str[start:end].decode('utf-8', 'rosmsg')
      else:
        self.path.header.frame_id = str[start:end]
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.path.poses = []
      for i in range(0, length):
        val1 = geometry_msgs.msg.PoseStamped()
        _v6 = val1.header
        start = end
        end += 4
        (_v6.seq,) = _get_struct_I().unpack(str[start:end])
        _v7 = _v6.stamp
        _x = _v7
        start = end
        end += 8
        (_x.secs, _x.nsecs,) = _get_struct_2I().unpack(str[start:end])
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          _v6.frame_id = str[start:end].decode('utf-8', 'rosmsg')
        else:
          _v6.frame_id = str[start:end]
        _v8 = val1.pose
        _v9 = _v8.position
        _x = _v9
        start = end
        end += 24
        (_x.x, _x.y, _x.z,) = _get_struct_3d().unpack(str[start:end])
        _v10 = _v8.orientation
        _x = _v10
        start = end
        end += 32
        (_x.x, _x.y, _x.z, _x.w,) = _get_struct_4d().unpack(str[start:end])
        self.path.poses.append(val1)
      self.objects_on_robot = []
      for i in range(0, 3):
        val1 = atwork_commander_msgs.msg.Object()
        _x = val1
        start = end
        end += 5
        (_x.object, _x.target, _x.decoy,) = _get_struct_2HB().unpack(str[start:end])
        val1.decoy = bool(val1.decoy)
        self.objects_on_robot.append(val1)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.current_arena_state = []
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
        self.current_arena_state.append(val1)
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
      buff.write(_get_struct_3I().pack(_x.sender.header.seq, _x.sender.header.stamp.secs, _x.sender.header.stamp.nsecs))
      _x = self.sender.header.frame_id
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
      _x = self.sender.team_name
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
      _x = self.sender.robot_name
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
      _x = self
      buff.write(_get_struct_3d3I().pack(_x.pose.x, _x.pose.y, _x.pose.theta, _x.path.header.seq, _x.path.header.stamp.secs, _x.path.header.stamp.nsecs))
      _x = self.path.header.frame_id
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
      length = len(self.path.poses)
      buff.write(_struct_I.pack(length))
      for val1 in self.path.poses:
        _v11 = val1.header
        _x = _v11.seq
        buff.write(_get_struct_I().pack(_x))
        _v12 = _v11.stamp
        _x = _v12
        buff.write(_get_struct_2I().pack(_x.secs, _x.nsecs))
        _x = _v11.frame_id
        length = len(_x)
        if python3 or type(_x) == unicode:
          _x = _x.encode('utf-8')
          length = len(_x)
        buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
        _v13 = val1.pose
        _v14 = _v13.position
        _x = _v14
        buff.write(_get_struct_3d().pack(_x.x, _x.y, _x.z))
        _v15 = _v13.orientation
        _x = _v15
        buff.write(_get_struct_4d().pack(_x.x, _x.y, _x.z, _x.w))
      if len(self.objects_on_robot) != 3:
        self._check_types(ValueError("Expecting %s items but found %s when writing '%s'" % (3, len(self.objects_on_robot), 'self.objects_on_robot')))
      for val1 in self.objects_on_robot:
        _x = val1
        buff.write(_get_struct_2HB().pack(_x.object, _x.target, _x.decoy))
      length = len(self.current_arena_state)
      buff.write(_struct_I.pack(length))
      for val1 in self.current_arena_state:
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
      if self.sender is None:
        self.sender = atwork_commander_msgs.msg.RobotHeader()
      if self.pose is None:
        self.pose = geometry_msgs.msg.Pose2D()
      if self.path is None:
        self.path = nav_msgs.msg.Path()
      if self.objects_on_robot is None:
        self.objects_on_robot = None
      if self.current_arena_state is None:
        self.current_arena_state = None
      end = 0
      _x = self
      start = end
      end += 12
      (_x.sender.header.seq, _x.sender.header.stamp.secs, _x.sender.header.stamp.nsecs,) = _get_struct_3I().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.sender.header.frame_id = str[start:end].decode('utf-8', 'rosmsg')
      else:
        self.sender.header.frame_id = str[start:end]
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.sender.team_name = str[start:end].decode('utf-8', 'rosmsg')
      else:
        self.sender.team_name = str[start:end]
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.sender.robot_name = str[start:end].decode('utf-8', 'rosmsg')
      else:
        self.sender.robot_name = str[start:end]
      _x = self
      start = end
      end += 36
      (_x.pose.x, _x.pose.y, _x.pose.theta, _x.path.header.seq, _x.path.header.stamp.secs, _x.path.header.stamp.nsecs,) = _get_struct_3d3I().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.path.header.frame_id = str[start:end].decode('utf-8', 'rosmsg')
      else:
        self.path.header.frame_id = str[start:end]
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.path.poses = []
      for i in range(0, length):
        val1 = geometry_msgs.msg.PoseStamped()
        _v16 = val1.header
        start = end
        end += 4
        (_v16.seq,) = _get_struct_I().unpack(str[start:end])
        _v17 = _v16.stamp
        _x = _v17
        start = end
        end += 8
        (_x.secs, _x.nsecs,) = _get_struct_2I().unpack(str[start:end])
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          _v16.frame_id = str[start:end].decode('utf-8', 'rosmsg')
        else:
          _v16.frame_id = str[start:end]
        _v18 = val1.pose
        _v19 = _v18.position
        _x = _v19
        start = end
        end += 24
        (_x.x, _x.y, _x.z,) = _get_struct_3d().unpack(str[start:end])
        _v20 = _v18.orientation
        _x = _v20
        start = end
        end += 32
        (_x.x, _x.y, _x.z, _x.w,) = _get_struct_4d().unpack(str[start:end])
        self.path.poses.append(val1)
      self.objects_on_robot = []
      for i in range(0, 3):
        val1 = atwork_commander_msgs.msg.Object()
        _x = val1
        start = end
        end += 5
        (_x.object, _x.target, _x.decoy,) = _get_struct_2HB().unpack(str[start:end])
        val1.decoy = bool(val1.decoy)
        self.objects_on_robot.append(val1)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.current_arena_state = []
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
        self.current_arena_state.append(val1)
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
_struct_3I = None
def _get_struct_3I():
    global _struct_3I
    if _struct_3I is None:
        _struct_3I = struct.Struct("<3I")
    return _struct_3I
_struct_3d = None
def _get_struct_3d():
    global _struct_3d
    if _struct_3d is None:
        _struct_3d = struct.Struct("<3d")
    return _struct_3d
_struct_3d3I = None
def _get_struct_3d3I():
    global _struct_3d3I
    if _struct_3d3I is None:
        _struct_3d3I = struct.Struct("<3d3I")
    return _struct_3d3I
_struct_4d = None
def _get_struct_4d():
    global _struct_4d
    if _struct_4d is None:
        _struct_4d = struct.Struct("<4d")
    return _struct_4d