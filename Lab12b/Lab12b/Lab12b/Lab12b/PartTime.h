#pragma once
#include "Employee.h"

class PartTime :
    public Employee
{
private:
    double hours;
    double rate;

public:
    double calculatePay(double, double);
    void printInfo();

    PartTime();
    PartTime(int, double, double);
};

