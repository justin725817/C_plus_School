// Class CommissionEmployee member-function definitions.
#include <iostream>
#include <stdexcept>
#include <sstream>
#include <iomanip>
#include "CommissionEmployee.h" // CommissionEmployee class definition
using namespace std;

CommissionEmployee::CommissionEmployee(const string &first_name, const string &last_name, const string &social_security, double gross_sales, double commission_rate)
{
    setFirstName(first_name);
    setLastName(last_name);
    setSocialSecurityNumber(social_security);
    setGrossSales(gross_sales); 
    setCommissionRate(commission_rate);
}

void CommissionEmployee::setFirstName(const string &first_name)
{
    firstName = first_name;
}
string CommissionEmployee::getFirstName() const
{
    return firstName;
}

void CommissionEmployee::setLastName(const string &last_name)
{
    lastName = last_name;
}
string CommissionEmployee::getLastName() const
{
    return lastName;
}

void CommissionEmployee::setSocialSecurityNumber(const std::string &socia_security)
{
    socialSecurityNumber = socia_security;
}
string CommissionEmployee::getSocialSecurityNumber() const
{
    return socialSecurityNumber;
}
// 全部的Sales
void CommissionEmployee::setGrossSales(double gross_sales)
{
    if(gross_sales<0.0){
        throw invalid_argument("Gross sales must be >= 0.0");
    }
    grossSales=gross_sales;
}
double CommissionEmployee::getGrossSales() const
{
    return grossSales;
}
// 手續費
void CommissionEmployee::setCommissionRate(double commission_rate)
{
    if (commission_rate <= 0.0 || commission_rate >= 1.0){
        throw invalid_argument("Commission rate must be > 0.0 and < 1.0");
    }
    commissionRate=commission_rate;
}
double CommissionEmployee::getCommissionRate() const
{
    return commissionRate;
}

double CommissionEmployee::earnings() const
{
    return getCommissionRate() * getGrossSales();
}
void CommissionEmployee::print() const
{
    cout <<fixed<<setprecision(2);
    cout << "commission employee: " << getFirstName() << ' ' << getLastName()
        << "\nsocial security number: " << getSocialSecurityNumber()
        << "\ngross sales: " << getGrossSales()
        << "\ncommission rate: " << getCommissionRate();
}
