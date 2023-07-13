#pragma once
#include <string>
class Store
{
private:
	std::string name;
	double revenue;

public:
	void setName(std::string);
	void setRev(double);

	std::string getName();
	double getRev();


	Store();
	Store(std::string, double);

	
};

