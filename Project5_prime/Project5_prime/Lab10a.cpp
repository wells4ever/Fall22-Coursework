#include "Inventory.h"
#include <iostream>

using namespace std;

int main()
{
    Inventory ("Keyboard", 36.99, 56);

    Inventory secondItem = Inventory("Mouse", 74.99, 77);

    cout << Inventory::getItemName << "\n\tCost: $" << Inventory::getItemPrice << "\n\tQuantity: " << Inventory::getUnitsAvailable << "\n\tTotal Value: $" << Inventory::calculateTotalValue << endl;

    cout << secondItem.getItemName() << "\n\tCost: $" << secondItem.getItemPrice() << "\n\tQuantity: " << secondItem.getUnitsAvailable() << "\n\tTotal Value: $" << secondItem.calculateTotalValue() << endl;
}