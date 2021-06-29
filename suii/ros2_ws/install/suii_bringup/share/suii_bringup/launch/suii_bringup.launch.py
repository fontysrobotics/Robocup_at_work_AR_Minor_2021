import launch
from launch.launch_description import LaunchDescription
from launch.substitutions import PathJoinSubstitution, Command, FindExecutable, LaunchConfiguration
from launch_ros.substitutions import FindPackageShare
import launch_ros
import launch.launch_description_sources
import os
from launch.actions import DeclareLaunchArgument
from ament_index_python.packages import get_package_share_directory

def generate_launch_description():
    ld = LaunchDescription()

    package_directory = get_package_share_directory('suii_bringup')
    description_file = "suii_description.urdf.xacro"

    pkg_share = FindPackageShare(package='suii_description').find('suii_description')
    rviz_config_path = os.path.join(pkg_share, 'rviz/display.rviz')

    lidar_package = get_package_share_directory('urg_node')
    lidar_front_config = os.path.join(lidar_package, "launch",'urg_node_ethernet.yaml')
    lidar_back_config = os.path.join(lidar_package, "launch",'urg_node_ethernet_back.yaml')

    robot_description_content = Command(
      [
        PathJoinSubstitution([FindExecutable(name="xacro")]),
        " ",
        PathJoinSubstitution([FindPackageShare("suii_description"), "urdf", description_file]),
      ]
    )
    robot_description = {"robot_description": robot_description_content}

    robot_state_publisher_node = launch_ros.actions.Node(
        package='robot_state_publisher',
        executable='robot_state_publisher',
        parameters=[robot_description]
    )

    joint_state_publisher_node = launch_ros.actions.Node(
        package='joint_state_publisher',
        executable='joint_state_publisher',
        name='joint_state_publisher'
    )

    lidar_front_node = launch_ros.actions.Node(
        package='urg_node',
        executable='urg_node_driver',
        name='lidar_front_node',
        parameters=[lidar_front_config],
        remappings=[("/scan", "/scan_front")]
    )

    lidar_back_node = launch_ros.actions.Node(
        package='urg_node',
        executable='urg_node_driver',
        name='lidar_back_node',
        parameters=[lidar_back_config],
        remappings=[("/scan", "/scan_back")]
    )

    amcl_config = os.path.join(
        package_directory,
        'config',
        'amcl_params.yaml'
        )
    NavFn_config = os.path.join(
        package_directory,
        'config',
        'NavFn_params.yaml',
        )
    Map_Server_config = os.path.join(
        package_directory,
        'config',
        'Map_Server_params.yaml',
        )
    
    waypoint_follower_config = os.path.join(
        package_directory,
        'config',
        'waypoint_follower.yaml',
        )

    global_costmap_config = os.path.join(
        package_directory,
        'config',
        'global_costmap_params.yaml',
        )

    local_costmap_config = os.path.join(
        package_directory,
        'config',
        'local_costmap_params.yaml',
        )

    bt_navigator_config = os.path.join(
        package_directory,
        'config',
        'bt_navigator_params.yaml',
        )

    planner_server_config = os.path.join(
        package_directory,
        'config',
        'planner_server_params.yaml',
        )
        
    rviz_node = launch_ros.actions.Node(
        package='rviz2',
        executable='rviz2',
        name='rviz2',
        arguments=['-d', rviz_config_path]
    )

    nodes_to_start = [
            robot_state_publisher_node,
            joint_state_publisher_node,
            lidar_front_node,
            lidar_back_node,
            rviz_node
    ]
  
    return LaunchDescription(nodes_to_start)
