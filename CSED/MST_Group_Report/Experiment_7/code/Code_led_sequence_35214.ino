void setup() {
  Serial.begin(9600);
  for (int i = 0; i < 5; i++) {
    pinMode(ledPins[i], OUTPUT);
  }
  Serial.println("Enter brightness (0-255) for the 5 LEDs in sequence 3, 5, 2, 1, 4:");
}

void loop() {
  if (Serial.available() > 0) {
    Serial.println("Setting brightness for forward sequence.");
    setBrightnessForward();
    delay(1000);
    Serial.println("Setting brightness for reverse sequence.");
    setBrightnessReverse();
  }
}

void setBrightnessForward() {
  for (int i = 0; i < 5; i++) {
    int brightness = Serial.parseInt();
    if (brightness >= 0 && brightness <= 255) {
      analogWrite(ledPins[i], brightness);
      Serial.print("LED ");
      Serial.print(ledPins[i]);
      Serial.print(" brightness set to: ");
      Serial.println(brightness);
    } else {
      Serial.println("Invalid brightness! Enter a value between 0 and 255.");
    }
  }
}

void setBrightnessReverse() {
  for (int i = 4; i >= 0; i--) {
    int brightness = Serial.parseInt();
    if (brightness >= 0 && brightness <= 255) {
      analogWrite(ledPins[i], brightness);
      Serial.print("LED ");
      Serial.print(ledPins[i]);
      Serial.print(" brightness set to: ");
      Serial.println(brightness);
    } else {
      Serial.println("Invalid brightness! Enter a value between 0 and 255.");
    }
  }
}
