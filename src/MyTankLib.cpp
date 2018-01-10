/**
   Library for DFRobotShop Rover v2, developed by Blanc Sebastien, Bortolaso Dorian, Leca Frederic, Ragiot Hugo at the "Lycée Laetitia Bonaparte, Ajaccio, Corsica, France".
   BTS Systemes Numeriques Electroniques.
   For more information, you can go on the website : https://www.robotshop.com/en/dfrobotshop-rover-tracked-robot-basic-kit.html
*/

#include "MyTankLib.h"
#include <Arduino.h>

//Pin selected by default
MyTankClass::MyTankClass(void) {

  E1 = 6; //M1 Speed Control, Left motor
  E2 = 5; //M2 Speed Control, Right motor
  M1 = 8; //M1 Direction Control, Left motor
  M2 = 7; //M2 Direction Control, Right motor

}

//Move Forward or Back at the "x" speed

void MyTankClass::setSpeed(int x) {

  if (x >= 0)
  {
    analogWrite(E1, x);
    analogWrite(E2, x);

    digitalWrite(M1, LOW);
    digitalWrite(M2, LOW);
  };

  if (x < 0)
  {
    analogWrite(E1, -x);
    analogWrite(E2, -x);

    digitalWrite(M1, HIGH);
    digitalWrite(M2, HIGH);
  };

}


//Stop the motors by setting the speed at 0
void MyTankClass::stop() {

  setSpeed(0);
}


//Turn to the right at 90°
void MyTankClass::turn90R() {

  turn(90);
}


//Turn to the left at 90°
void MyTankClass::turn90L() {

  turn(-90);
}


//Turn at 180°
void MyTankClass::turnR180() {

  turn(180);
}

//Turn at 180°
void MyTankClass::turnL180() {

  turn(-180);
}


//Turn at "x" angle
void MyTankClass::turn(int x) {

  //"x" negative it will turn to the right side
  if (x < 0)
  {
    analogWrite(E1, 150);
    analogWrite(E2, 150);
    digitalWrite(M1, HIGH);
    digitalWrite(M2, LOW);

  }
  //"x" positive it will turn to the left side
  else
  {
    analogWrite(E1, 150);
    analogWrite(E2, 150);
    digitalWrite(M1, LOW);
    digitalWrite(M2, HIGH);

  };
  delay(abs(x) * 17); //We don't have any compass on it, so we need to work on the delay, for 1° you need around 16-17ms.

  stop();


}

