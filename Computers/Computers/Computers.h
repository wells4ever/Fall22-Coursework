#pragma once
#include <iostream>
#include "CPU.h"

using namespace std;

class Computers
{
public:
	string name;
	int year;
	

	void setName(string);
	void setYear(int);

		void printInfo();

		Computers();
		Computers(string, int);
};

