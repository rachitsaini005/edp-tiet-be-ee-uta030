void setup() {
  pinMode(motorLeftForward, OUTPUT);
  pinMode(motorLeftBackward, OUTPUT);
  pinMode(motorRightForward, OUTPUT);
  pinMode(motorRightBackward, OUTPUT);
  stopBuggy();
}

void loop() {
  moveSquare();
  delay(2000);
  moveRectangle();
  delay(2000);
  moveCircle();
  delay(2000);
  moveHexagon();
  delay(2000);
}

void moveForward(int duration) {
  digitalWrite(motorLeftForward, HIGH);
  digitalWrite(motorRightForward, HIGH);
  delay(duration);
  stopBuggy();
}

void turnRight(int duration) {
  digitalWrite(motorLeftForward, HIGH);
  digitalWrite(motorRightBackward, HIGH);
  delay(duration);
  stopBuggy();
}

void stopBuggy() {
  digitalWrite(motorLeftForward, LOW);
  digitalWrite(motorLeftBackward, LOW);
  digitalWrite(motorRightForward, LOW);
  digitalWrite(motorRightBackward, LOW);
}

void moveSquare() {
  for (int i = 0; i < 4; i++) {
    moveForward(1000);
    turnRight(500);
  }
}

void moveRectangle() {
  for (int i = 0; i < 2; i++) {
    moveForward(1000);
    turnRight(500);
    moveForward(2000);
    turnRight(500);
  }
}

void moveCircle() {
  for (int i = 0; i < 360; i++) {
    analogWrite(motorLeftForward, 255);
    analogWrite(motorRightForward, 150);
    delay(10);
  }
  stopBuggy();
}

void moveHexagon() {
  for (int i = 0; i < 6; i++) {
    moveForward(1000);
    turnRight(400);
  }
}
