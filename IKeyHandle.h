#pragma once

#ifndef IKeyHandle_H
#define IKeyHandle_H


class IKeyHandle {

public:
	virtual ~IKeyHandle() {};
	virtual void ButtonPressed(int button) = 0;
	//virtual void ButtonPressed(Button button) = 0;
};
#endif