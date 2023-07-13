#include "Cube.h"
#include <cmath>

void setEdgeLength(double L)
{
    edgeLength = L;
};

double getEdgeLength()
{
    return edgeLength;
}

Cube()
{
    edgeLength = 0.0;
};
Cube(double edge)
{
    edgeLength = edge;
};

double calculateSurfaceArea()
{
    double sArea = edgeLength * edgeLength * 6;
    return sArea;
};

double calculateVolume()
{
    double volume = edgeLength * edgeLength * edgeLength;
    return volume;
};