// Fig. 12.10: Employee.cpp
// Abstract-base-class Employee member-function definitions.
// Note: No definitions are given for pure virtual functions.
#include <sstream>
#include "Employee.h" // Employee class definition
using namespace std;

// constructor
Employee::Employee(const string &first, const string &last,
                   const string &ssn, int month, int day, int year)
    : firstName(first), lastName(last), socialSecurityNumber(ssn),
      birthDate(month, day, year) {}

// set first name
void Employee::setFirstName(const string &first) { firstName = first; }

// return first name
string Employee::getFirstName() const { return firstName; }

// set last name
void Employee::setLastName(const string &last) { lastName = last; }

// return last name
string Employee::getLastName() const { return lastName; }

// set social security number
void Employee::setSocialSecurityNumber(const string &ssn)
{
   socialSecurityNumber = ssn; // should validate
}

// return social security number
string Employee::getSocialSecurityNumber() const
{
   return socialSecurityNumber;
}
void Employee::setBirthDate(int month, int day, int year)
{
   birthDate.setDate(month, day, year);
}
Date Employee::getBirthDate() const
{
   return birthDate;
}

// toString Employee's information (virtual, but not pure virtual)
string Employee::toString() const
{
   ostringstream output;
   output << getFirstName() << ' ' << getLastName() << "\nbirthday: " << getBirthDate() << "\nsocial security number: " << getSocialSecurityNumber();
   return output.str();
}
