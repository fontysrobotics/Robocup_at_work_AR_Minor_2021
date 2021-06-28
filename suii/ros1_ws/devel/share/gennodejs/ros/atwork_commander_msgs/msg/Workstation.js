// Auto-generated. Do not edit!

// (in-package atwork_commander_msgs.msg)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;
let Object = require('./Object.js');

//-----------------------------------------------------------

class Workstation {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.objects = null;
      this.workstation_name = null;
    }
    else {
      if (initObj.hasOwnProperty('objects')) {
        this.objects = initObj.objects
      }
      else {
        this.objects = [];
      }
      if (initObj.hasOwnProperty('workstation_name')) {
        this.workstation_name = initObj.workstation_name
      }
      else {
        this.workstation_name = '';
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type Workstation
    // Serialize message field [objects]
    // Serialize the length for message field [objects]
    bufferOffset = _serializer.uint32(obj.objects.length, buffer, bufferOffset);
    obj.objects.forEach((val) => {
      bufferOffset = Object.serialize(val, buffer, bufferOffset);
    });
    // Serialize message field [workstation_name]
    bufferOffset = _serializer.string(obj.workstation_name, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type Workstation
    let len;
    let data = new Workstation(null);
    // Deserialize message field [objects]
    // Deserialize array length for message field [objects]
    len = _deserializer.uint32(buffer, bufferOffset);
    data.objects = new Array(len);
    for (let i = 0; i < len; ++i) {
      data.objects[i] = Object.deserialize(buffer, bufferOffset)
    }
    // Deserialize message field [workstation_name]
    data.workstation_name = _deserializer.string(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    let length = 0;
    length += 5 * object.objects.length;
    length += _getByteLength(object.workstation_name);
    return length + 8;
  }

  static datatype() {
    // Returns string type for a message object
    return 'atwork_commander_msgs/Workstation';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return 'fa7bb425059d740fb00830f54beccbea';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
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
    const resolved = new Workstation(null);
    if (msg.objects !== undefined) {
      resolved.objects = new Array(msg.objects.length);
      for (let i = 0; i < resolved.objects.length; ++i) {
        resolved.objects[i] = Object.Resolve(msg.objects[i]);
      }
    }
    else {
      resolved.objects = []
    }

    if (msg.workstation_name !== undefined) {
      resolved.workstation_name = msg.workstation_name;
    }
    else {
      resolved.workstation_name = ''
    }

    return resolved;
    }
};

module.exports = Workstation;
