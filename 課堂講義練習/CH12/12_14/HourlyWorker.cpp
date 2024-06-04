#include <iomanip>
#include <stdexcept>
#include <sstream>
#include "HourlyWorker.h"
using namespace std;


HourlyWorker::HourlyWorker(const string &first, const string &last, const string &ssn, double w, double p): Employee(first, last, ssn){
    setWage(w);
    setHours(p);
}

void HourlyWorker::setWage(double w){
    if (w < 0.0) {
        throw invalid_argument("Wage must be >= 0.0");
    }

    wage = w;
}
double HourlyWorker::getWage() const{
 return wage;
}

void HourlyWorker::setHours(double h){
    if (h < 0.0) {
        throw invalid_argument("Hours must be >= 0.0");
    }

    hours = h;
}
double HourlyWorker::getHours() const{
 return hours;
}
 
double HourlyWorker::earnings() const{
    if (hours > 40) return wage * 40 + wage * 1.5 * ( hours - 40 );
    return wage * hours;
}

std::string HourlyWorker::toString() const{
   ostringstream output;
   output << fixed << setprecision(2);
   output << "commission employee: " << Employee::toString()
      << "\nHours: " << getHours()
      << "; Wage: " << getWage();
   return output.str();
}

