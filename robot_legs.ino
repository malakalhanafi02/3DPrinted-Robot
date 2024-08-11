// I havent tested out this code yet.

#include <Servo.h>

// servo objects & pins for the legs
Servo hipLeft, kneeLeft, footLeft;
Servo hipRight, kneeRight, footRight;

int hipLeftPin = 2;
int kneeLeftPin = 3;
int footLeftPin = 4;
int hipRightPin = 5;
int kneeRightPin = 6;
int footRightPin = 7;

void setup() {
  // attach servos to their pins
  hipLeft.attach(hipLeftPin);
  kneeLeft.attach(kneeLeftPin);
  footLeft.attach(footLeftPin);
  hipRight.attach(hipRightPin);
  kneeRight.attach(kneeRightPin);
  footRight.attach(footRightPin);

  // initialize all servos to 90 degrees
  hipLeft.write(90);
  kneeLeft.write(90);
  footLeft.write(90);
  hipRight.write(90);
  kneeRight.write(90);
  footRight.write(90);
  
  delay(1000); 
}

void loop() {
  // movement: lift left leg, step forward, and return
  liftLeg(hipLeft, kneeLeft);
  stepForward(hipLeft, kneeLeft);
  lowerLeg(hipLeft, kneeLeft);
  delay(1000);

  // repeat for the right leg
  liftLeg(hipRight, kneeRight);
  stepForward(hipRight, kneeRight);
  lowerLeg(hipRight, kneeRight);
  delay(1000);
}

void liftLeg(Servo &hip, Servo &knee) {
  hip.write(70);   // lift the leg by moving the hip servo
  delay(500);
  knee.write(110); // bend the knee to step forward
  delay(500);
}

void stepForward(Servo &hip, Servo &knee) {
  hip.write(90);   // move the hip forward
  delay(500);
}

void lowerLeg(Servo &hip, Servo &knee) {
  knee.write(90);  // straighten the knee
  delay(500);
  hip.write(90);   // lower the leg back down
  delay(500);
}

