#pragma once

#ifndef BaseWindow_H
#define BaseWindow_H

#include "WindowManager.h"
#include "IWindow.h"
#include "IKeyHandle.h"
#include "Button.h"
#include <HardwareSerial.h>

class BaseWindow : public IWindow, public IKeyHandle
{
public:
	BaseWindow(WindowManager *windowManager);
	virtual ~BaseWindow();
	virtual void Show() = 0;
	virtual void ButtonPressed(Button button);
protected:
	WindowManager *windowManager;
};

#endif // !BaseWindow_H




