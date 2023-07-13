#include <iostream>


using namespace std;

class Chordata
{
public:
	bool hasSpine;

	Chordata()
	{
		hasSpine = false;
	}
	Chordata(bool spine)
	{
		hasSpine = spine;
	}
};

class Mammalia : public Chordata
{
public:
	bool hasMammaryGlands;

	Mammalia()
	{
		hasSpine = false;
		hasMammaryGlands = false;
	}

	Mammalia(bool spine, bool gland)
	{
		hasSpine = spine;
		hasMammaryGlands = gland;
	}

};

class Rodentia : public Mammalia
{
public:
	bool hasProminentIncisors;

	Rodentia()
	{
		hasSpine = false;
		hasMammaryGlands = false;
		hasProminentIncisors = false;
	}
	Rodentia(bool spine, bool gland, bool incis)
	{
		hasSpine = spine;
		hasMammaryGlands = gland;
		hasProminentIncisors = incis;
	}
};

int main()
{
	Rodentia squirrel(true, true, true);

	cout << boolalpha << "Squirrel hasSpine: " << squirrel.hasSpine << endl;
	cout << boolalpha << "Squirrel hasMammaryGlands: " << squirrel.hasMammaryGlands  << endl;
	cout << boolalpha << "Squirrel hasProminentIncisors: " << squirrel.hasProminentIncisors  << endl;
}