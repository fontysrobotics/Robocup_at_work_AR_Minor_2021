## README.md for the urg_node package and Ros1_bridge

## Package: urg_node

The urg_node package is used for reading out the lidar sensors. The data is available in RVIZ and can be used for object detection. 

## Important to know:

To use the urg-node package it is important that you are on the same subnet as the laser. You can check this by running the following command in the terminal:
```
ping <ip address van de lidar>
```

for more information about the urg_node package see https://github.com/ros-drivers/urg_node/tree/foxy-devel 

When you open RVIZ after running the command to read the lidars (see usage) you will not get the results immediately. You have to add the laserscan topic in rviz and change the frame from map to world. If you have done these two steps you will get the results from the lidar. 

## Prerequisites:

This package requires the following package to be installed:
•	urg-node

To install the package use the following command: 
```
sudo apt-get install ros-foxy-<package name>
```

## Usage:

To start reading the lidar:
```
ros2 run urg_node urg_node_driver --ros-args --params-file </full/path/to>/urg_node_ethernet.yaml
```

## Package: ros1_bridge

Because the refbox is written in ros1 and the new code from suii in ros2 it was necessary to use a rosbridge. The rosbridge makes it possible to forward topics/services from ros1 to ros2 or vice versa. This is not possible without a bridge because you are working with two different operating systems 

## Important to know

It is very important to source the rosbridge correctly. You can do this by first sourcing ros1 and then ros2. You can do this with the following commands in the terminal:
```
source /opt/ros/noetic/setup.bash
source/opt/ros/foxy/setup.bash
.  </full/path/to/ros2workspace>/install/setup.bash
```

For more information see https://github.com/ros2/ros1_bridge 

## Usage
Before starting the rosbridge it is important that the ros nodes are able to communicate. This can be achieved by executing this command in the terminal:
```
roscore
```
For starting the rosbridge (after correct sourcing):
```
ros2 run ros1_bridge dynamic_bridge
```
