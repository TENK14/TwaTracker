#include "BaseWindow.h"



BaseWindow::BaseWindow(WindowManager *_windowManager)
{
	Serial.println("BaseWindow::BaseWindow()");

	windowManager = _windowManager;
}


BaseWindow::~BaseWindow()
{
	Serial.println("BaseWindow::~BaseWindow()");
}

void BaseWindow::ButtonPressed(Button button)
{
	Serial.println("BaseWindow::ButtonPressed()");

	switch (button)
	{
	case None:
		break;
	case Up:
		break;
	case Down:
		break;
	case Left:
		break;
	case Right:
		break;
	default:
		break;
	}
}
