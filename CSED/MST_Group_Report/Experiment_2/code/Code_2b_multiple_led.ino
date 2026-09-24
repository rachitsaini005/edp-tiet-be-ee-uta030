void setup()
{
  pinMode(3, OUTPUT); pinMode(5, OUTPUT); pinMode(7, OUTPUT);
  pinMode(9, OUTPUT); pinMode(11, OUTPUT);
}

void loop()
{
  digitalWrite(3, HIGH); digitalWrite(5, HIGH); digitalWrite(7, HIGH);
  digitalWrite(9, HIGH); digitalWrite(11, HIGH); delay(1000);
  digitalWrite(3, LOW); digitalWrite(5, LOW); digitalWrite(7, LOW);
  digitalWrite(9, LOW); digitalWrite(11, LOW); delay(1000);
}
