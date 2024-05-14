#include "Square.h"
#include <iostream>

Square::Square(double side, double x, double y) : TwoDimensionalShape(x, y), sideLength(side) {}

double Square::getSideLength() const
{
    return sideLength;
}

double Square::getArea() const
{
    return sideLength * sideLength;
}

void Square::print() const
{
    cout << "Square with side length " << sideLength << " and center at (" << xCenter << ", " << yCenter << ")";
}
