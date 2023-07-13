#include "Point.h"
#include <cmath>

void setX1(int x)
{
    x1 = x;
};

void setY1(int y)
{
    y1 = y;
};

int getX1()
{
    return x1;
};

int getY1()
{
    return y1;
};

Point()
{
    x1 = y1 = 0;
};

Point(int c, int d)
{
    c = x1;
    d = y1;
};

double calculateDistanceFromOrigin()
{
    double deltaX = x1 - 0;
    double deltaY = y1 - 0;
    double interior = pow(deltaX, 2) + pow(deltaY, 2);
    double dPythagorean = sqrt(interior);
    return dPythagorean;
}