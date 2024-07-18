#include <Servo.h>

Servo Servo1;
Servo Servo2;
int emgPin = A0;
int emgValue = 0;
bool isAboveThreshold = false;

void setup() {
  Servo1.attach(9);
  Servo2.attach(10);
  Servo1.write(0);
  Servo2.write(0);
  Serial.begin(9600);
  Serial.println("Hello");
}

void loop() {
  emgValue = analogRead(emgPin);
  Serial.println(emgValue);
  delay(100); 

  if (emgValue > 250) {
    if (!isAboveThreshold) {
      for (int pos = 0; pos <= 180; pos++) {
        Servo1.write(pos);
        Servo2.write(pos);
        delay(2);
        Serial.println(pos);
      }
      isAboveThreshold = true;
    }
  } else {
    if (isAboveThreshold) {
      for (int pos = 180; pos >= 0; pos--) {
        Servo1.write(pos);
        Servo2.write(pos);
        delay(2);
        Serial.println(pos);
      }
      isAboveThreshold = false;
    }
  }
}
