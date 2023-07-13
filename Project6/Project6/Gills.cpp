#include "Gills.h"
#include <iostream>


void Gills::setHasGills(bool gill)
{
	hasGills = gill;
}

bool Gills::getHasGills()
{
	return hasGills;
}

void Gills::printGillsInfo()
{
	std::cout << "Has Gills: " << std::boolalpha << Gills::getHasGills() << std::endl;
}

Gills::Gills()
{
	hasGills = false;
}

Gills::Gills(bool gill)
{
	hasGills = gill;
}