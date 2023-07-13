#include "PartTime.h"
#include <iostream>
#include <iomanip>

double PartTime::calculatePay(double hrs, double rte)
{
	double pay = rte * hrs;
	return pay;
}
void PartTime::printInfo()
{
	std::cout << "Part Time Employee #: " << Employee::getEmployeeID() << "\t"  <<
		std::fixed << std::setprecision(2) << "Weekly Pay: $" << PartTime::calculatePay(hours, rate) << std::endl;

}

PartTime::PartTime()
{
	Employee::setEmployeeID(0);
	hours = 0;
	rate = 0;
}
PartTime::PartTime(int ID, double hrs, double rte)
{
	Employee::setEmployeeID(ID);
	hours = hrs;
	rate = rte;
}