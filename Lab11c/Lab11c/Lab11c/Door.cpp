#include "Door.h"
#include <iostream>

void Door::openDoor()
{
	std::cout << "Opening driver's side door..." << std::endl;
	doorOpen = true;
}

void Door::closeDoor()
{
	std::cout << "Closing driver's side door..." << std::endl;
	doorOpen = false;
}

bool Door::isOpen(bool open)
{
	doorOpen = open;
	return doorOpen;
}

Door::Door()
{
	doorOpen = false;
}