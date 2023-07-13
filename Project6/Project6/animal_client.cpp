#include <iostream>
#include "Dog.h"
#include "Fish.h"

using namespace std;

int main()
{
	Animal animal1("Parent_Class_Test", 1);

	Dog dog1;
	Dog dog2("Fido", 4, true, true, true);
	Dog dog3("Dixie", 6, true, true, true);

	Fish fish1;
	Fish fish2("Bubbles", 2, true, true, false);
	
	animal1.printInfo();
	cout << "\n" << "Dog 1:" << endl;
	dog1.printInfo();
	cout << "\n" << "Dog 2:" << endl;
	dog2.printInfo();
	cout << "\n" << "Fish 1:" << endl;
	fish1.printInfo();
	cout << "\n" << "Fish 2:" << endl;
	fish2.printInfo();
	cout << "\n" << endl;
	dog3.printInfo();


}