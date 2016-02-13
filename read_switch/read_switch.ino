int val = 0, prevVal = 0;

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  if (analogRead(0) > 500) {
    val = 1;
  } else {
    val = 0;
  }
  if (prevVal ==0 && val == 1) {
    Serial.println(1);
    delay(500);
  } else {
    Serial.println(0);
  }
  prevVal = val;
  delay(10);
}
