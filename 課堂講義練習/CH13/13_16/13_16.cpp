#include <iostream>
#include "Complex.h"
using namespace std;

int main()
{
    Complex complex; // create Complex object

    // ask user to enter complex number
    cout << "Input a complex number in the form A + Bi:\n";
    cin >> complex; // store complex number

    if (!cin.fail())
    { // display complex number entered by user if valid
        cout << "Complex number entered was:\n"
            << complex << endl;
    }
    else
    {
        cout << "Invalid Data Entered\n";
    }
}