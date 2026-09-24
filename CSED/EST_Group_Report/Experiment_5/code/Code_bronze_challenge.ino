void loop() {
  if (flag == 0) {
    if (Serial.available() > 0) {
      char s = Serial.read();
      switch (s) {
        case 'G': {
          flag = 1;
        }
      }
    }
  }
  unsigned long currentMillisU = millis();
  if (currentMillisU - previousMillisU > intervalU) {
    previousMillisU = currentMillisU;
    detectObstacle();
  }
  if (flag == 1) {
    gantry();
  }
  if (flag == 3) {
    // gantryParking();
    CurrentTimeG = millis();
    ElapsedTimeG = CurrentTimeG - StartTimeG;
    if (ElapsedTimeG < 2500) {
      flag = 3;
      leftBlind();
    }
    if (ElapsedTimeG > 2500 && ElapsedTimeG < 6500) {
      flag = 3;
      normalLineFollow();
    }
    if (ElapsedTimeG > 6500) {
      stopBuggy();
      Serial.print("Buggy:1 Parked");
      // Serial.println(ElapsedTimeG);
      delay(200);
      flag = -1;
    }
  }
}

void gantry()
{
  int r1 = digitalRead(t1);
  int r2 = digitalRead(t2);
  if (r1 == LOW && r2 == LOW) {
    digitalWrite(pin5, HIGH);
    digitalWrite(pin6, LOW);
    digitalWrite(pin7, HIGH);
    digitalWrite(pin8, LOW);
  }
  if (r1 == LOW && r2 == HIGH) {
    digitalWrite(pin5, LOW);
    digitalWrite(pin6, LOW);
    digitalWrite(pin7, HIGH);
    digitalWrite(pin8, LOW);
  }
  if (r1 == HIGH && r2 == LOW) {
    digitalWrite(pin5, HIGH);
    digitalWrite(pin6, LOW);
    digitalWrite(pin7, LOW);
    digitalWrite(pin8, LOW);
  }
  if (r1 == HIGH && r2 == HIGH) {
    digitalWrite(pin5, HIGH);
    digitalWrite(pin6, LOW);
    digitalWrite(pin7, HIGH);
    digitalWrite(pin8, LOW);
  }
  if (digitalRead(irPin) == HIGH) {
    StartTime = millis();
    d = pulseIn(irPin, HIGH);
    if (d > 500 && d < 1500) {
      Serial.println("Gantry: 1");
      stopBuggy();
      delay(1000);
    } else if (d > 1500 && d < 2500) {
      Serial.println("Gantry: 2");
      stopBuggy();
      delay(1000);
    } else if (d > 2500 && d < 3500) {
      Serial.println("Gantry: 3");
      gantryCounter = gantryCounter + 1;
      Serial.print("The gantry Counter is: ");
      Serial.println(gantryCounter);
      stopBuggy();
      delay(1000);
    } else {
      Serial.println("Gantry: Unknown");
    }
    if (gantryCounter >= 4) {
      StartTimeG = millis();
      flag = 3;
    } else {
      gantry();
    }
  }
}

void stopBuggy()
{
  digitalWrite(pin5, LOW);
  digitalWrite(pin6, LOW);
  digitalWrite(pin7, LOW);
  digitalWrite(pin8, LOW);
}

void normalLineFollow()
{
  int r1 = digitalRead(t1);
  int r2 = digitalRead(t2);
  if (r1 == LOW && r2 == LOW) {
    digitalWrite(pin5, HIGH);
    digitalWrite(pin6, LOW);
    digitalWrite(pin7, HIGH);
    digitalWrite(pin8, LOW);
  }
  if (r1 == HIGH && r2 == LOW) {
    digitalWrite(pin5, LOW);
    digitalWrite(pin6, HIGH);
    digitalWrite(pin7, HIGH);
    digitalWrite(pin8, LOW);
  }
  if (r1 == LOW && r2 == HIGH) {
    digitalWrite(pin5, HIGH);
    digitalWrite(pin6, LOW);
    digitalWrite(pin7, LOW);
    digitalWrite(pin8, HIGH);
  }
  if (r1 == HIGH && r2 == HIGH) {
    digitalWrite(pin5, HIGH);
    digitalWrite(pin6, LOW);
    digitalWrite(pin7, HIGH);
    digitalWrite(pin8, LOW);
  }
}

void leftBlind()
{
  int r2 = digitalRead(t2);
  if (r2 == LOW) {
    digitalWrite(pin5, LOW);
    digitalWrite(pin6, LOW);
    digitalWrite(pin7, HIGH);
    digitalWrite(pin8, LOW);
  }
  if (r2 == HIGH) {
    digitalWrite(pin5, HIGH);
    digitalWrite(pin6, LOW);
    digitalWrite(pin7, HIGH);
    digitalWrite(pin8, LOW);
  }
}

void detectObstacle()
{
  delay(50);
  unsigned int uS = sonar.ping_cm();
  unsigned int distanceCm;
  pinMode(ECHO_PIN, OUTPUT);
  digitalWrite(ECHO_PIN, LOW);
  pinMode(ECHO_PIN, INPUT);
  // Serial.print("Ping: ");
  // Serial.print(distanceCm);
  // Serial.println("cm");
  if ((distanceCm < 15) && (distanceCm > 0)) {
    stopBuggy();
    delay(1000);
  }
}
