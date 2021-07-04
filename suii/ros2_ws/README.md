README.md for the urg_node package

The urg_node package is used for reading out the lidar sensors. The data is available in RVIZ and can be used for object detection. 
Important to know
To use the urg-node package it is important that you are on the same subnet as the laser. You can check this by running the following command in the terminal:
```
ping <ip address van de lidar>
```

for more information about the urg_node package see https://github.com/ros-drivers/urg_node/tree/foxy-devel 

When you open RVIZ after running the command to read the lidars (see usage) you will not get the results immediately. You have to add the laserscan topic in rviz and change the frame from map to world. If you have done these two steps you will get the results from the lidar. 

Prerequisites:

This package requires the following package to be installed:
•	urg-node

To install the package use the following command: 
```
sudo apt-get install ros-foxy-<package name>
```

Usage:

To start reading the lidar:
```
ros2 run urg_node urg_node_driver --ros-args --params-file </full/path/to>/urg_node_ethernet.yaml
```