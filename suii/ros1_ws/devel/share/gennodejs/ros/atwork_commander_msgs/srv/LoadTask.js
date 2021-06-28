// Auto-generated. Do not edit!

// (in-package atwork_commander_msgs.srv)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;
let Task = require('../msg/Task.js');

//-----------------------------------------------------------


//-----------------------------------------------------------

class LoadTaskRequest {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.task = null;
    }
    else {
      if (initObj.hasOwnProperty('task')) {
        this.task = initObj.task
      }
      else {
        this.task = new Task();
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type LoadTaskRequest
    // Serialize message field [task]
    bufferOffset = Task.serialize(obj.task, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type LoadTaskRequest
    let len;
    let data = new LoadTaskRequest(null);
    // Deserialize message field [task]
    data.task = Task.deserialize(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    let length = 0;
    length += Task.getMessageSize(object.task);
    return length;
  }

  static datatype() {
    // Returns string type for a service object
    return 'atwork_commander_msgs/LoadTaskRequest';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '320ae3adc870aff0e94ed6fe1487ffbf';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    Task task
    
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
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new LoadTaskRequest(null);
    if (msg.task !== undefined) {
      resolved.task = Task.Resolve(msg.task)
    }
    else {
      resolved.task = new Task()
    }

    return resolved;
    }
};

class LoadTaskResponse {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.error = null;
    }
    else {
      if (initObj.hasOwnProperty('error')) {
        this.error = initObj.error
      }
      else {
        this.error = '';
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type LoadTaskResponse
    // Serialize message field [error]
    bufferOffset = _serializer.string(obj.error, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type LoadTaskResponse
    let len;
    let data = new LoadTaskResponse(null);
    // Deserialize message field [error]
    data.error = _deserializer.string(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    let length = 0;
    length += _getByteLength(object.error);
    return length + 4;
  }

  static datatype() {
    // Returns string type for a service object
    return 'atwork_commander_msgs/LoadTaskResponse';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return 'eca8b96616c32aacf1be8bbf14c70eba';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    string error
    
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new LoadTaskResponse(null);
    if (msg.error !== undefined) {
      resolved.error = msg.error;
    }
    else {
      resolved.error = ''
    }

    return resolved;
    }
};

module.exports = {
  Request: LoadTaskRequest,
  Response: LoadTaskResponse,
  md5sum() { return 'f94a92de0a9d926d38fa9af9eb8b4091'; },
  datatype() { return 'atwork_commander_msgs/LoadTask'; }
};
