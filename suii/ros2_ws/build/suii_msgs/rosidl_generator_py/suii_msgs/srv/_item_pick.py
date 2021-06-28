# generated from rosidl_generator_py/resource/_idl.py.em
# with input from suii_msgs:srv/ItemPick.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ItemPick_Request(type):
    """Metaclass of message 'ItemPick_Request'."""

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
                'suii_msgs.srv.ItemPick_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__item_pick__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__item_pick__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__item_pick__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__item_pick__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__item_pick__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ItemPick_Request(metaclass=Metaclass_ItemPick_Request):
    """Message class 'ItemPick_Request'."""

    __slots__ = [
        '_itemid',
        '_onrobot',
    ]

    _fields_and_field_types = {
        'itemid': 'uint16',
        'onrobot': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.itemid = kwargs.get('itemid', int())
        self.onrobot = kwargs.get('onrobot', bool())

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
        if self.itemid != other.itemid:
            return False
        if self.onrobot != other.onrobot:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def itemid(self):
        """Message field 'itemid'."""
        return self._itemid

    @itemid.setter
    def itemid(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'itemid' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'itemid' field must be an unsigned integer in [0, 65535]"
        self._itemid = value

    @property
    def onrobot(self):
        """Message field 'onrobot'."""
        return self._onrobot

    @onrobot.setter
    def onrobot(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'onrobot' field must be of type 'bool'"
        self._onrobot = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_ItemPick_Response(type):
    """Metaclass of message 'ItemPick_Response'."""

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
                'suii_msgs.srv.ItemPick_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__item_pick__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__item_pick__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__item_pick__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__item_pick__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__item_pick__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ItemPick_Response(metaclass=Metaclass_ItemPick_Response):
    """Message class 'ItemPick_Response'."""

    __slots__ = [
        '_sucess',
        '_error',
    ]

    _fields_and_field_types = {
        'sucess': 'boolean',
        'error': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.sucess = kwargs.get('sucess', bool())
        self.error = kwargs.get('error', int())

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
        if self.sucess != other.sucess:
            return False
        if self.error != other.error:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def sucess(self):
        """Message field 'sucess'."""
        return self._sucess

    @sucess.setter
    def sucess(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'sucess' field must be of type 'bool'"
        self._sucess = value

    @property
    def error(self):
        """Message field 'error'."""
        return self._error

    @error.setter
    def error(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'error' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'error' field must be an unsigned integer in [0, 255]"
        self._error = value


class Metaclass_ItemPick(type):
    """Metaclass of service 'ItemPick'."""

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
                'suii_msgs.srv.ItemPick')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__item_pick

            from suii_msgs.srv import _item_pick
            if _item_pick.Metaclass_ItemPick_Request._TYPE_SUPPORT is None:
                _item_pick.Metaclass_ItemPick_Request.__import_type_support__()
            if _item_pick.Metaclass_ItemPick_Response._TYPE_SUPPORT is None:
                _item_pick.Metaclass_ItemPick_Response.__import_type_support__()


class ItemPick(metaclass=Metaclass_ItemPick):
    from suii_msgs.srv._item_pick import ItemPick_Request as Request
    from suii_msgs.srv._item_pick import ItemPick_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
