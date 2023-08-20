
# Connections

| ESP32 | BMP280 |
| ----- | ----------- |
| GPIO22 | SCL |
| GPIO23 | SDA |
| 3.3V | Vin |
| GND | GND |

SCL: Clock
SDA: Data
These pins are used to communicate with the BMP280 over [I2C](https://en.wikipedia.org/wiki/I%C2%B2C)

# Libraries Used

- Adafruit BMP 280 Library

<!-- TODO: Refer [docs/to_be_added.md]() for help installing libraries) -->

# Instructions

1. Connect the pins as mentioned above
2. Flash the program to the ESP32 board, using the Arduino IDE
3. Open Serial Monitor at 115200 baud, to view the temperature and pressure
4. Test the temperature sensor by placing your palms over the sensor. The sensor readings will increase.
