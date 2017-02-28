
#include <cactus_io_BME280_I2C.h>
#include "BMP180.h" // Pressure and Temperature sensor ///////////////////////////////////////////////
#include "OzOLED.h" // max positions are [ROW=7,COL=16] for text
#include <Wire.h>
#include <SdFat.h> // pouzivano s 328P, pokusy o zprovozneni s 1284P

#include "WindowManager.h"
#include "WindowMenu.h"

// Kvuli SD shieldu
#define __AVR_ATmega1284P__
#define MIGHTY_1284P_VARIANT

WindowManager *windowManager;
WindowMenu *windowMenu;

String readString;
void setup()
{
	Serial.begin(9600);

	Serial.println("setup");

	/* add setup code here */
	windowManager = new WindowManager(millis());
	windowMenu = new WindowMenu(windowManager);

	windowManager->SetCurrentWindow(windowMenu);

}

void loop()
{
	//Serial.println("loop");
	/* add main program code here */

	while (Serial.available()) {
		delay(3);  //delay to allow buffer to fill 
		if (Serial.available() >0) {
			char c = Serial.read();  //gets one byte from serial buffer
			readString += c; //makes the string readString
		}
	}

	/*if (readString.length() > 0) {
	Serial.println(readString);
	readString = "";
	}*/

	/**/
	windowManager->SetPressedButton(Button::None);

	if (readString.length() > 0)
	{
		Serial.println(readString);
		//int sensorValue = analogRead(A0);
		int sensorValue = readString.toInt();

		switch (sensorValue)
		{
		case 1:
			Serial.println("UP");
			windowManager->SetPressedButton(Button::Up);
			break;
		case 2:
			Serial.println("DOWN");
			windowManager->SetPressedButton(Button::Down);
			break;
		case 3:
			Serial.println("LEFT");
			windowManager->SetPressedButton(Button::Left);
			break;
		case 4:
			Serial.println("RIGHT");
			windowManager->SetPressedButton(Button::Right);
			break;
		default:
			Serial.println("DEFAULT");
			Serial.println(sensorValue);
			break;
		}

		readString = "";
	}
	windowManager->Show(millis());
	/**/
	//	delay(2000);
  /* add main program code here */

}
