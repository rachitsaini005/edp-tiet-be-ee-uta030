void setup() {
  Serial.begin(9600);
  Serial.println("Hello Arduino!");
  delay(1000);
}

void loop() {
  if (Serial.available() > 0) {
    char incomingByte = Serial.read();
    Serial.print("Received: ");
    Serial.println(incomingByte);
  }
}
