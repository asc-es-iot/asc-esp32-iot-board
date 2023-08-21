## Setup Arduino IDE

Download the [Arduino IDE](https://docs.arduino.cc/) from the offical website [here](https://www.arudino.cc/en/software).  

1. Open the Arduino IDE. ![Open](assets/open.png)
2. Click **File** > **Preferences...**
3. Paste the following URL in **Additional boards manager URLs**:
	```
	https://raw.githubusercontent.com/espressif/arduino-esp32/gh-pages/package_esp32_index.json
	```
	![Preferences](assets/prefs.png)
4. Click OK.

The required libraries should start downloading automatically. In case the above method does not work, proceed as follows:
1. Click on **Tools** > **Boards** > **Boards Manager...**
2. Search for **esp32** . ![Boards](assets/boards.png)
3. Install **esp32 by Espressif Systems** ![Install](assets/install.png)
4. Wait for the installation to complete. ![Done](assets/done.png)

Once the installation is complete, you can write code for your board.

 
