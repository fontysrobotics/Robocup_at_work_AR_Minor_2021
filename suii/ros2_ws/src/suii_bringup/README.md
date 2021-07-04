The files that are needed for starting up suii are placed in this folder. These files are, launch files and configuration files. The launch files are used to start up multiple nodes at once and the configuration files are mainly for the Navigation2 package.

Launch files:

For launching suii two launch files are used, nav2_core.launch.py is used for launching the nav2 nodes and the lidar sensors. The slam_launch.launch.py is used for launching the slam node.

Important to know:

Nav2_core.launch.py is the launch file that starts up the navigation2 stack. To use the launch file open a terminal, source ros2 and source the worskpace. Then use ros2 launch to select the launch file. For the exact commands see below:


```
source /opt/ros/foxy/setup.bash
```
```
. /home/suii/colcon_ws/ros2_ws/install/setup.bash
```
```
ros2 launch suii_bringup nav2_core.launch.py map:=’</enter/full/path/to /map.yaml>’
```
Where text is in <> place your own commands and remove <>.

Configuration files:

All the configuration files are used for nav2. These configurations make sure that nav2 is setup correctly for the dimensions of suii and that the lidars will work with the local costmap.

