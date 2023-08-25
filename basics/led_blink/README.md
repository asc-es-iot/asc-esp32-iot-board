# Simple LED Blink

## Introduction

The LED Blink program is equivalent to the traditional "Hello World!" program that most coders begin their journey with.

In this program, we will make one of the onboard LEDs blink. You can choose either LED 1 or LED 2. It doesn't really make a difference. 
Note that the PIN numbers for the LEDs are as follows:
- LED1 - GPIO pin 33 
- LED2 - GPIO pin 4

Here, GPIO stands for "General Purpose Input Output". This means that the pin can be used for either output or input. We will have to specify this in our program.

## Equipment Required

| Name  | Specification | Quantity |
| -- | -- | -- |
| ASC CSE IoT 2.0 Board | - | 1 |
| USB Type C Cable | Data cable | 1 |
| Personal Computer | Arduino IDE Installed | 1 |

## Connections

No external connections to the board are required for this program. Just connect your board to your PC. Refer to [this](../README.md) if you are facing difficulties.

## Code Explanation 
This is an explanation of the code in `led_blink.ino`.

### Libraries
This is a very simple program. We don't need any external libraries.

### Setup
```
clike
void setup() { // runs once
  pinMode(33, OUTPUT);
}
```

The code in `setup()` is to tell the board how to prepare itself for the current program. Every time the board is connected to power, this code is executed first. 
`pinMode()` is a function that assigns pins roles ie. whether they will be input pins or output pins. It accepts two arguments:
- Pin number
- Whether it is an INPUT or OUTPUT Pin. INPUT and OUTPUT are predefined.

### Main Loop

```
clike
void loop() {
  digitalWrite(33, HIGH); // 33 is held HIGH
  delay(500);             // we wait for 500ms
  digitalWrite(33, LOW);  // 33 is held LOW
  delay(500);             // we wait for 500ms
} 
```

The `loop()` function runs repeatedly and keeps executing the statements inside it.

`digitalWrite()` writes HIGH or LOW to the specified Pin. HIGH refers to a higher potential difference like 5 volts, and low refers to a lower potential difference like 0 volts (Potential difference is measured with respect to ground). 
It accepts two arguments:
- Pin number
- What to write - HIGH or LOW. HIGH and LOW are both predefined.

`delay()` accepts one argument, which is the amount of time in milliseconds that the program has to wait before it can proceed to the next statement.

Thus, we blink the onboard LED twice every second.

## Conclusion

Yay! You've written your first program for embedded systems! If you're up for a challenge, check out the **Extras** section.   
When you're ready, head over to the [README](../button/README.md) for the onboard button to get started with handling inputs.

## Extras

You could modify the LED blink program to 
1. Make the two LEDs on the board blink in unison.
1. Make the two LEDs on the board blink alternately.
