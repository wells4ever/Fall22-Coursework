#pragma once
#include "Computers.h"
#include "CPU.h"
class Personal_Computer :
    public Computers , public CPU
{
private:
    int nUSBPorts;
    CPU cpuObject;
public:
    void setName(string);
    void setYear(int);
    void setPorts(int);
    
    void printInfo();

    Personal_Computer();
    Personal_Computer(string, int, int, int);

};

