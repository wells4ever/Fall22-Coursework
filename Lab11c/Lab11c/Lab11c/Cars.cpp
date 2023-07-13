#include <iostream>
#include "Car.h"

using namespace std;

int main()
{
	Car car1(5, "P215 / 65R15");
	
	car1.printInfo();
	cout << "\n";
	car1.beginDrive();

}