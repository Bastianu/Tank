//include the library code
#include <MyTankLib.h>

//creating myTank var, from the library.
MyTankClass myTank;

void setup() {

/*no setup needed, the robot is already affected by class constructor
the pins are  E1 - pin 6 for Speed Control, Left motor
              E2 - pin 5 for Speed Control, Right motor
              M1 - pin 8 for Direction Control, Left motor
              M2 - pin 7 for Direction Control, Right motor
              */
}

void loop() {
int speed = 100;
  myTank.setSpeed(speed); //Move forward, speed must be between -255 and 255
  delay(2000); // move for 2s

  myTank.setSpeed(-speed); //Move backward
  delay(1000); // move for 1s
  myTank.stop(); //stop the robot
  delay(2000);

  myTank.setSpeed(speed); 
  delay(2000); // move forward for 2s

  myTank.turn90R(); //turn at 90° on the right side

  myTank.turn90L(); //turn at 90° on the left side

  myTank.turnR180(); //turn at 180° on the right side

  myTank.turnL180(); //turn at 180° on the left side
  myTank.stop();
  delay(1000);

  myTank.setSpeed(speed); ////Move forward/backward, speed must be between -255 and 255
  myTank.turn(70); //the robot will turn and still move forward/backward.
  //wheter the angle is positive or negative it will turn to the left (positive) or the right (negative)
  myTank.stop();
  delay(5000);
 
}
