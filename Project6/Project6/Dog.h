#pragma once
#include "Animal.h"
#include "Tail.h"
#include "Lungs.h"

class Dog :
    public Animal
{
private:
    Lungs lungsObject;
    Tail tailObject;

public:
    void printInfo();

    Dog();
    Dog(std::string, int, bool, bool, bool);
};

