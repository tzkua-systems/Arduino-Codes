#include <Servo.h>

int servoPin = 3;
int servoPosition = 0;
int onButton;
int offButton;

Servo myServo;

void setup() {
  // put your setup code here, to run once:
   Serial.begin (9600);
   myServo.attach(servoPin);
}

void loop() {
  // put your main code here, to run repeatedly:
  Receive_Serial_Data();
  myServo.write(servoPosition);
}

void Receive_Serial_Data() {
  while (Serial.available())
    { 
      onButton = Serial.read();
      offButton = Serial.read();
    }
    
    if((onButton == true) && (servoPosition <= 90))
        {
          myServo.write(90);
          delay(5); 
        }
    else if ((offButton == true) && (servoPosition >=0))
        {
          myServo.write(0);
          delay(5);  
        }
    }
