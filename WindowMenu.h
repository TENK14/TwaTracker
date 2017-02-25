#pragma once

#ifndef WindowMenu_H
#define WindowMenu_H

#include "BaseWindow.h"
#include "IKeyHandle.h"
#include "WindowManager.h"

class WindowMenu :
	public BaseWindow
{
public:
	WindowMenu(WindowManager *windowManager) : BaseWindow(windowManager) {};
	virtual ~WindowMenu();
	void Show() override;
	void ButtonPressed(int button) override;
//protected:
	//WindowManager windowManger;
};

#endif //!WindowMenu_H