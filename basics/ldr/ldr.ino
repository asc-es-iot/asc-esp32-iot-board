void setup()
{
  pinMode (39, INPUT); // LDR is on Pin 39
  Serial.begin(115200); // init Serial at 115200 baud
}
void loop()
{
  int ldrReading = analogRead(39); // read from the LDR on pin 39 
  Serial.println(ldrReading); // send reading over serial
  delay(500); // wait 500ms
} // repeat
