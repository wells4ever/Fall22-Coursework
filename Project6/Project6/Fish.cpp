#include "Fish.h"
#include <iostream>

void Fish::printInfo()
{
	Animal::printInfo();
	gillsObject.printGillsInfo();
	tailObject.printTailInfo();
}

Fish::Fish()
{
	Animal::setName("N/A");
	Animal::setAge(0);
	gillsObject.setHasGills(false);
	tailObject.setHasTail(false);
	tailObject.setHasTailFur(true);

}
Fish::Fish(std::string aName, int aAge, bool gill, bool tail, bool fur)
{
	Animal::setName(aName);
	Animal::setAge(aAge);
	gillsObject.setHasGills(gill);
	tailObject.setHasTail(tail);
	tailObject.setHasTailFur(fur);
}
