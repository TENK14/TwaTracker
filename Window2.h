#pragma once

#ifndef Window2_H
#define Window2_H

#include "BaseWindow.h"
#include "IKeyHandle.h"
//#include "IWindow.h"
#include "WindowManager.h"
#include "Window1.h"
#include <HardwareSerial.h>

class Window2 : public BaseWindow
{
public:
	Window2(WindowManager *windowManager) : BaseWindow(windowManager) {};
	virtual ~Window2();

	void Show() override;
	void ButtonPressed(int button) override;
};

#endif

