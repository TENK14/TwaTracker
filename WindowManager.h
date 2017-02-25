#pragma once

#ifndef WindowManager_H
#define WindowManager_H

#include "IWindow.h"
#include "Button.h"
#include "IKeyHandle.h"
#include <HardwareSerial.h>

class WindowManager
{
public:
	WindowManager(uint32_t actualTime_ms);
	virtual ~WindowManager();
	void SetCurrentWindow(IWindow *window);
	void Show(uint32_t actualTime_ms);
	void KeysHandle();
	Button GetPressedButton();
	void SetPressedButton(Button btn);
protected:
	IWindow *window = NULL;
	Button pressedButton;
	uint32_t timerToShow;// = millis();
	#define MS_SHOW 5000
};

#endif