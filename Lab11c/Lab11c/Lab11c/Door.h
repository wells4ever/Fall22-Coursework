#pragma once

#include "Window.h"

class Door
{
public:

	Window windowObject;
	bool doorOpen;


	void openDoor();
	void closeDoor();
	bool isOpen(bool);

	Door();

};

