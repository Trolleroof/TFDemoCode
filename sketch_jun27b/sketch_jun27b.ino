#include <Servo.h>
// RESET PROGRAM
Servo Servo1;
Servo Servo2;  // Create a Servo object

void setup() {
  Servo1.attach(9);  // Attach the servo to pin 9
  Servo2.attach(10);  // Attach the servo to pin 9
  Servo1.write(0);
  Servo2.write(0);   // Set the servo to position 0 degrees
}

void loop() {
  // Nothing needs to be done in the loop
  // The servo remains at position 0
}
