#include "Store.h"

void Store::setName(std::string sName)
{
	name = sName;
}
void Store::setRev(double sRev)
{
	revenue = sRev;
}

std::string Store::getName()
{
	return name;
}
double Store::getRev()
{
	return revenue;
}

Store::Store()
{
	name = "N/A";
	revenue = 0.00;
}
Store::Store(std::string sName, double sRev)
{
	name = sName;
	revenue = sRev;
}