#include "Point.h"
#include "Rectangle.h"
#include "Cube.h"
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    Point point1(7,8);
    Point point2(15,98);

    cout << "\nFirst point: " << "(" << point1.getX1() << "," << point1.getY1() << ")" <<  endl;
    cout << "Distance from Origin(0,0): " << point1.calculateDistanceFromOrigin() << endl;

    cout << "\nSecond point: " << "(" << point2.getX1() <<  "," << point2.getY1() << ")" << endl;
    cout << "Distance from Origin(0,0): " << point2.calculateDistanceFromOrigin() << endl;

    Rectangle rectangle1(14,3);
    Rectangle goldenRectangle;
    goldenRectangle.setLength(1);
    goldenRectangle.setWidth(1.618);

    cout << "\nFirst Rectangle: " << "l = " << rectangle1.getLength() << " w = " << rectangle1.getWidth() << endl;
    cout << fixed << setprecision(2) << "Area: " << rectangle1.calculateArea() << " Perimeter: " << rectangle1.calculatePerimeter() << endl;
    
    cout << "\nSecond Rectangle: " << "l= " << goldenRectangle.getLength() << " w = " << goldenRectangle.getWidth() << endl;
     cout << fixed << setprecision(2) << "Area: " << goldenRectangle.calculateArea() << " Perimeter: " << goldenRectangle.calculatePerimeter() << endl;

    Cube cube1(7);
    Cube cube2(9);

    cout << "\nFirst Cube Edge Length: " << cube1.getEdgeLength() << endl;
    cout << fixed << setprecision(2) << "Surface Area: " << cube1.calculateSurfaceArea() << " Volume: " << cube1.calculateVolume() << endl;

    cout << "\nSecond Cube Edge Length: " << cube2.getEdgeLength() << endl;
    cout << fixed << setprecision(2) << "Surface Area: " << cube2.calculateSurfaceArea() << " Volume: " << cube2.calculateVolume() << endl;

    return 0;
}