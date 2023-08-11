#include <Wire.h>
#include "Adafruit_BMP280.h"

Adafruit_BMP280 bmp;

void setup() {
  Serial.begin(115200);
  int status = bmp.begin(0x76, 0x58);
  if (!status) {
    Serial.println("Error initing");
  }

  bmp.setSampling();
}

void loop() {
  float temp = bmp.readTemperature();
  float pres = bmp.readPressure();
  Serial.print("Taking reading...\nTemperature: ");
  Serial.print(temp);
  Serial.print(" degC\nPressure: ");
  Serial.print(pres);
  Serial.print(" Pa\n\n");
  delay(10000);
}
