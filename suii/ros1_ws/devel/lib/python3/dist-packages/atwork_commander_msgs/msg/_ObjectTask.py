# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from atwork_commander_msgs/ObjectTask.msg. Do not edit."""
import codecs
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import atwork_commander_msgs.msg
import genpy
import std_msgs.msg

class ObjectTask(genpy.Message):
  _md5sum = "110802c2321e7e0a5f49840a38f9b422"
  _type = "atwork_commander_msgs/ObjectTask"
  _has_header = False  # flag to mark the presence of a Header object
  _full_text = """RobotHeader[] execute_on

Transport[] subtasks

duration prep_time
duration exec_time


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
MSG: atwork_commander_msgs/Transport
Object object
string source
string destination

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
"""
  __slots__ = ['execute_on','subtasks','prep_time','exec_time']
  _slot_types = ['atwork_commander_msgs/RobotHeader[]','atwork_commander_msgs/Transport[]','duration','duration']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       execute_on,subtasks,prep_time,exec_time

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(ObjectTask, self).__init__(*args, **kwds)
      # message fields cannot be None, assign default values for those that are
      if self.execute_on is None:
        self.execute_on = []
      if self.subtasks is None:
        self.subtasks = []
      if self.prep_time is None:
        self.prep_time = genpy.Duration()
      if self.exec_time is None:
        self.exec_time = genpy.Duration()
    else:
      self.execute_on = []
      self.subtasks = []
      self.prep_time = genpy.Duration()
      self.exec_time = genpy.Duration()

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
      length = len(self.execute_on)
      buff.write(_struct_I.pack(length))
      for val1 in self.execute_on:
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
      length = len(self.subtasks)
      buff.write(_struct_I.pack(length))
      for val1 in self.subtasks:
        _v3 = val1.object
        _x = _v3
        buff.write(_get_struct_2HB().pack(_x.object, _x.target, _x.decoy))
        _x = val1.source
        length = len(_x)
        if python3 or type(_x) == unicode:
          _x = _x.encode('utf-8')
          length = len(_x)
        buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
        _x = val1.destination
        length = len(_x)
        if python3 or type(_x) == unicode:
          _x = _x.encode('utf-8')
          length = len(_x)
        buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
      _x = self
      buff.write(_get_struct_4i().pack(_x.prep_time.secs, _x.prep_time.nsecs, _x.exec_time.secs, _x.exec_time.nsecs))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      if self.execute_on is None:
        self.execute_on = None
      if self.subtasks is None:
        self.subtasks = None
      if self.prep_time is None:
        self.prep_time = genpy.Duration()
      if self.exec_time is None:
        self.exec_time = genpy.Duration()
      end = 0
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.execute_on = []
      for i in range(0, length):
        val1 = atwork_commander_msgs.msg.RobotHeader()
        _v4 = val1.header
        start = end
        end += 4
        (_v4.seq,) = _get_struct_I().unpack(str[start:end])
        _v5 = _v4.stamp
        _x = _v5
        start = end
        end += 8
        (_x.secs, _x.nsecs,) = _get_struct_2I().unpack(str[start:end])
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          _v4.frame_id = str[start:end].decode('utf-8', 'rosmsg')
        else:
          _v4.frame_id = str[start:end]
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
        self.execute_on.append(val1)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.subtasks = []
      for i in range(0, length):
        val1 = atwork_commander_msgs.msg.Transport()
        _v6 = val1.object
        _x = _v6
        start = end
        end += 5
        (_x.object, _x.target, _x.decoy,) = _get_struct_2HB().unpack(str[start:end])
        _v6.decoy = bool(_v6.decoy)
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          val1.source = str[start:end].decode('utf-8', 'rosmsg')
        else:
          val1.source = str[start:end]
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          val1.destination = str[start:end].decode('utf-8', 'rosmsg')
        else:
          val1.destination = str[start:end]
        self.subtasks.append(val1)
      _x = self
      start = end
      end += 16
      (_x.prep_time.secs, _x.prep_time.nsecs, _x.exec_time.secs, _x.exec_time.nsecs,) = _get_struct_4i().unpack(str[start:end])
      self.prep_time.canon()
      self.exec_time.canon()
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
      length = len(self.execute_on)
      buff.write(_struct_I.pack(length))
      for val1 in self.execute_on:
        _v7 = val1.header
        _x = _v7.seq
        buff.write(_get_struct_I().pack(_x))
        _v8 = _v7.stamp
        _x = _v8
        buff.write(_get_struct_2I().pack(_x.secs, _x.nsecs))
        _x = _v7.frame_id
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
      length = len(self.subtasks)
      buff.write(_struct_I.pack(length))
      for val1 in self.subtasks:
        _v9 = val1.object
        _x = _v9
        buff.write(_get_struct_2HB().pack(_x.object, _x.target, _x.decoy))
        _x = val1.source
        length = len(_x)
        if python3 or type(_x) == unicode:
          _x = _x.encode('utf-8')
          length = len(_x)
        buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
        _x = val1.destination
        length = len(_x)
        if python3 or type(_x) == unicode:
          _x = _x.encode('utf-8')
          length = len(_x)
        buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
      _x = self
      buff.write(_get_struct_4i().pack(_x.prep_time.secs, _x.prep_time.nsecs, _x.exec_time.secs, _x.exec_time.nsecs))
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
      if self.execute_on is None:
        self.execute_on = None
      if self.subtasks is None:
        self.subtasks = None
      if self.prep_time is None:
        self.prep_time = genpy.Duration()
      if self.exec_time is None:
        self.exec_time = genpy.Duration()
      end = 0
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.execute_on = []
      for i in range(0, length):
        val1 = atwork_commander_msgs.msg.RobotHeader()
        _v10 = val1.header
        start = end
        end += 4
        (_v10.seq,) = _get_struct_I().unpack(str[start:end])
        _v11 = _v10.stamp
        _x = _v11
        start = end
        end += 8
        (_x.secs, _x.nsecs,) = _get_struct_2I().unpack(str[start:end])
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          _v10.frame_id = str[start:end].decode('utf-8', 'rosmsg')
        else:
          _v10.frame_id = str[start:end]
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
        self.execute_on.append(val1)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.subtasks = []
      for i in range(0, length):
        val1 = atwork_commander_msgs.msg.Transport()
        _v12 = val1.object
        _x = _v12
        start = end
        end += 5
        (_x.object, _x.target, _x.decoy,) = _get_struct_2HB().unpack(str[start:end])
        _v12.decoy = bool(_v12.decoy)
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          val1.source = str[start:end].decode('utf-8', 'rosmsg')
        else:
          val1.source = str[start:end]
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          val1.destination = str[start:end].decode('utf-8', 'rosmsg')
        else:
          val1.destination = str[start:end]
        self.subtasks.append(val1)
      _x = self
      start = end
      end += 16
      (_x.prep_time.secs, _x.prep_time.nsecs, _x.exec_time.secs, _x.exec_time.nsecs,) = _get_struct_4i().unpack(str[start:end])
      self.prep_time.canon()
      self.exec_time.canon()
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
_struct_4i = None
def _get_struct_4i():
    global _struct_4i
    if _struct_4i is None:
        _struct_4i = struct.Struct("<4i")
    return _struct_4i
