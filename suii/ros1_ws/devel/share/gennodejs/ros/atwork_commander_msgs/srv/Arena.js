// Auto-generated. Do not edit!

// (in-package atwork_commander_msgs.srv)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;
let nav_msgs = _finder('nav_msgs');
let geometry_msgs = _finder('geometry_msgs');

//-----------------------------------------------------------


//-----------------------------------------------------------

class ArenaRequest {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.map = null;
      this.table = null;
      this.waypoint = null;
    }
    else {
      if (initObj.hasOwnProperty('map')) {
        this.map = initObj.map
      }
      else {
        this.map = new nav_msgs.msg.OccupancyGrid();
      }
      if (initObj.hasOwnProperty('table')) {
        this.table = initObj.table
      }
      else {
        this.table = [];
      }
      if (initObj.hasOwnProperty('waypoint')) {
        this.waypoint = initObj.waypoint
      }
      else {
        this.waypoint = [];
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type ArenaRequest
    // Serialize message field [map]
    bufferOffset = nav_msgs.msg.OccupancyGrid.serialize(obj.map, buffer, bufferOffset);
    // Serialize message field [table]
    // Serialize the length for message field [table]
    bufferOffset = _serializer.uint32(obj.table.length, buffer, bufferOffset);
    obj.table.forEach((val) => {
      bufferOffset = geometry_msgs.msg.PolygonStamped.serialize(val, buffer, bufferOffset);
    });
    // Serialize message field [waypoint]
    // Serialize the length for message field [waypoint]
    bufferOffset = _serializer.uint32(obj.waypoint.length, buffer, bufferOffset);
    obj.waypoint.forEach((val) => {
      bufferOffset = geometry_msgs.msg.PointStamped.serialize(val, buffer, bufferOffset);
    });
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type ArenaRequest
    let len;
    let data = new ArenaRequest(null);
    // Deserialize message field [map]
    data.map = nav_msgs.msg.OccupancyGrid.deserialize(buffer, bufferOffset);
    // Deserialize message field [table]
    // Deserialize array length for message field [table]
    len = _deserializer.uint32(buffer, bufferOffset);
    data.table = new Array(len);
    for (let i = 0; i < len; ++i) {
      data.table[i] = geometry_msgs.msg.PolygonStamped.deserialize(buffer, bufferOffset)
    }
    // Deserialize message field [waypoint]
    // Deserialize array length for message field [waypoint]
    len = _deserializer.uint32(buffer, bufferOffset);
    data.waypoint = new Array(len);
    for (let i = 0; i < len; ++i) {
      data.waypoint[i] = geometry_msgs.msg.PointStamped.deserialize(buffer, bufferOffset)
    }
    return data;
  }

  static getMessageSize(object) {
    let length = 0;
    length += nav_msgs.msg.OccupancyGrid.getMessageSize(object.map);
    object.table.forEach((val) => {
      length += geometry_msgs.msg.PolygonStamped.getMessageSize(val);
    });
    object.waypoint.forEach((val) => {
      length += geometry_msgs.msg.PointStamped.getMessageSize(val);
    });
    return length + 8;
  }

  static datatype() {
    // Returns string type for a service object
    return 'atwork_commander_msgs/ArenaRequest';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '7e66b1e503b6583890f0a58c451d85ab';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    # Arena.srv
    
    ### request ###
    
    # East-North-Up --> positive x points to east
    nav_msgs/OccupancyGrid map
    
    # header.frame contains the name of the table / waypoint
    geometry_msgs/PolygonStamped[] table
    geometry_msgs/PointStamped[] waypoint
    
    
    ================================================================================
    MSG: nav_msgs/OccupancyGrid
    # This represents a 2-D grid map, in which each cell represents the probability of
    # occupancy.
    
    Header header 
    
    #MetaData for the map
    MapMetaData info
    
    # The map data, in row-major order, starting with (0,0).  Occupancy
    # probabilities are in the range [0,100].  Unknown is -1.
    int8[] data
    
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
    MSG: nav_msgs/MapMetaData
    # This hold basic information about the characterists of the OccupancyGrid
    
    # The time at which the map was loaded
    time map_load_time
    # The map resolution [m/cell]
    float32 resolution
    # Map width [cells]
    uint32 width
    # Map height [cells]
    uint32 height
    # The origin of the map [m, m, rad].  This is the real-world pose of the
    # cell (0,0) in the map.
    geometry_msgs/Pose origin
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
    MSG: geometry_msgs/PolygonStamped
    # This represents a Polygon with reference coordinate frame and timestamp
    Header header
    Polygon polygon
    
    ================================================================================
    MSG: geometry_msgs/Polygon
    #A specification of a polygon where the first and last points are assumed to be connected
    Point32[] points
    
    ================================================================================
    MSG: geometry_msgs/Point32
    # This contains the position of a point in free space(with 32 bits of precision).
    # It is recommeded to use Point wherever possible instead of Point32.  
    # 
    # This recommendation is to promote interoperability.  
    #
    # This message is designed to take up less space when sending
    # lots of points at once, as in the case of a PointCloud.  
    
    float32 x
    float32 y
    float32 z
    ================================================================================
    MSG: geometry_msgs/PointStamped
    # This represents a Point with reference coordinate frame and timestamp
    Header header
    Point point
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new ArenaRequest(null);
    if (msg.map !== undefined) {
      resolved.map = nav_msgs.msg.OccupancyGrid.Resolve(msg.map)
    }
    else {
      resolved.map = new nav_msgs.msg.OccupancyGrid()
    }

    if (msg.table !== undefined) {
      resolved.table = new Array(msg.table.length);
      for (let i = 0; i < resolved.table.length; ++i) {
        resolved.table[i] = geometry_msgs.msg.PolygonStamped.Resolve(msg.table[i]);
      }
    }
    else {
      resolved.table = []
    }

    if (msg.waypoint !== undefined) {
      resolved.waypoint = new Array(msg.waypoint.length);
      for (let i = 0; i < resolved.waypoint.length; ++i) {
        resolved.waypoint[i] = geometry_msgs.msg.PointStamped.Resolve(msg.waypoint[i]);
      }
    }
    else {
      resolved.waypoint = []
    }

    return resolved;
    }
};

class ArenaResponse {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
    }
    else {
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type ArenaResponse
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type ArenaResponse
    let len;
    let data = new ArenaResponse(null);
    return data;
  }

  static getMessageSize(object) {
    return 0;
  }

  static datatype() {
    // Returns string type for a service object
    return 'atwork_commander_msgs/ArenaResponse';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return 'd41d8cd98f00b204e9800998ecf8427e';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    
    ### response ###
    
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new ArenaResponse(null);
    return resolved;
    }
};

module.exports = {
  Request: ArenaRequest,
  Response: ArenaResponse,
  md5sum() { return '7e66b1e503b6583890f0a58c451d85ab'; },
  datatype() { return 'atwork_commander_msgs/Arena'; }
};
