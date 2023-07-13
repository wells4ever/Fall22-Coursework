#include "Dog.h"
#include <iostream>

void Dog::printInfo()
{
	Animal::printInfo();
	lungsObject.printLungInfo();
	tailObject.printTailInfo();

}

Dog::Dog()
{
	Animal::setName("N/A");
	Animal::setAge(0);
	lungsObject.setHasLungs(false);
	tailObject.setHasTail(false);
	tailObject.setHasTailFur(false);
}
Dog::Dog(std::string aName, int aAge, bool lung, bool tail, bool fur)
{
	Animal::setName(aName);
	Animal::setAge(aAge);
	lungsObject.setHasLungs(lung);
	tailObject.setHasTail(tail);
	tailObject.setHasTailFur(fur);
}
