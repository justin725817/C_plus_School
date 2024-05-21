#ifndef COMPLEX_H
#define COMPLEX_H

#include <iostream>
using namespace std;

class Complex
{
    // overloaded input and output operators
    friend ostream &operator<<(ostream &, const Complex &);
    friend istream &operator>>(istream &, Complex &);

public:
    Complex(); // constructor
private:
    int real;      // hold real part of complex number
    int imaginary; // hold imaginary part of complex number
};

#endif
