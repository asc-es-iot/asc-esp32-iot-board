/*

**This code was taken from one of the examples in the Arduino IDE. It has been modified to suit our context.**
-----------------------------------------------
  Button

  created 2005
  by DojoDave <http://www.0j0.org>
  modified 30 Aug 2011
  by Tom Igoe

  This example code is in the public domain.

  https://www.arduino.cc/en/Tutorial/BuiltInExamples/Button
-----------------------------------------------------------------
  Modified to suit ASC CSE IoT 2.0 by @ananthakrishna7
*/

// constants won't change. They're used here to set pin numbers:
const int buttonPin = 32;  // the number of the onboard pushbutton pin
const int ledPin = 33;    // the number of the onboard LED pin

// variables will change:
int buttonState = 0;  // variable for reading the pushbutton status

void setup() {
  // initialize the LED pin as an output:
  pinMode(ledPin, OUTPUT);
  // initialize the pushbutton pin as an input:
  pinMode(buttonPin, INPUT);
}

void loop() {
  // read the state of the pushbutton value:
  buttonState = digitalRead(buttonPin);

  // check if the pushbutton is pressed. If it is, the buttonState is LOW:
  if (buttonState == LOW) {
    // turn LED on:
    digitalWrite(ledPin, HIGH);
  } else {
    // turn LED off:
    digitalWrite(ledPin, LOW);
  }
}
