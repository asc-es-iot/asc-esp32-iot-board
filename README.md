![The ASC CSE IoT 2.0](assets/label/esp32-label.png)

<h1 style="text-align: center;">ESP32 IoT Board </h1>

A tutorial repository for the IoT end device board - **ESP32** developed by 
students and faculty from Amrita School of Computing, **Amrita Vishwa Vidyapeetham**, Coimbatore.

## Table of Contents
1. [Introduction](#introduction)
2. [About the Board](#about-the-board)
3. [Setup](#setup-arduino-ide)
4. [List of Modules](#list-of-modules)
5. [References](#references)
6. [Contribution Guidelines](#contribution-guidelines)

## Introduction

The ASC CSE IoT 2.0 board is the second in the series of boards released by Amrita School of Computing, Amrita Vishwa Vidyapeetham, Coimbatore.
It is an all in one kit to get you started on embedded systems development.

### About the Board

The ASC CSE IoT 2.0 comes with built-in WiFi and Bluetooth capabilities. It is based on the Espressif ESP32-WROOM Series.
It can be connected to a PC via a USB Type - C connector for power, programming and serial communication.
The board also contains
- 2 Programmable LEDs
- 1 LDR
- 1 Potentiometer
- 1 Programmable Switch

The board has custom made connectors for various commonly used sensors and modules:
- 3-Axis Gyroscope and AccelerometerMPU6050
- CAN Transceiver TJA105
- USB2UART FT232 Module
- 8 MB SPI based Data Flash module W25Q64

This enables simple plug-and-play use.

Other modules using the same protocols will need to be connected to these interfaces using jumper wires if their pinouts don't match the connectors on the board.

## Setup Arduino IDE

Download the [Arduino IDE](https://docs.arduino.cc/) from the offical website [here](https://www.arudino.cc/en/software).  

1. Open the Arduino IDE. ![Open](assets/open.png)
2. Click File > Preferences... 
3. Paste the following URL in the "Additional boards manager URLs":
	```
	https://raw.githubusercontent.com/espressif/arduino-esp32/gh-pages/package_esp32_index.json
	```
	![Preferences](assets/prefs.png)
4. Click OK.

The required libraries should start downloading automatically. In case the above method does not work, proceed as follows:
1. Click on **Tools** > **Boards** > **Boards Manager...
2. Search for **esp32** . ![Boards](assets/boards.png)
3. Install **esp32 by Espressif Systems** ![Install](assets/install.png)
4. Wait for the installation to complete. A notification would be generated on completion. ![Done](assets/done.png)

Once the installation is complete, you can write code for your board.

## Getting Started

To begin learning about the ASC CSE IoT 2.0 (ESP32) - head over to the [`basics/blink`](basics/blink) directory.

## List of Modules

The following modules are a part of the repository - 

| Module | Description|
| --------- | ------------ |
| [**basics**](basics/) | Sample code and explanations covering the basics of working with the ASC CSE IoT 2.0, and embedded devices in general.  |
| [**sensors**](sensors/) | Sample code and explanations to work with various sensors.  |
| [**wireless**](wireless/) | Sample code and explanation for working with the board's built-in WiFi and Bluetooth LE |
| [**docs**](docs) | Complete documentation of the board. |
| [**assets**]() | Contains all screenshots embedded in the tutorial documentation. |


## References

The following code snippets were obtained from the **examples for ESP32 boards** in the ESP32 support package by Espressif Systems for Arduino IDE:
For further exploration, refer this [link]().

## Contribution Guidelines
To contribute to the project, refer [CONTRIBUTING](CONTRIBUTING.md).

## Credits

All tutorials, code examples and testing work have been done by the following students :
* [Aadithyaa E](https://github.com/aadit-n3rdy)
* [Jeet Thakur](https://github.com/Jeet-Thakur)
* [Srivatsan Sriram](https://github.com/srivatssriram)
* [Ananthakrishna Balaji](https://github.com/ananthakrishna7)

The documentation has been done by [Ritesh Koushik](https://github.com/IAmRiteshKoushik)

Under the guidance of our mentor:  
**Dr. V Ananthanarayanan**   
Associate Professor -School of Computing  
**Amrita Vishwa Vidyapeetham, Coimbatore**
  