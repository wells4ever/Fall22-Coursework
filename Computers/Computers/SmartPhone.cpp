#include "SmartPhone.h"
void SmartPhone::setName(string sName)
{
	name = sName;
}
void SmartPhone::setYear(int sYear)
{
	year = sYear;
}
void SmartPhone::setHPorts(int sPort)
{
	nHeadphonePorts = sPort;
}

void SmartPhone::printInfo()
{
	Computers::printInfo();
	cout << "No. of Headphone Ports: " << nHeadphonePorts << "\t CPU FLOPS: " << cpuObject.FLOPS << endl;

}

bool SmartPhone::operator == (SmartPhone someOtherPhone)
{
	if (name == someOtherPhone.name and year == someOtherPhone.year)
	{
		return true;
	}
	else { return false; }
}

SmartPhone::SmartPhone()
{
	name = "n/a";
	year = 0;
	nHeadphonePorts = 0;
	cpuObject.FLOPS = 0;
}
SmartPhone::SmartPhone(string sName, int sYear, int sPort, int cpuFLOP)
{
	name = sName;
	year = sYear;
	nHeadphonePorts = sPort;
	cpuObject.FLOPS = cpuFLOP;
}