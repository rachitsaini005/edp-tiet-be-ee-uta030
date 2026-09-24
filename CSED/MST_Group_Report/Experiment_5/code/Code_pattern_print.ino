void setup() {
  Serial.begin(9600);
  for (int i = 0; i < 55; i++) {
    Serial.print("*");
  }
  Serial.println("*");
  Serial.println("roll no: 102304001");
  for (int i = 0; i < 44; i++) {
    Serial.print("*");
  }
  Serial.println("*");
  Serial.println("name: Tanav Pathak");
  for (int i = 0; i < 50; i++) {
    Serial.print("*");
  }
  Serial.println("*");
  Serial.println("Branch: EE");
  for (int i = 0; i < 48; i++) {
    Serial.print("*");
  }
}

void loop() { }
