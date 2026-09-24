const int numLEDs = 5;
const int ledPins[numLEDs] = {2, 3, 4, 5, 6};
const int fibonacci[5] = {1, 1, 2, 3, 5};

void setup() {
  for (int i = 0; i < numLEDs; i++) {
    pinMode(ledPins[i], OUTPUT);
  }
}

void loop() {
  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < fibonacci[i]; j++) {
      digitalWrite(ledPins[j], HIGH);
    }
    delay(1000);
    for (int j = 0; j < fibonacci[i]; j++) {
      digitalWrite(ledPins[j], LOW);
    }
    delay(500);
  }
}
