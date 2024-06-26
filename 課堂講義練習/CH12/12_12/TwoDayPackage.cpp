#include <stdexcept>
#include "TwoDayPackage.h" // TwoDayPackage class definition
using namespace std;

TwoDayPackage::TwoDayPackage(const string &sName,
                             const string &sAddress, const string &sCity, const string &sState,
                             int sZIP, const string &rName, const string &rAddress,
                             const string &rCity, const string &rState, int rZIP,
                             double w, double cost, double fee)
    : Package(sName, sAddress, sCity, sState, sZIP,
              rName, rAddress, rCity, rState, rZIP, w, cost)
{
    setFlatFee(fee);
}
void TwoDayPackage::setFlatFee(double fee)
{
    if (fee < 0.0)
    {
        throw invalid_argument("Flat fee must be >= 0.0");
    }

    flatFee = fee;
}

// return flat fee
double TwoDayPackage::getFlatFee() const
{
    return flatFee;
}

// calculate shipping cost for package
double TwoDayPackage::calculateCost() const
{
    return Package::calculateCost() + getFlatFee();
}