#include <Servo.h>

Servo servo1;
Servo servo2;
Servo servo3;
Servo servo4;

// Servo pins (use any PWM-capable pins)
int pin1 = 3;
int pin2 = 5;
int pin3 = 6;
int pin4 = 9;

void setup() {
  servo1.attach(pin1);
  servo2.attach(pin2);
  servo3.attach(pin3);
  servo4.attach(pin4);
}

void loop() {
  // Move all servos to 0 degrees
  servo1.write(0);
  servo2.write(0);
  servo3.write(0);
  servo4.write(0);
  delay(1000);

  // Move all servos to 90 degrees
  servo1.write(90);
  servo2.write(90);
  servo3.write(90);
  servo4.write(90);
  delay(1000);

  // Move all servos to 180 degrees
  servo1.write(180);
  servo2.write(180);
  servo3.write(180);
  servo4.write(180);
  delay(1000);
}
