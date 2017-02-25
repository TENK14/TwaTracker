#include "WindowMenu.h"



//WindowMenu::WindowMenu(WindowManager *windowManager)
//{
//	base
//}


WindowMenu::~WindowMenu()
{
	Serial.println("WindowMenu::~WindowMenu()");
}

void WindowMenu::ButtonPressed(int button)
{
	Serial.print("WindowMenu::ButtonPressed(");
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

		// Cross init problem
		//Window2 *nextWindow = new Window2(windowManager);
		//windowManager->SetCurrentWindow(nextWindow);

		// OK
		//windowManager->SetCurrentWindow(new Window2(windowManager));
		break;
	default:
		break;
	}
}

void WindowMenu::Show()
{
	Serial.println("Window1::Show()");
}
