#include <iostream>
#include <cmath>

using namespace std;

void calcArea(double, double);
void calcPeri(double, double);

int main()
{
	double b, h;
	cout << "please input two numbers (base then height) to calculate the area and perimeter of a right triangle. "<< endl;
	cin >> b >> h;
	calcArea(b, h);
	calcPeri(b, h);
}

void calcArea(double base, double height)
{
	double area;
	area = 0.5 * base * height;
	cout << "The area is: " << area << endl;
}

void calcPeri(double base, double height)
{
	double perimeter = 0;  //perimeter formula -> b+h+(sqrt(b^2 + h^2)
	double powers = pow(base, 2) + pow(height, 2); //b^2 + h^2
	double squareroot = sqrt(powers); //sqrt(b^2 + h^2)
	perimeter = base + height + squareroot;

	cout << "The perimeter is: " << perimeter << endl;
}
