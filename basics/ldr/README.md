# Reading from an LDR

## Introduction

In this program, we are going to read analog input from the LDR on pin 39.

LDR is short for Light Dependent Resistor. It is a component whose resistance changes based on the intensity of light shined on it. It is a passive components i.e., it does not supply a voltage. A photodiode, on the other hand, is an active component as it supplies a voltage when light falls on it. An LDR and a Photodiode are not the same. 
You can read more about LDRs [here](https://www.friendlywire.com/tutorials/ldr/).
## Equipment Required

| Name  | Specification | Quantity |
| -- | -- | -- |
| ASC CSE IoT 2.0 Board | - | 1 |
| USB Type C Cable | Data cable | 1 |
| Personal Computer | Arduino IDE Installed | 1 |

## Connections

No external connections to the board are required for this program. Just connect your board to your PC. Refer to [this](../README.md) if you are facing difficulties.

## Code Explanation 

```
void setup()
{
  pinMode (39, INPUT);
  Serial.begin(115200);
}
```

As always, we use `pinMode()` to specify the role of the pin, in this case, pin 39, which is connected to the onboard LDR.
We use `Serial.begin()` to initialize Serial communication through the USB port at a baud rate of `115200`.

```
void loop()
{
  int ldrReading = analogRead(39);
  Serial.println(ldrReading);
  delay(500);
}
```

We read from the LDR pin using `analogRead()` and put that data into the integer variable `ldrReading`. Then we print this value to the Serial terminal. This is visible in the Serial Monitor. You can use the Serial Plotter to visualize the data.
## Conclusion

We have written a program that reads analog input from the onboard LDR and prints it onto the screen. If you're up for a challenge, check out the **Extras** section.   

## Extras

You could modify the LDR program to 
1. Make a smart lighting system. Turn the onboard LED of or off depending on the amount of ambient light. (*Hint*: LDR Readings up to a specific value can be considered as "dark")
1. Make a simple Luxmeter that tells you how bright it is in words. Eg. "dark", "faint light", etc. (*Hint*: Reducing the delay will make the readings appear more continuous. )
