#include "Animal.h"
#include <iostream>

void Animal::setAge(int aAge)
{
	age = aAge;
}
void Animal::setName(std::string aName)
{
	name = aName;
}
std::string Animal::getName()
{
	return name;
}
int Animal::getAge()
{
	return age;
}
void Animal::printInfo()
{
	std::cout << "Name: " << getName() << "\nAge: " << getAge() << std::endl;
}

Animal::Animal()
{
	name = "N/A";
	age = 0;
}
Animal::Animal(std::string aName, int aAge)
{
	name = aName;
	age = aAge;
}

