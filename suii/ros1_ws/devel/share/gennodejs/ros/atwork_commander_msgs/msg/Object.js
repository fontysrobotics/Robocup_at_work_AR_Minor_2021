// Auto-generated. Do not edit!

// (in-package atwork_commander_msgs.msg)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;

//-----------------------------------------------------------

class Object {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.object = null;
      this.target = null;
      this.decoy = null;
    }
    else {
      if (initObj.hasOwnProperty('object')) {
        this.object = initObj.object
      }
      else {
        this.object = 0;
      }
      if (initObj.hasOwnProperty('target')) {
        this.target = initObj.target
      }
      else {
        this.target = 0;
      }
      if (initObj.hasOwnProperty('decoy')) {
        this.decoy = initObj.decoy
      }
      else {
        this.decoy = false;
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type Object
    // Serialize message field [object]
    bufferOffset = _serializer.uint16(obj.object, buffer, bufferOffset);
    // Serialize message field [target]
    bufferOffset = _serializer.uint16(obj.target, buffer, bufferOffset);
    // Serialize message field [decoy]
    bufferOffset = _serializer.bool(obj.decoy, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type Object
    let len;
    let data = new Object(null);
    // Deserialize message field [object]
    data.object = _deserializer.uint16(buffer, bufferOffset);
    // Deserialize message field [target]
    data.target = _deserializer.uint16(buffer, bufferOffset);
    // Deserialize message field [decoy]
    data.decoy = _deserializer.bool(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    return 5;
  }

  static datatype() {
    // Returns string type for a message object
    return 'atwork_commander_msgs/Object';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '3ffc2473afeb55517725b66d59f15dbb';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
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
    const resolved = new Object(null);
    if (msg.object !== undefined) {
      resolved.object = msg.object;
    }
    else {
      resolved.object = 0
    }

    if (msg.target !== undefined) {
      resolved.target = msg.target;
    }
    else {
      resolved.target = 0
    }

    if (msg.decoy !== undefined) {
      resolved.decoy = msg.decoy;
    }
    else {
      resolved.decoy = false
    }

    return resolved;
    }
};

// Constants for message
Object.Constants = {
  EMPTY: 0,
  ATWORK_START: 11,
  F20_20_B: 11,
  F20_20_G: 12,
  S40_40_B: 13,
  S40_40_G: 14,
  M20_100: 15,
  M20: 16,
  M30: 17,
  R20: 18,
  ATWORK_END: 19,
  ROCKIN_START: 21,
  BEARING_BOX: 21,
  BEARING: 22,
  AXIS: 23,
  DISTANCE_TUBE: 24,
  MOTOR: 25,
  ROCKIN_END: 26,
  CONTAINER_START: 31,
  CONTAINER_RED: 31,
  CONTAINER_BLUE: 32,
  CONTAINER_END: 33,
  CAVITY_START: 41,
  F20_20_H: 41,
  F20_20_V: 42,
  F20_20_F: 43,
  S40_40_H: 44,
  S40_40_V: 45,
  S40_40_F: 46,
  M20_H: 47,
  M20_V: 48,
  M20_F: 49,
  M20_100_H: 50,
  M20_100_V: 51,
  M20_100_F: 52,
  M30_H: 53,
  M30_V: 54,
  M30_F: 55,
  R20_H: 56,
  R20_V: 57,
  R20_F: 58,
  CAVITY_END: 59,
}

module.exports = Object;
