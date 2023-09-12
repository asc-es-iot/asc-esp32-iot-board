# Reading input from a button

## Introduction

This is a demonstration of handling digital inputs on an IoT device using the onboard button and LED.

In this program, we will make one of the onboard LEDs respond to a press of the onboard button. You can choose either LED 1 or LED 2. 
Note that the PIN numbers for the LED and the pushbutton (SW) are as follows:
- LED1 - GPIO pin 33 
- SW - GPIO pin 32

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
This is an explanation of the code in `button.ino`.

### Libraries
This is a very simple program. We don't need any external libraries.

### Global variables
```
const int buttonPin = 32;  
const int ledPin = 33;   
int buttonState = 0;  

```

We define these global variables at the beginning of the program.
### Setup
```
void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT);
}
```

The code in `setup()` is to tell the board how to prepare itself for the current program. Every time the board is connected to power, this code is executed first. 
`pinMode()` is a function that assigns pins roles ie. whether they will be input pins or output pins. It accepts two arguments:
- Pin number
- Whether it is an INPUT or OUTPUT Pin. INPUT and OUTPUT are predefined.

### Main Loop

```
void loop() {

  buttonState = digitalRead(buttonPin);
  if (buttonState == LOW) {
    digitalWrite(ledPin, HIGH);
  } else {
    digitalWrite(ledPin, LOW);
  }
}
```

The `loop()` function runs repeatedly and keeps executing the statements inside it.

`digitalRead()` reads digital input from the specified pin.  It accepts only one argument: the pin number.

In our case, a value of LOW indicates that the button is pressed. This depends on how the circuit is connected. Our circuit is soldered onto the board. In a different arrangement, we would read HIGH when the button is depressed.

`digitalWrite()` writes HIGH or LOW to the specified Pin. HIGH refers to a higher potential difference like 5 volts, and low refers to a lower potential difference like 0 volts (Potential difference is measured with respect to ground). 
It accepts two arguments:
- Pin number
- What to write - HIGH or LOW. HIGH and LOW are both predefined.

Thus, we turn the onboard LED on whenever the button is depressed.

## Conclusion

In this section, we have learnt how to get user input. If you're up for a challenge, check out the **Extras** section.   
When you're ready, head over to the [README](../potentiometer/README.md) for the potentiometer to get started with reading analog inputs.

## Extras

You could modify the button program to 
1. Make the pushbutton act as a switch. The LED should stay ON after pressing and releasing the button. It should turn off only when the button is pressed once more.
2. Write the state of the button to the Serial output (refer to the potentiometer README for info about Serial communications).
