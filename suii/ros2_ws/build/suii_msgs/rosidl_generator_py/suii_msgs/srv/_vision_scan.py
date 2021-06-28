# generated from rosidl_generator_py/resource/_idl.py.em
# with input from suii_msgs:srv/VisionScan.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_VisionScan_Request(type):
    """Metaclass of message 'VisionScan_Request'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('suii_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'suii_msgs.srv.VisionScan_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__vision_scan__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__vision_scan__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__vision_scan__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__vision_scan__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__vision_scan__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class VisionScan_Request(metaclass=Metaclass_VisionScan_Request):
    """Message class 'VisionScan_Request'."""

    __slots__ = [
    ]

    _fields_and_field_types = {
    }

    SLOT_TYPES = (
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_VisionScan_Response(type):
    """Metaclass of message 'VisionScan_Response'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('suii_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'suii_msgs.srv.VisionScan_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__vision_scan__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__vision_scan__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__vision_scan__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__vision_scan__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__vision_scan__response

            from suii_msgs.msg import VisionScanObject
            if VisionScanObject.__class__._TYPE_SUPPORT is None:
                VisionScanObject.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class VisionScan_Response(metaclass=Metaclass_VisionScan_Response):
    """Message class 'VisionScan_Response'."""

    __slots__ = [
        '_result',
    ]

    _fields_and_field_types = {
        'result': 'sequence<suii_msgs/VisionScanObject>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['suii_msgs', 'msg'], 'VisionScanObject')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.result = kwargs.get('result', [])

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.result != other.result:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def result(self):
        """Message field 'result'."""
        return self._result

    @result.setter
    def result(self, value):
        if __debug__:
            from suii_msgs.msg import VisionScanObject
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, VisionScanObject) for v in value) and
                 True), \
                "The 'result' field must be a set or sequence and each value of type 'VisionScanObject'"
        self._result = value


class Metaclass_VisionScan(type):
    """Metaclass of service 'VisionScan'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('suii_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'suii_msgs.srv.VisionScan')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__vision_scan

            from suii_msgs.srv import _vision_scan
            if _vision_scan.Metaclass_VisionScan_Request._TYPE_SUPPORT is None:
                _vision_scan.Metaclass_VisionScan_Request.__import_type_support__()
            if _vision_scan.Metaclass_VisionScan_Response._TYPE_SUPPORT is None:
                _vision_scan.Metaclass_VisionScan_Response.__import_type_support__()


class VisionScan(metaclass=Metaclass_VisionScan):
    from suii_msgs.srv._vision_scan import VisionScan_Request as Request
    from suii_msgs.srv._vision_scan import VisionScan_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
