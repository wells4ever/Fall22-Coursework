#include "Computers.h"
void Computers::setName(string cName)
{
	name = cName;
}
void Computers::setYear(int cYear)
{
	try
	{
		if (cYear < 1971)
			throw cYear;
	}
	catch (int thrownYear)
	{
		cout << "The first computer was released in 1971, setting year to 1971." << endl;
		year = 1971;
	}
}

void Computers::printInfo()
{
	cout << name << " " << year;
}

Computers::Computers()
{
	name = "n/a";
	year = 0;
}
Computers::Computers(string cName, int cYear)
{
	name = cName;
	year = cYear;
}