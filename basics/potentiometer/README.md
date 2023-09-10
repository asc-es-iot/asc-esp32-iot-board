# Reading from a Potentiometer

## Introduction

In this program, we are going to read analog input from the Potentiometer on pin 36.

A Potentiometer is a small electronic component that acts as a variable resistor. It allows you to control the amount of electrical resistance in a circuit by adjusting a physical knob or slider. This can be useful for tasks like adjusting the brightness of an LED, volume control in audio devices, or setting reference voltages for sensors. 

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
  pinMode (36, INPUT);
  Serial.begin(115200);
}
```
As always, we use `pinMode()` to specify the role of the pin, in this case, pin 39, which is connected to the onboard LDR.
We use `Serial.begin()` to initialize Serial communication through the USB port at a baud rate ) of `115200`. In simple terms, baud rate defines the speed of communication.

```
void loop()
{
  int analogValue = analogRead(36);
  Serial.println(analogValue);
}
```
We read from the Potentiometer pin using `analogRead()` and put that data into the integer variable `analogValue`. Then we print this value to the Serial terminal. This is visible in the Serial Monitor. You can use the Serial Plotter to visualize the data.
## Conclusion

We have written a program that reads analog input from the onboard potentiometer and prints it onto the screen. If you're up for a challenge, check out the **Extras** section.   

## Extras

You could modify the Potentiometer program to 
1. Detect when the Potentiometer Knob is at the middle of its range.
2. Display the angle at which the potentiometer knob is turned.
