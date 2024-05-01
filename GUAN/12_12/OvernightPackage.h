#ifndef OVERNIGHT_H
#define OVERNIGHT_H

#include "Package.h" // Package class definition

class OvernightPackage : public Package {
public:
   OvernightPackage(const std::string&, const std::string&, const std::string&, 
      const std::string&, int, const std::string&, const std::string&, const std::string&, 
      const std::string&, int, double, double, double);
   
   void setOvernightFeePerOunce(double); // set overnight fee
   double getOvernightFeePerOunce() const; // return overnight fee

   virtual double calculateCost() const; // calculate shipping cost
private:
   double overnightFeePerOunce; // fee per ounce for overnight delivery
}; 

#endif