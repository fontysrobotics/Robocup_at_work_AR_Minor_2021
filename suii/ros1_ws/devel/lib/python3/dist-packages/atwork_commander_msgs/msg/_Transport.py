# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from atwork_commander_msgs/Transport.msg. Do not edit."""
import codecs
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import atwork_commander_msgs.msg

class Transport(genpy.Message):
  _md5sum = "8105e7cba30e822d7c08bd538069c0ba"
  _type = "atwork_commander_msgs/Transport"
  _has_header = False  # flag to mark the presence of a Header object
  _full_text = """Object object
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
  __slots__ = ['object','source','destination']
  _slot_types = ['atwork_commander_msgs/Object','string','string']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       object,source,destination

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(Transport, self).__init__(*args, **kwds)
      # message fields cannot be None, assign default values for those that are
      if self.object is None:
        self.object = atwork_commander_msgs.msg.Object()
      if self.source is None:
        self.source = ''
      if self.destination is None:
        self.destination = ''
    else:
      self.object = atwork_commander_msgs.msg.Object()
      self.source = ''
      self.destination = ''

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
      buff.write(_get_struct_2HB().pack(_x.object.object, _x.object.target, _x.object.decoy))
      _x = self.source
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
      _x = self.destination
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
      if self.object is None:
        self.object = atwork_commander_msgs.msg.Object()
      end = 0
      _x = self
      start = end
      end += 5
      (_x.object.object, _x.object.target, _x.object.decoy,) = _get_struct_2HB().unpack(str[start:end])
      self.object.decoy = bool(self.object.decoy)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.source = str[start:end].decode('utf-8', 'rosmsg')
      else:
        self.source = str[start:end]
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.destination = str[start:end].decode('utf-8', 'rosmsg')
      else:
        self.destination = str[start:end]
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
      buff.write(_get_struct_2HB().pack(_x.object.object, _x.object.target, _x.object.decoy))
      _x = self.source
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
      _x = self.destination
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
      if self.object is None:
        self.object = atwork_commander_msgs.msg.Object()
      end = 0
      _x = self
      start = end
      end += 5
      (_x.object.object, _x.object.target, _x.object.decoy,) = _get_struct_2HB().unpack(str[start:end])
      self.object.decoy = bool(self.object.decoy)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.source = str[start:end].decode('utf-8', 'rosmsg')
      else:
        self.source = str[start:end]
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.destination = str[start:end].decode('utf-8', 'rosmsg')
      else:
        self.destination = str[start:end]
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