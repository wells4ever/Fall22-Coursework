#include "Tire.h"
#include <iostream>

void Tire::inflateTire(int psi)
{
	std::cout << "Inflating tire to " << psi << " psi" << std::endl;
}

void Tire::setTireSize(std::string size)
{
	tireSize = size;
}

Tire::Tire()
{
	tireSize = "n / a";
}

Tire::Tire(std::string size)
{
	tireSize = size;
}


void Tire::printTireInfo()
{
	std::cout << "Tire size is: " << tireSize << std::endl;
}