#ifndef Window1_H
#define Window1_H

#include "BaseWindow.h"
#include "IKeyHandle.h"
//#include "IWindow.h"
#include "WindowManager.h"
#include "Window2.h"
#include <HardwareSerial.h>

#pragma once
class Window1 : public BaseWindow//, public IKeyHandle // << dynamic_cast' not permitted with -fno-rtti
{
public:
	Window1(WindowManager *windowManager) : BaseWindow(windowManager) {};
	virtual ~Window1();
	void Show() override;
	void ButtonPressed(int button) override;
//protected:
	//WindowManager windowManger;
};

#endif