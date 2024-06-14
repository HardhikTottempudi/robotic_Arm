#include <Servo.h>

int pot_pin_claw = A1;
int pot_pin_bottom = A2;
int pot_pin_joint1 = A3;
int pot_pin_joint2 = A4;

  
int value_claw;
int value_bottom;
int value_joint1;
int value_joint2;

Servo servo_claw;
Servo servo_bottom;
Servo servo_joint1;
Servo servo_joint2;

void setup() {
  servo_claw.attach(11);
  servo_bottom.attach(8);
  servo_joint1.attach(9);
  servo_joint2.attach(10);
  Serial.begin(9600);
}

void loop() {
  int sen1=analogRead(A1);
  int sen2=analogRead(A2);
  int sen3=analogRead(A3);
  int sen4=analogRead(A4);
  Serial.println(sen1);
  //Serial.println(sen2);
  //Serial.println(sen3);
  //Serial.println(sen4);
  int pot_inputs[4];
  pot_inputs[0] = analogRead(pot_pin_claw);
  pot_inputs[1] = analogRead(pot_pin_bottom);
  pot_inputs[2] = analogRead(pot_pin_joint1);
  pot_inputs[3] = analogRead(pot_pin_joint2);

  if(pot_inputs[0] > 200) {
    value_claw = 1;
  } else {
    value_claw = 0;
  }
  
  value_bottom = map(pot_inputs[1], 110, 800, 180, 0);
  value_joint1 = map(pot_inputs[2], 170, 880, 180, 0);
  value_joint2 = map(pot_inputs[3], 170, 880, 180, 0);

  if(value_claw) {
    servo_claw.write(80);
  } else {
    servo_claw.write(50);
  }
  
  servo_bottom.write(value_bottom);
  servo_joint1.write(value_joint1);
  servo_joint2.write(value_joint2);

  delay(5);
}
