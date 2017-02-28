#pragma once

#ifndef SensorProvider_H
#define SensorProvider_H

// ------------ TEMPERATURE AND PRESSURE SENSOR ---------------- // 
#include "BMP180.h" // Pressure and Temperature sensor ///////////////////////////////////////////////
#include "cactus_io_BME280_I2C.h"

// ---------------------- DISPLAY ------------------------------ // 
//#include <U8glib.h> // Display
#include "OzOLED.h" // max positions are [ROW=7,COL=16] for text
//#include <Adafruit_GFX.h>
//#include <Adafruit_SSD1306.h>


// -------------------- SD CARD ---------------------------- //
#include <Wire.h>
//#include <SPI.h> // SD card communication protocol (like I2C) from Arduino IDE/lib/WIFI
//#include <SD.h>  // SD card from Arduino IDE/lib/SD
#include <SdFat.h> // pouzivano s 328P, pokusy o zprovozneni s 1284P

/**
// V c:\Program Files (x86)\Arduino\hardware\mighty-1284p-1.6.3\avr\libraries\SD\examples\ReadWrite\ by to mìlo dle diskuzí fungovat pøi aktivních tìchto nastaveních

V je soubor Sd2PinMap.h a v nem by mela byt rozsirena podminka o 1284P, coz je: #elif defined(__AVR_ATmega1284__) || defined(__AVR_ATmega1284P__) || defined(__AVR_ATmega644__)  || defined(__AVR_ATmega644A__) || defined(__AVR_ATmega644P__)  || defined(__AVR_ATmega644PA__)

Dale v kodu by melo byt, coz mam:

// Kvuli SD shieldu
#define __AVR_ATmega1284P__
#define MIGHTY_1284P_VARIANT
....
//uint8_t const SS_PIN = SS;// 4;// SS;
//uint8_t const MOSI_PIN = MOSI;// 5;// MOSI;
//uint8_t const MISO_PIN = MISO;// 6;// MISO;
//uint8_t const SCK_PIN = SCK
....
pinMode(10, OUTPUT);

pinMode(chipSelect, OUTPUT);
digitalWrite(chipSelect, HIGH);
/**/
// ---------------------- GPS ------------------------------ //
//#include <Adafruit_GPS.h>
#include "TinyGPS.h"
#include <SoftwareSerial.h>


// TIMERS
#define MS_READ_BMP180 5000
#define MS_READ_BME280 5000
//#define MS_DRAW 1000
#define MS_WRITE_DATA2SD 10000

class SensorProvider
{
public:
	SensorProvider(uint32_t actualTime_ms);
	~SensorProvider();
private:
	// Timers for reading and writing
	uint32_t timerReadBMP180;
	uint32_t timerReadBME280;
	uint32_t timerDraw;
	uint32_t timerWriteData2SD;

	/// ---------- BMP180 ------------ /// /////////////////////////// !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
	///Adafruit_BMP085_Unified bmp = Adafruit_BMP085_Unified(10085);
	// Store an instance of the BMP180 sensor.
	BMP180 barometer;
	float temperature, pressure, altitude, humidity;
	// Store the current sea level pressure at your location in Pascals.
	float seaLevelPressure = 101325;

	//BME280_I2C bme(0x76);  // I2C using address 0x76
	BME280_I2C bme;  // I2C using address 0x76
};

#endif

