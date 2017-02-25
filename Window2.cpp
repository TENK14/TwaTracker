#include "Window2.h"



Window2::~Window2()
{
	Serial.println("Window2::~Window2()");
}

void Window2::ButtonPressed(int button)
{
	Serial.print("Window2::ButtonPressed(");
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

		//Window1 *nextWindow = new Window1(windowManager);
		//windowManager->SetCurrentWindow(nextWindow);
		windowManager->SetCurrentWindow(new Window1(windowManager));
		break;
	default:
		break;
	}
}

void Window2::Show()
{
	Serial.println("Window2::Show()");
}
