#ifndef POINT_H
#define POINT_H

#include <iostream>
using namespace std;

class Point
{
    // overloaded input and output operators
    friend ostream &operator<<(ostream &, const Point &);
    friend istream &operator>>(istream &, Point &);

private:
    int xCoordinate; // x-coordinate of point pair
    int yCoordinate; // y-coordinate of point pair
};

#endif