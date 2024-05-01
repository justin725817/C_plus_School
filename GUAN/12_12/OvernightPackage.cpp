#include <stdexcept>
#include "OvernightPackage.h" // OvernightPackage class definition
using namespace std;

// constructor
OvernightPackage::OvernightPackage(const string& sName, 
   const string& sAddress, const string& sCity, const string& sState, 
   int sZIP, const string& rName, const string& rAddress, 
   const string& rCity, const string& rState, int rZIP, 
   double w, double cost, double fee) 
   : Package(sName, sAddress, sCity, sState, sZIP, 
      rName, rAddress, rCity, rState, rZIP, w, cost) {
   setOvernightFeePerOunce(fee); // validate and store overnight fee
} 

// set overnight fee
void OvernightPackage::setOvernightFeePerOunce(double overnightFee) {
   if (overnightFee < 0.0) {
      throw invalid_argument("Overnight fee must be >= 0.0");
   }

   overnightFeePerOunce = overnightFee;
} 

// return overnight fee
double OvernightPackage::getOvernightFeePerOunce() const {
   return overnightFeePerOunce;
} 

// calculate shipping cost for package
double OvernightPackage::calculateCost() const {
   return getWeight() * (getCostPerOunce() + getOvernightFeePerOunce());
}