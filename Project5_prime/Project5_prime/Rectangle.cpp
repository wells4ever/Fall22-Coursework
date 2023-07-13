#include "Rectangle.h"
#include <cmath>

void setLength(double L)
{
    length = L;
};
void setWidth(double W)
{
    width = W;
};

double getLength()
{
    return length;
};
double getWidth()
{
    return width;
};

Rectangle()
{
    length = 0.0;
    width = 0.0;
};
Rectangle(double lengthPrime, double widthPrime)
{
    length = lengthPrime;
    width = widthPrime;
};

double calculateArea()
{
    double area = length * width;
    return area;
};
double calculatePerimeter()
{
    double perimeter = (2 * length) + (2 * width);
    return perimeter;
};