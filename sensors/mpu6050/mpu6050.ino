#include <Adafruit_MPU6050.h>

Adafruit_MPU6050 mpu;

void setup() {
  Serial.begin(115200);
  int status = mpu.begin();
  if (!status) {
    Serial.println("Could not init MPU 6050!");
    while(1) {
      sleep(100);
    }
  }
  Serial.println("Inited MPU 6050");
}

void loop() {
  sensors_event_t a, g, t;
  mpu.getEvent(&a, &g, &t);
  Serial.print("Acceleration (m/s^2): X: ");
  Serial.print(a.acceleration.x);
  Serial.print("    Y: ");
  Serial.print(a.acceleration.y);
  Serial.print("    Z: ");
  Serial.println(a.acceleration.z);
  Serial.print("Gyroscope (rad/s): X: ");
  Serial.print(g.gyro.x);
  Serial.print("    Y: ");
  Serial.print(g.gyro.y);
  Serial.print("    Z: ");
  Serial.println(g.gyro.z);
  Serial.print("Temperature: ");
  Serial.print(t.temperature);
  Serial.println(" degC\n");
  delay(1000);
}
