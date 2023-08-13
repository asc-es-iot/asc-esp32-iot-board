# ASC ESP32 IoT Board

A GitHub Repository for the IoT end device board for the ESP32, developed by 
students from Amrita School of Computing, Amrita Vishwa Vidyapeetham, Coimbatore.

## Table of Contents
## Introduction

![[assets/asc-iot-2.0-esp32-topview.jpg]]

The ASC CSE IoT 2.0 board is the second in the series of boards released by Amrita School of Computing, Amrita Vishwa Vidyapeetham, Coimbatore.
It is an all in one kit to get you started on embedded systems development.

### The Board
The ASC CSE IoT 2.0 comes with built-in WiFi and Bluetooth capabilities. It is based on the Espressif ESP32-WROOM Series.
It can be connected to a PC via a USB Type - C connector for power, programming and serial communication.
The board also houses
- 2 Programmable LEDs
- 1 LDR
- 1 Potentiometer
- 1 Programmable Switch


## Setup Arduino IDE
Download the [Arduino IDE](https://www.arduino.cc/en/software) if you haven't done so already.

1. Open the Arduino IDE. ![[assets/open]]
2. Click File > Preferences... 
3. Paste this URL in the "Additional boards manager URLs":
	```https://raw.githubusercontent.com/espressif/arduino-esp32/gh-pages/package_esp32_index.json```
	
	![[assets/prefs.png]]
4. Click OK.

The required libraries should start downloading automatically (you will be notified). If not, do this:
1. Click on Tools > Boards > Boards Manager...
2. Search for "esp32" . ![[assets/boards.png]]
3. Install "esp32 by Espressif Systems" ![[assets/install.png]]
4. Verify that the installation starts. ![[assets/done.png]]

Once the installation is complete, you can write code for your board.


## List of Modules

| Module | Description|
|---------|------------|
| **bmp280** | Sample code and instructions to connect the BMP280 Pressure and Temperature sensor to the board.   |
|**mpu6050**| Sample code and instructions to connect the MPU6050 3 axis motion sensor |
|**docs**|Complete documentation of the board.|


## References
The following code snippets were obtained from the examples for ESP32 boards in the ESP32 support package for Arduino IDE:
- 


## Contribution Guidelines
To contribute to the project, refer CONTRIBUTION.md
