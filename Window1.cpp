#include "Window1.h"



//Window1::Window1(WindowManager windowManager)
//{
//	base
//}


Window1::~Window1()
{
	Serial.println("Window1::~Window1()");
}

void Window1::ButtonPressed(int button)
{
	Serial.print("Window1::ButtonPressed(");
	Serial.print(button);
	Serial.println(")");

	switch (button)
	{
	case 1:
		Serial.println(Button::Up);
		break;
	case 2:
		Serial.println(Button::Down);
		break;
	case 3:
		Serial.println(Button::Left);
		break;
	case 4:
		Serial.println(Button::Right);

		//Window2 *nextWindow = new Window2(windowManager);
		//windowManager->SetCurrentWindow(nextWindow);
		windowManager->SetCurrentWindow(new Window2(windowManager));
		break;
	default:
		break;
	}
}

void Window1::Show()
{
	Serial.println("Window1::Show()");
}
