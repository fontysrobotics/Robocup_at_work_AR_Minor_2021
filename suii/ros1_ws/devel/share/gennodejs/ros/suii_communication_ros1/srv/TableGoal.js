// Auto-generated. Do not edit!

// (in-package suii_communication_ros1.srv)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;

//-----------------------------------------------------------


//-----------------------------------------------------------

class TableGoalRequest {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.table = null;
    }
    else {
      if (initObj.hasOwnProperty('table')) {
        this.table = initObj.table
      }
      else {
        this.table = '';
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type TableGoalRequest
    // Serialize message field [table]
    bufferOffset = _serializer.string(obj.table, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type TableGoalRequest
    let len;
    let data = new TableGoalRequest(null);
    // Deserialize message field [table]
    data.table = _deserializer.string(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    let length = 0;
    length += _getByteLength(object.table);
    return length + 4;
  }

  static datatype() {
    // Returns string type for a service object
    return 'suii_communication_ros1/TableGoalRequest';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return 'b23eaeab3fab1fc0f4aed0e9b11c7ae0';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    string table
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new TableGoalRequest(null);
    if (msg.table !== undefined) {
      resolved.table = msg.table;
    }
    else {
      resolved.table = ''
    }

    return resolved;
    }
};

class TableGoalResponse {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.succes = null;
    }
    else {
      if (initObj.hasOwnProperty('succes')) {
        this.succes = initObj.succes
      }
      else {
        this.succes = false;
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type TableGoalResponse
    // Serialize message field [succes]
    bufferOffset = _serializer.bool(obj.succes, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type TableGoalResponse
    let len;
    let data = new TableGoalResponse(null);
    // Deserialize message field [succes]
    data.succes = _deserializer.bool(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    return 1;
  }

  static datatype() {
    // Returns string type for a service object
    return 'suii_communication_ros1/TableGoalResponse';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '509793171e494962cd366ecf60e100e4';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    bool succes
    
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new TableGoalResponse(null);
    if (msg.succes !== undefined) {
      resolved.succes = msg.succes;
    }
    else {
      resolved.succes = false
    }

    return resolved;
    }
};

module.exports = {
  Request: TableGoalRequest,
  Response: TableGoalResponse,
  md5sum() { return '65abe4d9d82c411cf962b85d02507ffe'; },
  datatype() { return 'suii_communication_ros1/TableGoal'; }
};
