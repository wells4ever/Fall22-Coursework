#pragma once



class Inventory
{
private:
	std::string itemName;
	double itemPrice;
	int unitsAvailable;

public:
	//setters
	void setItemName(std::string iName);
	void setItemPrice(double iPrice);
	void setUnitsAvailable(int uAvail);

	//getters
	std::string getItemName();
	double getItemPrice();
	int getUnitsAvailable();

	//contructors
	Inventory();
	Inventory(std::string, double, int);

	//additional functions
	double calculateTotalValue();


};

