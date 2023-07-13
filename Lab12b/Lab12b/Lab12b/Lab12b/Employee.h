#pragma once
class Employee
{
private:
	int EmployeeID;

public:
	virtual double calculatePay(double, double) = 0;
	virtual void printInfo();

	int getEmployeeID();
	void setEmployeeID(int);

	Employee();
	Employee(int);

};

