#pragma once
#include <iostream>
class Animal
{
private:
	std::string name;
	int age;

public:
	void setAge(int);
	void setName(std::string);
	std::string getName();
	int getAge();
	void printInfo();

	Animal();
	Animal(std::string, int);
};

