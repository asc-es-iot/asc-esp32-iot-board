void setup()
{
  pinMode (39, INPUT);
  Serial.begin(115200);
}
void loop()
{
  int ldrReading = analogRead(39);
  Serial.println(ldrReading);
  delay(500);
}
