#include "WebStore.h"

void WebStore::setWebAddress(std::string webAdd)
{
	webAddress = webAdd;
}
void WebStore::setHasDroneDelivery(bool droneDeliv)
{
	hasDroneDelivery = droneDeliv;
}

std::string WebStore::getWebAddress()
{
	return webAddress;
}
bool WebStore::getHasDroneDelivery()
{
	return hasDroneDelivery;
}

WebStore::WebStore()
{
	webAddress = "N/A";
	hasDroneDelivery = false;
}
WebStore::WebStore(std::string webAdd, bool droneDeliv)
{
	webAddress = webAdd;
	hasDroneDelivery = droneDeliv;
}

void WebStore::setAll(std::string sName, double sRev, std::string webAdd, bool droneDeliv)
{
	Store::setName(sName);
	Store::setRev(sRev);

	webAddress = webAdd;
	hasDroneDelivery = droneDeliv;
}