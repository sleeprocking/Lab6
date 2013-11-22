Lab6
====
##Purpose
This code is a driver for a USAFA DFEC robot run on an MSP430. It allows the robot to move forward, backward, and turn left and right.
##Description of Functions
After the initialization of the driver, which sets the pins and allows for pulse width modulation, are three sub-functions for each wheel: forward, backward, and stop. The combination of these subfunctions allows movement in any 2D direction. The subfunctions take in a value to set the duty cycle of the motors.The functions I created from these subfunctions are move forward, move backward, turn left, and turn right. These functions take in three inputs: speed of the right and left wheels, and the number of delay cycles you want times 10000.This allows the robot to turn at any speed up to its maximum speed and it can travel as far as you want.
##Documentation
I was unsure of how using the various OUTMOD_x settings controlled the movement of the wheels, so I looked at Caleb Zeigler's code to understand how it worked.
