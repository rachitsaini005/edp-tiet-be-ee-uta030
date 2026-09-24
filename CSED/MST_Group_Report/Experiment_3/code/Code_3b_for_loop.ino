void setup()
{
  for (int i = 2; i < 7; i++)
    pinMode(i, OUTPUT);
}

void loop()
{
  int arr[5] = {2, 3, 4, 5, 6};
  for (int j = 0; j < 5; j++) {
    digitalWrite(arr[j], HIGH);
    delay(500);
    digitalWrite(arr[j], LOW);
    delay(500);
  }
  for (int i = 4; i >= 0; i--) {
    digitalWrite(arr[i], HIGH);
    delay(500);
    digitalWrite(arr[i], LOW);
    delay(500);
  }
}
