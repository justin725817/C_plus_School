#include <iostream>
#include "Time.h"
using namespace std;

int main()
{
    Time T;
    unsigned int &hourRef{T.badSetHour(20)};
    cout << "Valid hour before modification: " << hourRef;
    hourRef = 30; 
    cout << "\nInvalid hour after modification: " << T.getHour();

    T.badSetHour(12) = 74;

    cout << "\n\n*************************************************\n"<< "POOR PROGRAMMING PRACTICE!!!!!!!!\n"<< "t.badSetHour(12) as an lvalue, invalid hour: "<< T.getHour()<< "\n*************************************************" << endl;





}