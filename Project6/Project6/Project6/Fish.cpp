#include "Fish.h"
#include <iostream>

void Fish::printInfo()
{
	gillsObject.printGillsInfo();
	tailObject.printTailInfo();
}

Fish::Fish()
{
	setName = "N/A"
}
Fish::Fish(std::string name, int age, bool gill, bool tail, bool fur)
{

}
