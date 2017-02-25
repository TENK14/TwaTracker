#include "WindowManager.h"



WindowManager::WindowManager(uint32_t actualTime_ms)
{
	Serial.println("WindowManager::WindowManager()");

	pressedButton = Button::None;
	timerToShow = actualTime_ms;
}


WindowManager::~WindowManager()
{
	Serial.println("WindowManager::~WindowManager() ");
}

void WindowManager::SetCurrentWindow(IWindow *_window)
{
	Serial.println("WindowManager::SetCurrentWindow()");
	/**/
	if (window != NULL)
	{
		delete window;
		window = NULL;
		Serial.println("-- current window was deleted");
	}
	/**/
	window = _window;
}

void WindowManager::Show(uint32_t actualTime_ms)
{

	// if millis() or timer wraps around, we'll just reset it
	if (timerToShow > actualTime_ms)  timerToShow = actualTime_ms;

	// approximately every 2 seconds or so, print out the current stats
	if (actualTime_ms - timerToShow <= MS_SHOW) // 5s
	{
		return;
	}
	timerToShow = actualTime_ms; // reset the timer

	Serial.println("WindowManager::Show()");

	window->Show();
}

void WindowManager::KeysHandle()
{
	//Serial.println("WindowManager::KeysHandle()");
	//try
	//{
		// dynamic_cast' not permitted with -fno-rtti
		/*
		IKeyHandle* obj = dynamic_cast<IKeyHandle*>(window);
		if (pressedButton != Button::None)
		{
			obj->ButtonPressed(pressedButton);
		}
		*/

		if (pressedButton != Button::None)
		{
			window->ButtonPressed(pressedButton);
		}
	/*}
	catch (int e)
	{
		
	}*/
	
}

Button WindowManager::GetPressedButton()
{
	Serial.println("WindowManager::GetPressedButton()");

	return pressedButton;
}
void WindowManager::SetPressedButton(Button btn)
{
	//Serial.println("WindowManager::SetPressedButton()");

	pressedButton = btn;
	KeysHandle();
}

