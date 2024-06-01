#include "Sphere.h"
#include <iostream>
#include <cmath>

Sphere::Sphere(double r, double x, double y) : ThreeDimensionalShape(x, y), radius(r) {}

double Sphere::getRadius() const
{
    return radius;
}

double Sphere::getArea() const
{
    return 4 * M_PI * radius * radius;
}

double Sphere::getVolume() const
{
    return (4.0 / 3) * M_PI * radius * radius * radius;
}

void Sphere::print() const
{
    cout << "Sphere with radius " << radius << " and center at (" << xCenter << ", " << yCenter << ")";
}
