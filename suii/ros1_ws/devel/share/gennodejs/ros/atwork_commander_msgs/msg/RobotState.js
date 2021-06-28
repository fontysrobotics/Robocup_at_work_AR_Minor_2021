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
let Object = require('./Object.js');
let Workstation = require('./Workstation.js');
let nav_msgs = _finder('nav_msgs');
let geometry_msgs = _finder('geometry_msgs');

//-----------------------------------------------------------

class RobotState {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.sender = null;
      this.pose = null;
      this.path = null;
      this.objects_on_robot = null;
      this.current_arena_state = null;
    }
    else {
      if (initObj.hasOwnProperty('sender')) {
        this.sender = initObj.sender
      }
      else {
        this.sender = new RobotHeader();
      }
      if (initObj.hasOwnProperty('pose')) {
        this.pose = initObj.pose
      }
      else {
        this.pose = new geometry_msgs.msg.Pose2D();
      }
      if (initObj.hasOwnProperty('path')) {
        this.path = initObj.path
      }
      else {
        this.path = new nav_msgs.msg.Path();
      }
      if (initObj.hasOwnProperty('objects_on_robot')) {
        this.objects_on_robot = initObj.objects_on_robot
      }
      else {
        this.objects_on_robot = new Array(3).fill(new Object());
      }
      if (initObj.hasOwnProperty('current_arena_state')) {
        this.current_arena_state = initObj.current_arena_state
      }
      else {
        this.current_arena_state = [];
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type RobotState
    // Serialize message field [sender]
    bufferOffset = RobotHeader.serialize(obj.sender, buffer, bufferOffset);
    // Serialize message field [pose]
    bufferOffset = geometry_msgs.msg.Pose2D.serialize(obj.pose, buffer, bufferOffset);
    // Serialize message field [path]
    bufferOffset = nav_msgs.msg.Path.serialize(obj.path, buffer, bufferOffset);
    // Check that the constant length array field [objects_on_robot] has the right length
    if (obj.objects_on_robot.length !== 3) {
      throw new Error('Unable to serialize array field objects_on_robot - length must be 3')
    }
    // Serialize message field [objects_on_robot]
    obj.objects_on_robot.forEach((val) => {
      bufferOffset = Object.serialize(val, buffer, bufferOffset);
    });
    // Serialize message field [current_arena_state]
    // Serialize the length for message field [current_arena_state]
    bufferOffset = _serializer.uint32(obj.current_arena_state.length, buffer, bufferOffset);
    obj.current_arena_state.forEach((val) => {
      bufferOffset = Workstation.serialize(val, buffer, bufferOffset);
    });
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type RobotState
    let len;
    let data = new RobotState(null);
    // Deserialize message field [sender]
    data.sender = RobotHeader.deserialize(buffer, bufferOffset);
    // Deserialize message field [pose]
    data.pose = geometry_msgs.msg.Pose2D.deserialize(buffer, bufferOffset);
    // Deserialize message field [path]
    data.path = nav_msgs.msg.Path.deserialize(buffer, bufferOffset);
    // Deserialize message field [objects_on_robot]
    len = 3;
    data.objects_on_robot = new Array(len);
    for (let i = 0; i < len; ++i) {
      data.objects_on_robot[i] = Object.deserialize(buffer, bufferOffset)
    }
    // Deserialize message field [current_arena_state]
    // Deserialize array length for message field [current_arena_state]
    len = _deserializer.uint32(buffer, bufferOffset);
    data.current_arena_state = new Array(len);
    for (let i = 0; i < len; ++i) {
      data.current_arena_state[i] = Workstation.deserialize(buffer, bufferOffset)
    }
    return data;
  }

  static getMessageSize(object) {
    let length = 0;
    length += RobotHeader.getMessageSize(object.sender);
    length += nav_msgs.msg.Path.getMessageSize(object.path);
    object.current_arena_state.forEach((val) => {
      length += Workstation.getMessageSize(val);
    });
    return length + 43;
  }

  static datatype() {
    // Returns string type for a message object
    return 'atwork_commander_msgs/RobotState';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return 'dd883dda0c5739d8cae16aa5923663e5';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    # RobotState.msg
    
    RobotHeader sender
    
    geometry_msgs/Pose2D pose
    nav_msgs/Path path
    
    Object[3] objects_on_robot
    Workstation[] current_arena_state
    
    
    
    # additional content for season 2021 or later (use markers?)
    # TODO: datatype for barriertape
    # TODO: datatype for obstacles
    
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
    MSG: geometry_msgs/Pose2D
    # Deprecated
    # Please use the full 3D pose.
    
    # In general our recommendation is to use a full 3D representation of everything and for 2D specific applications make the appropriate projections into the plane for their calculations but optimally will preserve the 3D information during processing.
    
    # If we have parallel copies of 2D datatypes every UI and other pipeline will end up needing to have dual interfaces to plot everything. And you will end up with not being able to use 3D tools for 2D use cases even if they're completely valid, as you'd have to reimplement it with different inputs and outputs. It's not particularly hard to plot the 2D pose or compute the yaw error for the Pose message and there are already tools and libraries that can do this for you.
    
    
    # This expresses a position and orientation on a 2D manifold.
    
    float64 x
    float64 y
    float64 theta
    
    ================================================================================
    MSG: nav_msgs/Path
    #An array of poses that represents a Path for a robot to follow
    Header header
    geometry_msgs/PoseStamped[] poses
    
    ================================================================================
    MSG: geometry_msgs/PoseStamped
    # A Pose with reference coordinate frame and timestamp
    Header header
    Pose pose
    
    ================================================================================
    MSG: geometry_msgs/Pose
    # A representation of pose in free space, composed of position and orientation. 
    Point position
    Quaternion orientation
    
    ================================================================================
    MSG: geometry_msgs/Point
    # This contains the position of a point in free space
    float64 x
    float64 y
    float64 z
    
    ================================================================================
    MSG: geometry_msgs/Quaternion
    # This represents an orientation in free space in quaternion form.
    
    float64 x
    float64 y
    float64 z
    float64 w
    
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
    
    ================================================================================
    MSG: atwork_commander_msgs/Workstation
    # workstation.msg
    
     Object[] objects
    
    # either a workstation name or 'robot'
    # (for end of RTT or start of PPT)
    string workstation_name
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new RobotState(null);
    if (msg.sender !== undefined) {
      resolved.sender = RobotHeader.Resolve(msg.sender)
    }
    else {
      resolved.sender = new RobotHeader()
    }

    if (msg.pose !== undefined) {
      resolved.pose = geometry_msgs.msg.Pose2D.Resolve(msg.pose)
    }
    else {
      resolved.pose = new geometry_msgs.msg.Pose2D()
    }

    if (msg.path !== undefined) {
      resolved.path = nav_msgs.msg.Path.Resolve(msg.path)
    }
    else {
      resolved.path = new nav_msgs.msg.Path()
    }

    if (msg.objects_on_robot !== undefined) {
      resolved.objects_on_robot = new Array(3)
      for (let i = 0; i < resolved.objects_on_robot.length; ++i) {
        if (msg.objects_on_robot.length > i) {
          resolved.objects_on_robot[i] = Object.Resolve(msg.objects_on_robot[i]);
        }
        else {
          resolved.objects_on_robot[i] = new Object();
        }
      }
    }
    else {
      resolved.objects_on_robot = new Array(3).fill(new Object())
    }

    if (msg.current_arena_state !== undefined) {
      resolved.current_arena_state = new Array(msg.current_arena_state.length);
      for (let i = 0; i < resolved.current_arena_state.length; ++i) {
        resolved.current_arena_state[i] = Workstation.Resolve(msg.current_arena_state[i]);
      }
    }
    else {
      resolved.current_arena_state = []
    }

    return resolved;
    }
};

module.exports = RobotState;
