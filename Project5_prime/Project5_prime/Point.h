#pragma once

class Point
{
    private:
    int x1;
    int y1;

    public:
    //setters
    void setX1(int x);
    void setY1(int y);

    //getters
    int getX1();
    int getY1();

    //constructors
    Point();
    Point(int, int);

    //additional functions
    double calculateDistanceFromOrigin();
};