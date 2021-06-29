// Auto-generated. Do not edit!

// (in-package atwork_commander_msgs.msg)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;
let RobotHeader = require('./RobotHeader.js');
let Transport = require('./Transport.js');

//-----------------------------------------------------------

class ObjectTask {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.execute_on = null;
      this.subtasks = null;
      this.prep_time = null;
      this.exec_time = null;
    }
    else {
      if (initObj.hasOwnProperty('execute_on')) {
        this.execute_on = initObj.execute_on
      }
      else {
        this.execute_on = [];
      }
      if (initObj.hasOwnProperty('subtasks')) {
        this.subtasks = initObj.subtasks
      }
      else {
        this.subtasks = [];
      }
      if (initObj.hasOwnProperty('prep_time')) {
        this.prep_time = initObj.prep_time
      }
      else {
        this.prep_time = {secs: 0, nsecs: 0};
      }
      if (initObj.hasOwnProperty('exec_time')) {
        this.exec_time = initObj.exec_time
      }
      else {
        this.exec_time = {secs: 0, nsecs: 0};
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type ObjectTask
    // Serialize message field [execute_on]
    // Serialize the length for message field [execute_on]
    bufferOffset = _serializer.uint32(obj.execute_on.length, buffer, bufferOffset);
    obj.execute_on.forEach((val) => {
      bufferOffset = RobotHeader.serialize(val, buffer, bufferOffset);
    });
    // Serialize message field [subtasks]
    // Serialize the length for message field [subtasks]
    bufferOffset = _serializer.uint32(obj.subtasks.length, buffer, bufferOffset);
    obj.subtasks.forEach((val) => {
      bufferOffset = Transport.serialize(val, buffer, bufferOffset);
    });
    // Serialize message field [prep_time]
    bufferOffset = _serializer.duration(obj.prep_time, buffer, bufferOffset);
    // Serialize message field [exec_time]
    bufferOffset = _serializer.duration(obj.exec_time, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type ObjectTask
    let len;
    let data = new ObjectTask(null);
    // Deserialize message field [execute_on]
    // Deserialize array length for message field [execute_on]
    len = _deserializer.uint32(buffer, bufferOffset);
    data.execute_on = new Array(len);
    for (let i = 0; i < len; ++i) {
      data.execute_on[i] = RobotHeader.deserialize(buffer, bufferOffset)
    }
    // Deserialize message field [subtasks]
    // Deserialize array length for message field [subtasks]
    len = _deserializer.uint32(buffer, bufferOffset);
    data.subtasks = new Array(len);
    for (let i = 0; i < len; ++i) {
      data.subtasks[i] = Transport.deserialize(buffer, bufferOffset)
    }
    // Deserialize message field [prep_time]
    data.prep_time = _deserializer.duration(buffer, bufferOffset);
    // Deserialize message field [exec_time]
    data.exec_time = _deserializer.duration(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    let length = 0;
    object.execute_on.forEach((val) => {
      length += RobotHeader.getMessageSize(val);
    });
    object.subtasks.forEach((val) => {
      length += Transport.getMessageSize(val);
    });
    return length + 24;
  }

  static datatype() {
    // Returns string type for a message object
    return 'atwork_commander_msgs/ObjectTask';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '110802c2321e7e0a5f49840a38f9b422';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    RobotHeader[] execute_on
    
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
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new ObjectTask(null);
    if (msg.execute_on !== undefined) {
      resolved.execute_on = new Array(msg.execute_on.length);
      for (let i = 0; i < resolved.execute_on.length; ++i) {
        resolved.execute_on[i] = RobotHeader.Resolve(msg.execute_on[i]);
      }
    }
    else {
      resolved.execute_on = []
    }

    if (msg.subtasks !== undefined) {
      resolved.subtasks = new Array(msg.subtasks.length);
      for (let i = 0; i < resolved.subtasks.length; ++i) {
        resolved.subtasks[i] = Transport.Resolve(msg.subtasks[i]);
      }
    }
    else {
      resolved.subtasks = []
    }

    if (msg.prep_time !== undefined) {
      resolved.prep_time = msg.prep_time;
    }
    else {
      resolved.prep_time = {secs: 0, nsecs: 0}
    }

    if (msg.exec_time !== undefined) {
      resolved.exec_time = msg.exec_time;
    }
    else {
      resolved.exec_time = {secs: 0, nsecs: 0}
    }

    return resolved;
    }
};

module.exports = ObjectTask;
