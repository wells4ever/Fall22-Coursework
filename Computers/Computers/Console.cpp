#include "Console.h"
void Console::setName(string cName)
{
	name = cName;
}
void Console::setYear(int cYear)
{
	year = cYear;
}
void Console::setCSlots(int cSlots)
{
	nControllerSlots = cSlots;
}

void Console::printInfo()
{
	Computers::printInfo();
	cout << "No. of Controller Slots: " << nControllerSlots << "\tCPU Flops: " << cpuObject.FLOPS << endl;
}

Console::Console()
{
	name = "n/a";
	year = 0;
	nControllerSlots = 0;
	cpuObject.FLOPS = 0;
}
Console::Console(string cName, int cYear, int cSlots, int cpuFLOP)
{
	name = cName;
	year = cYear;
	nControllerSlots = cSlots;
	cpuObject.FLOPS = cpuFLOP;
}