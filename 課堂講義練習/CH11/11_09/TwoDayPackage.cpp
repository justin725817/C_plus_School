// Member-function definitions of class TwoDayPackage.
#include <stdexcept>
#include <iostream>
#include "TwoDayPackage.h" // TwoDayPackage class definition
#include "Package.h"

using namespace std;

TwoDayPackage::TwoDayPackage(const string &name, const string &address,
                            const string &city, const string &state, int zip, const string &R_name,
                            const string &R_address, const string &R_city, const string &R_state,
                            int R_zip, double weight, double CPO, double flatfee)
    : Package(name, address, city, state, zip, R_name, R_address, R_city, R_state, R_zip, weight, CPO)
{
    setFlatFee(flatfee);
}
void TwoDayPackage::setFlatFee(double n)
{
    if (n < 0)
    {
        cout << "Flatfee should be >0";
        flatFee = 0;
        return;
    }
    flatFee = n;
}

double TwoDayPackage::getFlatFee() const
{
    return flatFee;
}

double TwoDayPackage::calculateCost() const
{
    return flatFee + Package::calculateCost();
}