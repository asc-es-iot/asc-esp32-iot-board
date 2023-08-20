
# Connections

- No wires are necessary, simply connect the MPU6050 to the corresponding header on the board
- Use jumpers to connect the I2C pins (SCK and SDA) to GPIO22 and GPIO21 respectively

# Libraries Used

- Adafruit MPU6050 Library

(Refer [docs/to_be_added.md]() for help installing libraries)

# Instructions

1. Connect the pins as mentioned above
2. Flash the program to the ESP32 board, using the Arduino IDE
3. Open Serial Monitor at 115200 baud, to view the temperature and pressure
4. The temperature sensor can be tested by placing your palms around the sensor.
    The temperature reading should increase
