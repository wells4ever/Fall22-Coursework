#include <iostream>
#include "Inventory.h"
#include <iomanip>


	

	// setters
	void Inventory::setItemName(std::string iName)
	{
		itemName = iName;
	};
	void Inventory::setItemPrice(double iPrice)
	{
		itemPrice = iPrice;
	};
	void Inventory::setUnitsAvailable(int uAvail)
	{
		unitsAvailable = uAvail;
	};

	//getters
	std::string Inventory::getItemName()
	{
		return itemName;
	}
	double Inventory::getItemPrice()
	{
		return itemPrice;
	}
	int Inventory::getUnitsAvailable()
	{
		return unitsAvailable;
	}

	

	//additional functions
	double Inventory::calculateTotalValue()
	{
		double totalValue = itemPrice * unitsAvailable;

		return totalValue;
	}

	//contructors
	Inventory::Inventory()
	{
		itemName = "TBD";
		itemPrice = 0.00;
		unitsAvailable = 0;
	};
	Inventory::Inventory(std::string iName, double iPrice, int uAvail)
	{
		itemName = iName;
		itemPrice = iPrice;
		unitsAvailable = uAvail;

	};
