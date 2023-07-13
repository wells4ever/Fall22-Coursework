#pragma once
#include "store.h"
class PhysicalStore : public Store
{
private:
	std::string physicalAddress;
	bool hasWifi;

public:
	void setPhysicalAddress(std::string);
	void setHasWifi(bool);

	std::string getPhysicalAddress();
	bool getHasWifi();

	PhysicalStore();
	PhysicalStore(std::string, bool);

	void setAll(std::string, double, std::string, bool);
};

