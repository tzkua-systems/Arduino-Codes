int redLED = 3;
int buttonPIN = 2;
//int buttonState = 0

void setup() {
  // put your setup code here, to run once:
pinMode (redLED, OUTPUT);
pinMode (buttonPIN, INPUT_PULLUP);
}

void loop() {
  // put your main code here, to run repeatedly:
int buttonState = digitalRead (buttonPIN);
digitalWrite (redLED, buttonState);
//buttonState = digitalRead (buttonPIN);
//if (buttonState == HIGH) {
//digitalWrite (redLED, HIGH); }
//else {
//digitalWrite (redLED, LOW); }
}
