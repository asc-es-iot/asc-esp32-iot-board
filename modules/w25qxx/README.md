# W25QXXX - SPI Flash Memory

## Connections:

1. Connect the W25QXX module to the SPI pins
2. Ensure that all the headers for the SPI pins have been connected

## Usage:

1. Connect the development board to your computer using the USB cable
2. Install the `SPIMemory` library from the library manager
2. Upload `w25qxx.ino` to the board, using the Arduino IDE
3. Open the Serial Monitor in the IDE, and set the baud rate to 115200
4. Enter <pre>w <i>string</i></pre> into the terminal, to save the string
into flash memory
5. Once confirmation appears on the Serial console, disconnect the board and power it off
6. Since flash memory is secondary memory, the data should remain on the board
7. Connect the board once again, and open Serial Monitor
8. Enter `r` in the monitor, to request the development board to read the data stored
9. Verify that the data retrieved matches the data that was entered

## Code Explanation

> [!NOTE]
> - Since the module is a secondary storage module, it should retain information
> written to it even when power is disconnected
> - The flash module requires that to write to a certain address in the module, 
> the existing data in that address must be erased initially


```arduino
SPIClass hspi(HSPI);
SPIFlash flash(15, &hspi);;

uint32_t addr = 0x123;
```
The ESP32 has 4 SPI peripherals, SPI0, SPI1, HSPI and VSPI. <br>
SPI0 and SPI1 are used internally, to communicate to the built-in flash memory.
Our development board connects peripherals to HSPI.

`SPIClass` is a class which represents an SPI interface. It's constructore takes
the descriptor for that interface, which in this case has been provided by the
ESP32 library.

`SPIFlash` is the class which actually handles the flash operations. The arguments for its constructor
are the slave select pin number and the address of the `SPIClass` it's required to used.

`addr` is the address within the flash memory, to be used for read/write operations.
It has been set to an arbitrary value of `0x123`, feel free to modify this value,
to read/write data to a different address.

```arduino
void readStr() {
        String s;
        if (flash.readStr(addr, s)) {
                Serial.println("Read '" + s + "'");
  } else {
                Serial.println("ERROR: Couldn't read array");
        }
}
```

`readStr` is a utility function to read from the flash memory. It makes use of the
`readStr` function provided by the `flash` object. Arguments to this function
are the address to read from, and the string to store the information in.
This function returns `TRUE` if the read operation succeeded and `FALSE` otherwise.

```arduino
void writeStr(String s) {
        s.trim();
  flash.eraseSection(addr, s.length() + 1);
  Serial.println("Writing '" + s + "' ...");
        if (flash.writeStr(addr, s)) {
                Serial.println("LOG: Done");
        } else {
                Serial.println("ERROR: Couldn't write");
        }
}
```
`writeStr` is a utility function similar to `readStr`, responsible for writing a string.
1. `s.trim()` removes spaces from the left and right ends of the string
2. `flash.eraseSelection(addr, s.length() + 1)` starts from the address to which 
we plan to write and erases sufficient number of bytes in the flash memory to store the string. 
3. `flash.writeStr(addr, s)` writes the string `s` to address `addr`, and returns
a boolean value describing success or failure, similar to readStr.

```arduino
void loop() {
        if (Serial.available()) {
                String str = Serial.readString();
                char op = str[0];
                switch(op) {
                case 'r':
                        readStr();
                        break;
                case 'w':
                        str.remove(0, 2);
                        writeStr(str);
                        break;
                default:
                        Serial.println("'r' to read string\n'w [str]' to write [str] to memory");
                }
        }
}
```
In the main loop:
1. Check for Serial input
2. If input is available, read the string, identify if the user wants to read or write
    1. If **`read`**, call the `readStr` function
    2. If **`write`**, retrieve the string to be written from Serial, and call the `writeStr` function
    3. If **`invalid`** input, print the menu

