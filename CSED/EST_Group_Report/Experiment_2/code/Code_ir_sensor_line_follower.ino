int r1, r2, r3, r4;

void setup()
{
  Serial.begin(9600);
  pinMode(A1, INPUT);
  pinMode(A0, INPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
}

void loop()
{
  r1 = digitalRead(A1);
  r2 = digitalRead(A0);
  Serial.println(r1);
  Serial.print("\\t");
  Serial.println(r2);
  Serial.print("\\t");
  Serial.println(r3);
  Serial.print("\\t");
  Serial.println(r4);

  if (r1 == LOW && r2 == LOW) {
    digitalWrite(5, HIGH);
    digitalWrite(6, LOW);
    digitalWrite(7, LOW);
    digitalWrite(8, HIGH);
  }
  if (r1 == HIGH && r2 == LOW) {
    digitalWrite(5, HIGH);
    digitalWrite(6, LOW);
    digitalWrite(7, LOW);
    digitalWrite(8, LOW);
  }
  if (r1 == LOW && r2 == HIGH) {
    digitalWrite(5, LOW);
    digitalWrite(6, LOW);
    digitalWrite(7, LOW);
    digitalWrite(8, HIGH);
  }
  if (r1 == HIGH && r2 == HIGH) {
    digitalWrite(5, HIGH);
    digitalWrite(6, LOW);
    digitalWrite(7, LOW);
    digitalWrite(8, HIGH);
  }
}
