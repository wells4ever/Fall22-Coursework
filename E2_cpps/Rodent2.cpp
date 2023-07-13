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

class Limb
{
public:
	int limbCount;

	Limb()
	{
		limbCount = 0;
	}

	Limb(int count)
	{
		limbCount = count;
	}

};

class Body
{
public:
	int bodyWeight;

	Body()
	{
		bodyWeight = 0;
	}
	Body(int weight)
	{
		bodyWeight = weight;
	}

};

class Tail
{
public:
	int tailLength;

	Tail()
	{
		tailLength = 0;
	}
	Tail(int length)
	{
		tailLength = length;
	}
};

class Rodentia : public Mammalia , public Limb , public Body , public Tail
{
public:
	bool hasProminentIncisors;
	Limb limbObject;
	Body bodyObject;
	Tail tailObject;

	Rodentia()
	{
		hasSpine = false;
		hasMammaryGlands = false;
		hasProminentIncisors = false;
		limbObject.limbCount = 0;
			bodyObject.bodyWeight = 0;
			tailObject.tailLength = 0;
	}
	Rodentia(bool spine, bool gland, bool incis, int limb , int weight, int length)
	{
		hasSpine = spine;
		hasMammaryGlands = gland;
		hasProminentIncisors = incis;
		limbObject.limbCount = limb;
			bodyObject.bodyWeight = weight;
			tailObject.tailLength = length;
	}
	void printInfo()
	{
		cout << boolalpha << "hasSpine: " << hasSpine << endl;
		cout << boolalpha << "hasMammaryGlands: " << hasMammaryGlands << endl;
		cout << boolalpha << "hasProminendIncisors: " << hasProminentIncisors << endl;
		cout << "Limb Count: " << limbObject.limbCount << endl;
		cout << "Body Weight: " << bodyObject.bodyWeight << " pounds" << endl;
		cout << "Tail Length: " << tailObject.tailLength << " inches" << endl;

	}
};


int main()
{
	Rodentia Beaver(true, true, true, 4, 35, 16);

	Beaver.printInfo();
}
