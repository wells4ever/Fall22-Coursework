#pragma once
#include "Computers.h"
#include "CPU.h"
class Console :
    public Computers , public CPU
{
private:
    int nControllerSlots;
    CPU cpuObject;
public:
    void setName(string);
    void setYear(int);
    void setCSlots(int);

    void printInfo();

    Console();
    Console(string, int, int, int);
};

