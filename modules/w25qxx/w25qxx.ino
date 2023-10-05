#include <SPIMemory.h>

#include "soc/soc.h"
#include "soc/rtc_cntl_reg.h"

SPIClass hspi(HSPI);
SPIFlash flash(15, &hspi);;

uint32_t addr = 0x123;

void setup() {
  WRITE_PERI_REG(RTC_CNTL_BROWN_OUT_REG, 0); //disable   detector

	hspi.begin();

	if (!flash.begin()) {
		Serial.println("Could not init chip!");
    while(1){};
	}

	Serial.begin(115200);
	Serial.println("");
}

void readStr() {
	String s;
	if (flash.readStr(addr, s)) {
		Serial.println("Read '" + s + "'");	
  } else {
		Serial.println("ERROR: Couldnt read array");
	}
}

void writeStr(String s) {
	s.trim();
  flash.eraseSection(addr, s.length() + 1);
  Serial.println("Writing '" + s + "' ...");
	if (flash.writeStr(addr, s)) {
		Serial.println("LOG: Done");
	} else {
		Serial.println("ERROR: Couldnt write");
	}
}

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
