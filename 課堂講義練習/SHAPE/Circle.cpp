#include "Circle.h"
#include <iostream>
#include <cmath>

Circle::Circle(double r, double x, double y) : TwoDimensionalShape(x, y), radius(r) {}

double Circle::getRadius() const
{
    return radius;
}

double Circle::getArea() const
{
    return M_PI * radius * radius;
}

void Circle::print() const
{
    cout << "Circle with radius " << radius << " and center at (" << xCenter << ", " << yCenter << ")";
}
