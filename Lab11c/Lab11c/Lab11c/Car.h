#pragma once

#include "Engine.h"
#include "Tire.h"
#include "Door.h"
class Car
{
private:
	Engine engineObject;
	Tire tireObjects[4];
	Door driverDoor;
	Door passengerDoor;

public:
	void beginDrive();

	Car();
	Car(double, std::string);
	void printInfo();
};

