const int ledPIN = 13;
const int buzzerPIN = 12;
const int ldrPIN = A0;


void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);

  pinMode(ledPIN, OUTPUT);
  pinMode(buzzerPIN, OUTPUT);
  pinMode(ldrPIN, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
int ldrStatus = analogRead(ldrPIN);
  
  if (ldrStatus <= 500) {
    tone(buzzerPIN, 800);
    digitalWrite(ledPIN, HIGH);
    delay(100);

    noTone(buzzerPIN);
    digitalWrite(ledPIN, LOW);
    delay(100);

    Serial.print("------------ ALARM ACTIVATED -----------");
  }
  else {

    noTone(buzzerPIN);
    digitalWrite(ledPIN, LOW);

    Serial.print("ALARM DEACTIVATED");
  }
}
