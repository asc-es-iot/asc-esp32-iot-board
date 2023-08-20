
# Connections

| ESP32 | BMP280 |
| ----- | ----------- |
| GPIO22 | SCL |
| GPIO23 | SDA |
| 3.3V | Vin |
| GND | GND |

# Libraries Used

- Adafruit BMP 280 Library

(Refer [docs/to_be_added.md]() for help installing libraries)

# Instructions

1. Connect the pins as mentioned above
2. Flash the program to the ESP32 board, using the Arduino IDE
3. Open Serial Monitor at 115200 baud, to view the temperature and pressure
4. The temperature sensor can be tested by placing your palms around the sensor.
    The temperature reading should increase
