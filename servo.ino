#include <Servo.h>

Servo myservo;  // Create servo object to control a servo

int pos = 0;    // Variable to store the servo position

void setup() {
  myservo.attach(9);  // Attaches the servo on pin 9 to the servo object
}

void loop() {
  for (pos = 90; pos <= 180; pos += 1) { // Goes from 90 degrees to 180 degrees
    myservo.write(90);              // Tell servo to go to position in variable 'pos'
    delay(15);                       // Waits 15ms for the servo to reach the position
  }
  for (pos = 180; pos >= 90; pos -= 1) { // Goes from 180 degrees to 90 degrees
    myservo.write(90);              // Tell servo to go to position in variable 'pos'
    delay(15);                       // Waits 15ms for the servo to reach the position
  }
}
