#include <Servo.h>

Servo servo1; // initialize servo

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

  servo1.attach(3); // attach servo on pin 3 (must be PWM)
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println("testing");

  servo1.write(180); // turn it to the 180degree position
  delay(500);

  servo1.write(0);  // turn it to the 0 degrees position
  delay(500);
}
