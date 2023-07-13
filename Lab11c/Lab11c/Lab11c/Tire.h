#pragma once
#include <iostream>

class Tire
{
private:

	std::string tireSize;
	

public:

	void inflateTire(int);

	void setTireSize(std::string);

	Tire();
	Tire(std::string);

	void printTireInfo();
};


