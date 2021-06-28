import os
from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    ld = LaunchDescription()

    package_directory = get_package_share_directory('suii_bringup')

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
        
#    node=Node(
#        package = 'ros2_tutorials',
#        name = 'your_amazing_node',
#        executable = 'test_yaml_params',
#        parameters = [config]
#    )
    ld.add_action(node)
    return ld
