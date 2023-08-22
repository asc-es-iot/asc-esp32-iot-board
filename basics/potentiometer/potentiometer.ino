void setup()
{
  pinMode (36, INPUT);
  Serial.begin(115200);
}
void loop()
{
  int analogValue = analogRead(36);
  Serial.println(analogValue);
}
