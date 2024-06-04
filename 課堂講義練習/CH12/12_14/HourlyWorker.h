#ifndef HOURLYWORKER_H
#define HOURLYWORKER_H

#include <string>
#include "Employee.h"

class HourlyWorker : public Employee {
public:
   HourlyWorker(const std::string&, const std::string&,
      const std::string&, double = 0.0, double = 0.0);
   virtual ~HourlyWorker() = default;

   void setWage(double);
   double getWage() const;

   void setHours(double);
   double getHours() const;
          
   virtual double earnings() const override;
   virtual std::string toString() const override;
private:
   double wage;
   double hours;
};

#endif
