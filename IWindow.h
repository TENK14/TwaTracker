#pragma once

#ifndef IWindow_H
#define IWindow_H

#include "IKeyHandle.h"

class IWindow : public IKeyHandle
{
public:
	//IWindow();
	//virtual ~IWindow();
	virtual void Show();
};

#endif

