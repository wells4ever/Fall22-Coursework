#include "Personal_Computer.h"
void Personal_Computer::setName(string pcName)
{
	name = pcName;
}
void Personal_Computer::setYear(int pcYear)
{
	try
	{
		if (pcYear < 1971)
		{
			throw pcYear;
		}
		else {
			year = pcYear;
		}
	}
	catch (int thrownYear)
	{
		cout << "The first computer was released in 1971, setting year to 1971." << endl;
		year = 1971;
	}
	
 
}
void Personal_Computer::setPorts(int pcPort)
{
	nUSBPorts = pcPort;
}

void Personal_Computer::printInfo()
{
	Computers::printInfo();
	cout << "No. of USB Ports:" << nUSBPorts << "\t CPU FLOPS:" << cpuObject.FLOPS << endl;
}

Personal_Computer::Personal_Computer()
{
	name = "N/A";
	year = 0;
	nUSBPorts = 0;
	cpuObject.FLOPS = 0;
}

Personal_Computer::Personal_Computer(string pcName, int pcYear, int pcPort, int cpuFLOP)
{
	name = pcName;
	try
	{
		if (pcYear < 1971)
		{
			throw pcYear;
		}
		else {
			year = pcYear;
		}
	}
	catch (int thrownYear)
	{
		cout << "The first computer was released in 1971, setting year to 1971." << endl;
		year = 1971;
	}
	nUSBPorts = pcPort;
	cpuObject.FLOPS = cpuFLOP;
}