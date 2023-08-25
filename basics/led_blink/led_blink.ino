// setup code - to be run once
void setup() {
  pinMode(33, OUTPUT); // 33 is the default Pin for LED 1
}

// runs again and again
void loop() {
  digitalWrite(33, HIGH); // 33 is held HIGH
  delay(500);             // we wait for 500ms
  digitalWrite(33, LOW);  // 33 is held LOW
  delay(500);             // we wait for 500ms
}                         // this process repeats

