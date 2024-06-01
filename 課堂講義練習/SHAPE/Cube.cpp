#include "Cube.h"
#include <iostream>

Cube::Cube(double side, double x, double y) : ThreeDimensionalShape(x, y), sideLength(side) {}

double Cube::getSideLength() const
{
    return sideLength;
}

double Cube::getArea() const
{
    return 6 * sideLength * sideLength;
}

double Cube::getVolume() const
{
    return sideLength * sideLength * sideLength;
}

void Cube::print() const
{
    cout << "Cube with side length " << sideLength << " and center at (" << xCenter << ", " << yCenter << ")";
}
