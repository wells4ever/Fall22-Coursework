#include "Employee.h"

#include <iostream>


void Employee::printInfo()
{
	std::cout << EmployeeID << std::endl;
}

void Employee::setEmployeeID(int ID)
{
	EmployeeID = ID;
}

int Employee::getEmployeeID()
{
	return EmployeeID;
}

Employee::Employee()
{
	EmployeeID = 0;
}

Employee::Employee(int ID)
{
	EmployeeID = ID;
}