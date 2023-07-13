#include <iostream>
#include "WebStore.h"
#include "PhysicalStore.h"
#include <iomanip>

using namespace std;

int main()
{
	WebStore store0;

	WebStore store1;
	store1.setAll("Amazon", 5678, "www.amazon.com", true);

	WebStore store2;
	store2.setAll("Steele Industries", 1000, "www.steeleindustries.com", false);

	PhysicalStore store3;

	PhysicalStore store4;
	store4.setAll("Best Buy", 10000, "5514 S Broadway", true);

	PhysicalStore store5;
	store5.setAll("Walmart", 43444, "Everywhere", true);


	cout << "Webstores:" << endl;
	cout << "Name:\tRevenue:\tURL:\tDroneDelivery?" << endl;

	cout << store0.getName() << "\t" << store0.getRev()
		<< "\t" << store0.getWebAddress() << "\t"
		<< store0.getHasDroneDelivery() << endl;
	
	cout << "\n" << store1.getName() << "\t" << "$" << store1.getRev()
		<< "\t" << store1.getWebAddress() << "\t"
		<< store1.getHasDroneDelivery() << endl;

	cout << "\n" << store2.getName() << "\t" << "$" << store2.getRev()
		<< "\t" << store2.getWebAddress() << "\t"
		<< store2.getHasDroneDelivery() << endl;

	cout << "\n" << "Physical Stores:" << endl;
	cout << "Name:\tRevenue:\tPhysical Address\tWifi?" << endl;

	cout << store3.getName() << "\t" << "$" << store3.getRev()
		<< "\t" << store3.getPhysicalAddress() << "\t"
		<< store3.getHasWifi() << endl;

	cout << "\n" << store4.getName() << "\t" << "$" << store4.getRev()
		<< "\t" << store4.getPhysicalAddress() << "\t"
		<< store4.getHasWifi() << endl;

	cout << "\n" << store5.getName() << "\t" << "$" << store5.getRev()
		<< "\t" << store5.getPhysicalAddress() << "\t"
		<< store5.getHasWifi() << endl;
}