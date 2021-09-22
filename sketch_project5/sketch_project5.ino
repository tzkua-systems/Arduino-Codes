#include <Servo.h>

//variable declaration
const int redLED = 2;
const int greenLED = 4;
const int button1PIN = 7;
const int button2PIN = 8;
const int servoPIN = 3;

Servo mySERVO;
int servoPOSITION = 0;

void setup() {
  // put your setup code here, to run once:
pinMode (redLED, OUTPUT);
pinMode (greenLED, OUTPUT);
pinMode (button1PIN, INPUT);
pinMode (button2PIN, INPUT);

mySERVO.attach(servoPIN);
mySERVO.write(servoPOSITION);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
int button1State = digitalRead(button1PIN);
int button2State = digitalRead(button2PIN);

if (button1State == HIGH && servoPOSITION <=90) {
  mySERVO.write(90);
  //mySERVO.write(servoPOSITION);
  //servoPOSITION++;
  delay(100);
  digitalWrite (redLED, HIGH);
  digitalWrite (greenLED, LOW);
}

else if (button2State == HIGH && servoPOSITION >=0) {
  mySERVO.write(0);
  //mySERVO.write(servoPOSITION);
  //servoPOSITION--;
  delay(100);
  digitalWrite (redLED, LOW);
  digitalWrite (greenLED, HIGH);
}

}
