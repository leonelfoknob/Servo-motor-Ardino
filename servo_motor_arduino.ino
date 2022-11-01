/************************** MakinaFleo*************************************/
// use three servo motor with arduino and control it with potensiometer
#include<Servo.h>

Servo servo1;
Servo servo2;
Servo servo3;

int pot = A0;
int pot_val;
int servo_val;

void setup() {
  Serial.begin(9600);
  
  servo1.attach(3);
  servo2.attach(5);
  servo3.attach(6);
}

void loop() {
  pot_val = analogRead(pot);
  servo_val = map(pot_val,2,1020,0,180);
  
  servo1.write(servo_val);
  servo2.write(servo_val);
  servo3.write(servo_val);
  
  Serial.print("pot_val : ");Serial.print(pot_val);Serial.print(" servo_val : ");Serial.println(servo_val);
}
