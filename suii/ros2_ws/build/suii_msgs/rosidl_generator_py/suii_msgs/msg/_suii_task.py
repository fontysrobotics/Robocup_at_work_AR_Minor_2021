# generated from rosidl_generator_py/resource/_idl.py.em
# with input from suii_msgs:msg/SuiiTask.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SuiiTask(type):
    """Metaclass of message 'SuiiTask'."""

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
                'suii_msgs.msg.SuiiTask')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__suii_task
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__suii_task
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__suii_task
            cls._TYPE_SUPPORT = module.type_support_msg__msg__suii_task
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__suii_task

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SuiiTask(metaclass=Metaclass_SuiiTask):
    """Message class 'SuiiTask'."""

    __slots__ = [
        '_action',
        '_source',
        '_destination',
        '_object',
        '_container',
        '_status',
        '_error_code',
        '_orientation',
    ]

    _fields_and_field_types = {
        'action': 'int16',
        'source': 'int16',
        'destination': 'int16',
        'object': 'int16',
        'container': 'int16',
        'status': 'int16',
        'error_code': 'int16',
        'orientation': 'int16',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.action = kwargs.get('action', int())
        self.source = kwargs.get('source', int())
        self.destination = kwargs.get('destination', int())
        self.object = kwargs.get('object', int())
        self.container = kwargs.get('container', int())
        self.status = kwargs.get('status', int())
        self.error_code = kwargs.get('error_code', int())
        self.orientation = kwargs.get('orientation', int())

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
        if self.action != other.action:
            return False
        if self.source != other.source:
            return False
        if self.destination != other.destination:
            return False
        if self.object != other.object:
            return False
        if self.container != other.container:
            return False
        if self.status != other.status:
            return False
        if self.error_code != other.error_code:
            return False
        if self.orientation != other.orientation:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def action(self):
        """Message field 'action'."""
        return self._action

    @action.setter
    def action(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'action' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'action' field must be an integer in [-32768, 32767]"
        self._action = value

    @property
    def source(self):
        """Message field 'source'."""
        return self._source

    @source.setter
    def source(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'source' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'source' field must be an integer in [-32768, 32767]"
        self._source = value

    @property
    def destination(self):
        """Message field 'destination'."""
        return self._destination

    @destination.setter
    def destination(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'destination' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'destination' field must be an integer in [-32768, 32767]"
        self._destination = value

    @property  # noqa: A003
    def object(self):  # noqa: A003
        """Message field 'object'."""
        return self._object

    @object.setter  # noqa: A003
    def object(self, value):  # noqa: A003
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'object' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'object' field must be an integer in [-32768, 32767]"
        self._object = value

    @property
    def container(self):
        """Message field 'container'."""
        return self._container

    @container.setter
    def container(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'container' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'container' field must be an integer in [-32768, 32767]"
        self._container = value

    @property
    def status(self):
        """Message field 'status'."""
        return self._status

    @status.setter
    def status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'status' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'status' field must be an integer in [-32768, 32767]"
        self._status = value

    @property
    def error_code(self):
        """Message field 'error_code'."""
        return self._error_code

    @error_code.setter
    def error_code(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'error_code' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'error_code' field must be an integer in [-32768, 32767]"
        self._error_code = value

    @property
    def orientation(self):
        """Message field 'orientation'."""
        return self._orientation

    @orientation.setter
    def orientation(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'orientation' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'orientation' field must be an integer in [-32768, 32767]"
        self._orientation = value
