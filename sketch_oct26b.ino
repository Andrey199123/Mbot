
#include <Arduino.h>
#include <MeMCore.h>
MeDCMotor motor1(M1);
MeDCMotor motor2(M2);
MeRGBLed led(0,30);
int speed = 100;
void moveForward(int d) {
    motor1.run(-speed);
    motor2.run(speed);
    delay(d);
    motor1.stop();
    motor2.stop();
}
void moveBackward(int d) {
    motor1.run(speed);
    motor2.run(-speed);
    delay(d);
    motor1.stop();
    motor2.stop();
}
void turnLeft() {
    motor1.run(speed);
    motor2.run(speed);
    delay(750);
    motor1.stop();
    motor2.stop();
}
void turnRight() {
    motor1.run(-speed);
    motor2.run(-speed);
    delay(800);
    motor1.stop();
    motor2.stop();
}
void turnAround() {
    motor1.run(-speed);
    motor2.run(-speed);
    delay(1600);
    motor1.stop();
    motor2.stop();
}
void setup() {
    pinMode(A7, INPUT);
    while(analogRead(A7) != 0);
    led.setColorAt(0, 255, 0, 0);
    led.setColorAt(1, 255, 0, 0);
    delay(3000);
    led.setColorAt(0, 0, 255, 0);
    led.setColorAt(1, 0, 255, 0);
    moveForward(3300);
    turnRight();
    moveForward(3100);
    turnLeft();
    moveForward(3100);
    led.setColorAt(0, 255, 0, 0);
    led.setColorAt(1, 255, 0, 0);
    delay(3000);
    led.setColorAt(0, 0, 255, 0);
    led.setColorAt(1, 0, 255, 0);
    motor1.run(speed);
    motor2.run(speed);
    delay(375);
    motor1.stop();
    motor2.stop();
    moveForward(2000);
    led.setColorAt(0, 255, 0, 0);
    led.setColorAt(1, 255, 0, 0);
    
}


void loop() {
  // put your main code here, to run repeatedly:
   
}
