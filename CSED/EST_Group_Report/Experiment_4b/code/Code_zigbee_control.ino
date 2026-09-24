void loop()
{
  if (Serial.available() > 0) {
    char s = Serial.read();
    if (s == 'f') forward();
    if (s == 'r') right();
    if (s == 'l') left();
    if (s == 'c') clockwise();
    if (s == 'a') anticlockwise();
    if (s == 's') stop();
  }
}
