int arr[5] = {2, 3, 4, 5, 6};

void setup() {
  for (int i = 0; i < 5; i++) {
    pinMode(arr[i], OUTPUT);
  }
}

void loop() {
  // put your main code here, to run repeatedly
  for (int i = 0; i < 5; i++) {
    switch (i) {
      case 0: digitalWrite(2, HIGH); delay(1000); digitalWrite(2, LOW); delay(1000); break;
      case 1: digitalWrite(3, HIGH); delay(1000); digitalWrite(3, LOW); delay(1000); break;
      case 2: digitalWrite(4, HIGH); delay(1000); digitalWrite(4, LOW); delay(1000); break;
      case 3: digitalWrite(5, HIGH); delay(1000); digitalWrite(5, LOW); delay(1000); break;
      case 4: digitalWrite(6, HIGH); delay(1000); digitalWrite(6, LOW); delay(1000); break;
    }
  }
  for (int i = 0; i < 5; i++) {
    switch (i) {
      case 0: digitalWrite(6, HIGH); delay(1000); digitalWrite(6, LOW); delay(1000); break;
      case 1: digitalWrite(5, HIGH); delay(1000); digitalWrite(5, LOW); delay(1000); break;
      case 2: digitalWrite(4, HIGH); delay(1000); digitalWrite(4, LOW); delay(1000); break;
      case 3: digitalWrite(3, HIGH); delay(1000); digitalWrite(3, LOW); delay(1000); break;
      case 4: digitalWrite(2, HIGH); delay(1000); digitalWrite(2, LOW); delay(1000); break;
    }
  }
}
