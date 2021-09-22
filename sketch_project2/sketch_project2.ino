int redLED = 3;
int buttonPIN = 2;
const int ledPIN = 13;
const int buzzerPIN = 12;
const int ldrPIN = A0;

void setup() {
  // put your setup code here, to run once:
pinMode (redLED, OUTPUT);
pinMode (buttonPIN, INPUT_PULLUP);

Serial.begin(9600);

  pinMode(ledPIN, OUTPUT);
  pinMode(buzzerPIN, OUTPUT);
  pinMode(ldrPIN, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
int buttonState = digitalRead (buttonPIN);
digitalWrite (redLED, buttonState);

int ldrStatus = analogRead(ldrPIN);
  
  if (ldrStatus <= 500) {
    tone(buzzerPIN, 800);
    digitalWrite(ledPIN, HIGH);
    delay(100);

    tone(buzzerPIN, 0);
    digitalWrite(ledPIN, LOW);
    delay(100);

    Serial.println("------------ ALARM ACTIVATED -----------");
  }
  else {

    noTone(buzzerPIN);
    digitalWrite(ledPIN, LOW);

    Serial.println("ALARM DEACTIVATED");
  }
}
