#include "Car.h"

void Car::beginDrive()
{
	driverDoor.openDoor();
	engineObject.startEngine();
	passengerDoor.windowObject.rollDown();
	tireObjects[1].inflateTire(32);
	driverDoor.closeDoor();
	engineObject.accelerate();
}

Car::Car()
{
	engineObject.setEngineVolume(0);
	tireObjects[1].setTireSize("n/a");
}

Car::Car(double vol, std::string size)
{
	engineObject.setEngineVolume(vol);
	tireObjects[1].setTireSize(size);
	
}

void Car::printInfo()
{
	engineObject.printEngineInfo();
	tireObjects[1].printTireInfo();
}