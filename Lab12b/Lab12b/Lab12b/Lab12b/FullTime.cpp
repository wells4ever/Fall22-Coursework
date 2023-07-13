#include "FullTime.h"
#include <iostream>
#include <iomanip>

double FullTime::calculatePay(double sal, double bns)
{
	double pay = sal + bns;
	return pay;
}
void FullTime::printInfo()
{
	std::cout << "Full Time Employee #: " << Employee::getEmployeeID() << "\t"  <<
		std::fixed << std::setprecision(2) << "Annual Pay: $" << FullTime::calculatePay(salary, bonus) << std::endl;

}

FullTime::FullTime()
{
	Employee::setEmployeeID(0);
}
FullTime::FullTime(int ID, double sal , double bns)
{
	Employee::setEmployeeID(ID);
	salary = sal;
	bonus = bns;
}

