#pragma once
#include "Store.h"
class WebStore : public Store
{
private:
	std::string webAddress;
	bool hasDroneDelivery;

public:
	void setWebAddress(std::string);
	void setHasDroneDelivery(bool);

	std::string getWebAddress();
	bool getHasDroneDelivery();

	WebStore();
	WebStore(std::string, bool);

	void setAll(std::string, double, std::string, bool);
};

