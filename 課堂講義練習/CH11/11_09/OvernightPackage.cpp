// Exercise 11.9 Solution: OvernightPackage.cpp
// Member-function definitions of class OvernightPackage.
#include <stdexcept>
#include <iostream>
#include "OvernightPackage.h" // OvernightPackage class definition
using namespace std;
OvernightPackage::OvernightPackage(const string &name, const string &address,
                                const string &city, const string &state, int zip, const string &R_name,
                                const string &R_address, const string &R_city, const string &R_state,
                                int R_zip, double weight, double COP, double fee)
    : Package(name, address, city, state, zip, R_name, R_address, R_city, R_state, R_zip, weight, COP)
{

    setOvernightFeePerOunce(fee);
};

void OvernightPackage::setOvernightFeePerOunce(double n)
{
    if (n < 0)
    {
        cout << "OvernightFeePerOunce should be >0";
        overnightFeePerOunce = 0;
        return;
    }

    overnightFeePerOunce = n;
}

double OvernightPackage::getOvernightFeePerOunce() const
{
    return overnightFeePerOunce;
}

double OvernightPackage::calculateCost() const
{
    return overnightFeePerOunce * Package::calculateCost();
}