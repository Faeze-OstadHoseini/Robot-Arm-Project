#include <Servo.h>

Servo servo1;
Servo servo2;
Servo servo3;
Servo servo4;

int joyA = 0;
int joyB = 1;
int joyC = 2;
int joyD = 3;

int servoVal;


void setup() 
{
  // put your setup code here, to run once:
  servo1.attach(3);
  servo2.attach(4);
  servo3.attach(6);
  servo4.attach(10);
}

void loop() {
  // put your main code here, to run repeatedly:
  servoVal = analogRead(joyA);
  servoVal = map(servoVal, 1023, 0, 0, 180);
  servo1.write(servoVal);

  servoVal = analogRead(joyB);
  servoVal = map(servoVal, 1023, 0, 70, 180);
  servo2.write(servoVal);

  servoVal = analogRead(joyC);
  servoVal = map(servoVal, 1023, 0, 70, 180);
  servo3.write(servoVal);

  servoVal = analogRead(joyD);
  servoVal = map(servoVal, 512, 0, 120, 180);
  servo4.write(servoVal);

  delay(15);

}
