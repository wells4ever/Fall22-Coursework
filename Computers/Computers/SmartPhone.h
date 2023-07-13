#pragma once
#include "Computers.h"
#include "CPU.h"
class SmartPhone :
    public Computers, public CPU
{
private:
    int nHeadphonePorts;
    CPU cpuObject;

public:
    void setName(string);
    void setYear(int);
    void setHPorts(int);

    void printInfo();

    bool operator == (SmartPhone someOtherPhone);

    SmartPhone();
    SmartPhone(string, int, int, int);
};

