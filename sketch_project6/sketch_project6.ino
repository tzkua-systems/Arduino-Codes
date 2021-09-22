int ledArray[] = {9, 10, 11, 12};
//int ledNums = 4;
int delayTime = 250;

void setup () {
  for (int i; i<4; i++)
    {
      pinMode (ledArray[i], OUTPUT);
    }
}


void loop () {
  for (int i; i <= 4; i++)
  {
    digitalWrite (ledArray[i], HIGH);
    delay (delayTime);
  }
  for (int i = 4; i >= 0; i--)
  {
    digitalWrite (ledArray[i], LOW);
    delay (delayTime);
  }
}
