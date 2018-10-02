# Paper Puppets

*A lab report by Ben Hwang*

## In this Report

To submit your lab, clone [this repository](https://github.com/FAR-Lab/IDD-Fa18-Lab4). You'll need to describe your design, include a video of your paper display in operation, and upload any code you wrote to make it move.

## Part A. Actuating DC motors

**Link to a video of your virbation motor**

[Vibrating Motor](https://youtu.be/ZFLcpA8GNGM)

## Part B. Actuating Servo motors

### Part 1. Connect the Servo to your breadboard

**a. Which color wires correspond to power, ground and signal?**

Power is the red wire, ground is brown, and signal is orange.

### Part 2. Connect the Servo to your Arduino

**a. Which Arduino pin should the signal line of the servo be attached to?**

Pin 9.

**b. What aspects of the Servo code control angle or speed?**

```
for (pos = 180; pos >= 0; pos -= 1) { 
    myservo.write(pos);              
    delay(15);                      
```

The for loop parameters specify the angle at which the motor rotates. The delay specifies how long it takes for it to register the actions and therefore the speed of changing angles. 

## Part C. Integrating input and output

**Include a photo/movie of your raw circuit in action.**

[Potentiometer Controlling Servo](https://youtu.be/En7ynrroetY)

[Code](https://github.com/bhwan1118/IDD-Fa18-Lab4/blob/master/PotentioServo.ino)

## Part D. Paper puppet

**a. Make a video of your proto puppet.**

[Proto Puppet](https://youtu.be/NBUOnwOXA-g)

## Part E. Make it your own

**a. Make a video of your final design.**

For context, I used an Ambient Sensor attached to my trash can to register whenever I shot and scored something in the trash. Unfortunately it didn't work with paper so I used my socks.

[Proto Puppet Trash Celebration](https://youtu.be/gr6WET1LoS0) 

[Code](https://github.com/bhwan1118/IDD-Fa18-Lab4/blob/master/ambient_servo.ino)
