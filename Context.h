#pragma once
// http://andybrown.me.uk/2011/01/15/the-standard-template-library-stl-for-avr-with-c-streams/

//#include <map>
//#include <HashMap.h>

#ifndef Context_H
#define Context_H

#include <HardwareSerial.h>

//CreateHashMap(params, string, string, 10)

class Context
{
public:
	Context();
	virtual ~Context();
	int i;
	//std::map<std::string, std::string> Parameters;
	//string params[10][2];

	/*int pinMatrix[3][3] = {
		{ 2,  3,  4 },
		{ 5,  6,  7 },
		{ 8,  9, 10 }*/
};

#endif // !Context_H

