#include "SensorProvider.h"



SensorProvider::SensorProvider(uint32_t actualTime_ms)
{
	timerReadBMP180 = actualTime_ms;
	timerReadBME280 = actualTime_ms;
	timerDraw = actualTime_ms;
	timerWriteData2SD = actualTime_ms;

	bme = BME280_I2C(0x76);
}


SensorProvider::~SensorProvider()
{
}
