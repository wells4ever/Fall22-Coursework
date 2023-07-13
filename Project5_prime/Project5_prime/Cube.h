#pragma once

class Cube
{
    private:
    double edgeLength;

    public:
    //setters
    void setEdgeLength(double L);

    //getters
    double getEdgeLength();

    //constructors
    Cube();
    Cube(double);

    //additional functions
    double calculateSurfaceArea();
    double calculateVolume();
    
};