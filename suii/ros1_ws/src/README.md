README.md for the packages: atwork_commander_client, atwork-commander and suii_communication_ros1

Package: atwork-commander

The atwork commander is a new implementation of the refbox. This refbox is used to generate different tasks that the robot should perform in the competition. https://github.com/robocup-at-work/atwork-commander for more information about the new refbox.

Important to know:

The refbox is created in ros1, so make sure that ros1 is sourced properly. Furthermore, it is important to use multiple terminals, these also need to be sourced.
Usage
For sourcing of the ros1 environment:
``` 
source /opt/ros/noetic/setup.bash
. devel/setup.bash
```

Command for starting the refbox:
```
roscore
```
*open new terminal*
```
roslaunch atwork_commander atwork_commander.launch multimaster:=false
```

For generating a new task:
```
roslaunch atwork_commander generate.launch task:=<task to generate>
```

Normally, the refbox must now wait for the robot to take the information; when running only the refbox, a fake robot can be used for this purpose:
```
roslaunch atwork_commander example_robot.launch
```

For starting with sending of the tasks:
```
roslaunch atwork_commander start.launch
```

With the above command, it would take 3 minutes before the transmission actually starts. In order to skip the three minutes, you must execute another command after the above command:
```
roslaunch atwork_commander forward.launch
```

For stopping the launch file:
```
roslaunch atwork_commander stop.launch
```

Package: atwork_commander_client

The atwork_commander_client is a package that replaces the example robot from the refbox. This program receives all the tasks sent out by the refbox and sends them out one by one to the manager by making use out of a simple statemachine. The manager would make sure that these tasks will be executed.

Important to know

The refbox is created in ros1, so make sure that ros1 is sourced properly. 

Usage

For starting the suii atwork_commander_client:
```
roslaunch atwork_commander_client suii_robot.launch multimaster:=false
```

Package: suii_communication_ros1

The package suii_communication_ros1 contains only one service, the TableGoal service. For this year it was only important to forward the workstations to which the robot had to navigate to suii.
