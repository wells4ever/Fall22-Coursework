#pragma once

class Rectangle
{
    private:
    double length;
    double width;

    public:
    //setters
    void setLength(double L);
    void setWidth(double W);

    //getters
    double getLength();
    double getWidth();

    //constructors
    Rectangle();
    Rectangle(double, double);

    //additional functions
    double calculateArea();
    double calculatePerimeter();
};