#include <iostream>
#include "SmartPhone.h"
#include "Console.h"
#include "Personal_Computer.h"

using namespace std;

int main()
{
	string inName,inName2;
	int inYear, inYear2;
	int inUSBPorts, inPCFLOPS;
	int inHeadPhone, inPhoneFLOPS;
	bool isSamePhone;

	Console comp1("Xbox", 2014, 4, 15);
	SmartPhone comp2("S22", 2022, 2.236, 10);

	cout << "Please input information regaring your PC." << endl;
	cout << "Name" << endl;
	cin >> inName;
	cout << "Year" << endl;
	cin >> inYear;
	cout << "USB Ports" << endl;
	cin >> inUSBPorts; 
	cout << "CPU TeraFLOPS" << endl;
	cin >> inPCFLOPS;
	Personal_Computer comp3(inName, inYear, inUSBPorts, inPCFLOPS);

	cout << "Now, please input information regarding your phone." << endl;
	cout << "Name" << endl;
	cin >> inName2;
	cout << "Year" << endl;
	cin >> inYear2;
	cout << "Headphone Ports" << endl;
	cin >> inHeadPhone;
	cout << "CPU TeraFLOPS" << endl;
	cin >> inPhoneFLOPS;
	SmartPhone comp4(inName2, inYear2, inHeadPhone, inPhoneFLOPS);

	comp1.printInfo();
	comp2.printInfo();
	comp3.printInfo();
	comp4.printInfo();

	isSamePhone = comp2 == comp4;

	cout << "Is the same as program author's phone?" << endl;
	cout << boolalpha << isSamePhone;


}