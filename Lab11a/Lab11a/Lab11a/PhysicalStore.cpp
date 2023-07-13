#include "PhysicalStore.h"

void PhysicalStore::setPhysicalAddress(std::string pAddress)
{
	physicalAddress = pAddress;
}
void PhysicalStore::setHasWifi(bool hWifi)
{
	hasWifi = hWifi;
}

std::string PhysicalStore::getPhysicalAddress()
{
	return physicalAddress;
}
bool PhysicalStore::getHasWifi()
{
	return hasWifi;
}

PhysicalStore::PhysicalStore()
{
	physicalAddress = "Nowhere";
	hasWifi = false;
}
PhysicalStore::PhysicalStore(std::string pAddress, bool hWifi)
{
	physicalAddress = pAddress;
	hasWifi = hWifi;
}

void PhysicalStore::setAll(std::string sName, double sRev, std::string pAddress, bool hWifi)
{
	Store::setName(sName);
	Store::setRev(sRev);

	physicalAddress = pAddress;
	hasWifi = hWifi;
}