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
let Workstation = require('./Workstation.js');

//-----------------------------------------------------------

class Task {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.execute_on = null;
      this.arena_start_state = null;
      this.arena_target_state = null;
      this.prep_time = null;
      this.exec_time = null;
      this.type = null;
      this.id = null;
    }
    else {
      if (initObj.hasOwnProperty('execute_on')) {
        this.execute_on = initObj.execute_on
      }
      else {
        this.execute_on = [];
      }
      if (initObj.hasOwnProperty('arena_start_state')) {
        this.arena_start_state = initObj.arena_start_state
      }
      else {
        this.arena_start_state = [];
      }
      if (initObj.hasOwnProperty('arena_target_state')) {
        this.arena_target_state = initObj.arena_target_state
      }
      else {
        this.arena_target_state = [];
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
      if (initObj.hasOwnProperty('type')) {
        this.type = initObj.type
      }
      else {
        this.type = '';
      }
      if (initObj.hasOwnProperty('id')) {
        this.id = initObj.id
      }
      else {
        this.id = 0;
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type Task
    // Serialize message field [execute_on]
    // Serialize the length for message field [execute_on]
    bufferOffset = _serializer.uint32(obj.execute_on.length, buffer, bufferOffset);
    obj.execute_on.forEach((val) => {
      bufferOffset = RobotHeader.serialize(val, buffer, bufferOffset);
    });
    // Serialize message field [arena_start_state]
    // Serialize the length for message field [arena_start_state]
    bufferOffset = _serializer.uint32(obj.arena_start_state.length, buffer, bufferOffset);
    obj.arena_start_state.forEach((val) => {
      bufferOffset = Workstation.serialize(val, buffer, bufferOffset);
    });
    // Serialize message field [arena_target_state]
    // Serialize the length for message field [arena_target_state]
    bufferOffset = _serializer.uint32(obj.arena_target_state.length, buffer, bufferOffset);
    obj.arena_target_state.forEach((val) => {
      bufferOffset = Workstation.serialize(val, buffer, bufferOffset);
    });
    // Serialize message field [prep_time]
    bufferOffset = _serializer.duration(obj.prep_time, buffer, bufferOffset);
    // Serialize message field [exec_time]
    bufferOffset = _serializer.duration(obj.exec_time, buffer, bufferOffset);
    // Serialize message field [type]
    bufferOffset = _serializer.string(obj.type, buffer, bufferOffset);
    // Serialize message field [id]
    bufferOffset = _serializer.uint64(obj.id, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type Task
    let len;
    let data = new Task(null);
    // Deserialize message field [execute_on]
    // Deserialize array length for message field [execute_on]
    len = _deserializer.uint32(buffer, bufferOffset);
    data.execute_on = new Array(len);
    for (let i = 0; i < len; ++i) {
      data.execute_on[i] = RobotHeader.deserialize(buffer, bufferOffset)
    }
    // Deserialize message field [arena_start_state]
    // Deserialize array length for message field [arena_start_state]
    len = _deserializer.uint32(buffer, bufferOffset);
    data.arena_start_state = new Array(len);
    for (let i = 0; i < len; ++i) {
      data.arena_start_state[i] = Workstation.deserialize(buffer, bufferOffset)
    }
    // Deserialize message field [arena_target_state]
    // Deserialize array length for message field [arena_target_state]
    len = _deserializer.uint32(buffer, bufferOffset);
    data.arena_target_state = new Array(len);
    for (let i = 0; i < len; ++i) {
      data.arena_target_state[i] = Workstation.deserialize(buffer, bufferOffset)
    }
    // Deserialize message field [prep_time]
    data.prep_time = _deserializer.duration(buffer, bufferOffset);
    // Deserialize message field [exec_time]
    data.exec_time = _deserializer.duration(buffer, bufferOffset);
    // Deserialize message field [type]
    data.type = _deserializer.string(buffer, bufferOffset);
    // Deserialize message field [id]
    data.id = _deserializer.uint64(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    let length = 0;
    object.execute_on.forEach((val) => {
      length += RobotHeader.getMessageSize(val);
    });
    object.arena_start_state.forEach((val) => {
      length += Workstation.getMessageSize(val);
    });
    object.arena_target_state.forEach((val) => {
      length += Workstation.getMessageSize(val);
    });
    length += _getByteLength(object.type);
    return length + 40;
  }

  static datatype() {
    // Returns string type for a message object
    return 'atwork_commander_msgs/Task';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '23084b379239948be639bf4f943f476b';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
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
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new Task(null);
    if (msg.execute_on !== undefined) {
      resolved.execute_on = new Array(msg.execute_on.length);
      for (let i = 0; i < resolved.execute_on.length; ++i) {
        resolved.execute_on[i] = RobotHeader.Resolve(msg.execute_on[i]);
      }
    }
    else {
      resolved.execute_on = []
    }

    if (msg.arena_start_state !== undefined) {
      resolved.arena_start_state = new Array(msg.arena_start_state.length);
      for (let i = 0; i < resolved.arena_start_state.length; ++i) {
        resolved.arena_start_state[i] = Workstation.Resolve(msg.arena_start_state[i]);
      }
    }
    else {
      resolved.arena_start_state = []
    }

    if (msg.arena_target_state !== undefined) {
      resolved.arena_target_state = new Array(msg.arena_target_state.length);
      for (let i = 0; i < resolved.arena_target_state.length; ++i) {
        resolved.arena_target_state[i] = Workstation.Resolve(msg.arena_target_state[i]);
      }
    }
    else {
      resolved.arena_target_state = []
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

    if (msg.type !== undefined) {
      resolved.type = msg.type;
    }
    else {
      resolved.type = ''
    }

    if (msg.id !== undefined) {
      resolved.id = msg.id;
    }
    else {
      resolved.id = 0
    }

    return resolved;
    }
};

module.exports = Task;
