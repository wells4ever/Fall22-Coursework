#pragma once
#include "Employee.h"

class FullTime :
    public Employee
{
private:
    double bonus;
    double salary;

    public:
        double calculatePay(double, double);
        void printInfo();

        FullTime();
        FullTime(int, double, double);

};

