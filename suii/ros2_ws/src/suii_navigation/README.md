The package suii_navigation contains the code that’s responsible for the navigation, the file is called manager.py, it also contains the code that’s used for controlling the motors based on an input speed. 

Important to know:

To use the motor controller you will have to do the following:

*Open a new terminal*
```
source /opt/ros/foxy/setup.bash
python3 </full/path/to/Motors.py>
```

To run the navigation manager you will have to do the following:

*Open a new terminal*
```
source /opt/ros/foxy/setup.bash
. </full/path/to/workspace>/install/setup.bash
python3 </full/path/to/manager.py>
```