#include "Lungs.h"
#include <iostream>

void Lungs::setHasLungs(bool lung)
{
	hasLungs = lung;
}

bool Lungs::getHasLungs()
{
	return hasLungs;
}

void Lungs::printLungInfo()
{
	std::cout << std::boolalpha << "Has Lungs: " << getHasLungs() << endl;
}

Lungs::Lungs()
{
	hasLungs = false;
}
Lungs::Lungs(bool lung)
{
	hasLungs = lung;
}