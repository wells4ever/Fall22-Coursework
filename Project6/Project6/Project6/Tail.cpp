#include "Tail.h"
#include <iostream>
void Tail::setHasTail(bool tail)
{
	hasTail = tail;
}
void Tail::setHasTailFur(bool fur)
{
	hasTailFur = fur;
}

bool Tail::getHasTail()
{
	return hasTail;
}
bool Tail::getHasTailFur()
{
	return hasTailFur;
}

void Tail::printTailInfo()
{
	std::cout << std::boolalpha << "Has Tail: " << getHasTail() << " Has Fur/Hair on tail: " << getHasTailFur() << std::endl;
}

Tail::Tail()
{
	hasTail = false;
	hasTailFur = false;
}
Tail::Tail(bool tail, bool fur)
{
	hasTail = tail;
	hasTailFur = fur;
}