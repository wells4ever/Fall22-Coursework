#include <iostream>
#include "FullTime.h"
#include "PartTime.h"

using namespace std;

int main()
{
	PartTime* aPartTimer = new PartTime(2367, 45, 20);
	FullTime* aFullTimer = new FullTime(1289, 45000, 15000);

	aPartTimer->printInfo();
	aFullTimer->printInfo();
}