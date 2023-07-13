#include <iostream>

using namespace std;

class Computer
{
public:
	string cpuName;
	double teraFLOPS;

	Computer()
	{
		cpuName = "N/A";
		teraFLOPS = 0;
	}
	Computer(string name, double flops)
	{
		cpuName = name;
		teraFLOPS = flops;
	}
	void printInfo()
	{
		cout << "CPU: " << cpuName << endl;
		cout << "TeraFLOPS: " << teraFLOPS << endl;
	}
};

class PersonalComputer : Computer
{
public: 
	string monitorName;

	PersonalComputer()
	{
		cpuName = "N/A";
		teraFLOPS = 0;
		monitorName = "N/A";
	}
	PersonalComputer(string cpu, double flops, string monitor)
	{
		cpuName = cpu;
		teraFLOPS = flops;
		monitorName = monitor;

	}
	void printInfo()
	{
		Computer::printInfo();
		cout << "Monitor Name: " << monitorName << endl;
	}
};

class SmartPhone : public Computer
{
public:
	double batteryLife;

	SmartPhone()
	{
		cpuName = "N/A";
		teraFLOPS = 0;
		batteryLife = 0;
	}
	SmartPhone(string cpu, double flops, double life)
	{
		cpuName = cpu;
		teraFLOPS = flops;
		batteryLife = life;
	}
	void printInfo()
	{
		Computer::printInfo();
		cout << "Battery Life (hours): " << batteryLife << endl;
	}
};

class GameConsole : public Computer
{
public: 
	int controllerCount;

	GameConsole()
	{
		cpuName = "N/A";
		teraFLOPS = 0;
		controllerCount = 0;
	}
	GameConsole(string cpu, double flops, int contr)
	{
		cpuName = cpu;
		teraFLOPS = flops;
		controllerCount = contr;
	}

	void printInfo()
	{
		Computer::printInfo();
		cout << "Controller Count: " << controllerCount << endl;
	}
};

int main()
{
	Computer comp1("Intel i5", 5.1);
	PersonalComputer comp2("Ryzen 5 2600x", 6.5, "Acer S271HL");
	SmartPhone comp3("Snapdragon 8 Gen 1", 2.236, 97);
	GameConsole comp4("Jaguar APU", 6, 4);

	cout << "Computer class: " << endl;
	comp1.printInfo();
	cout << "\nPersonal Computer class: " << endl;
	comp2.printInfo();
	cout << "\nSmart Phone class: " << endl;
	comp3.printInfo();
	cout << "\nGame Console class: " << endl;
	comp4.printInfo();
}