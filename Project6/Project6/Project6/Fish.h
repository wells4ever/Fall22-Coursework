#pragma once
#include "Animal.h"
#include "Tail.h"
#include "Gills.h"

class Fish :
    public Animal
{
private:
    Gills gillsObject();
    Tail tailObject();

public:
    void printInfo();

    Fish();
    Fish(std::string, int, bool, bool, bool);
};

