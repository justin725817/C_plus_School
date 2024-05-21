#include <iostream>
#include "Point.h"
using namespace std;

int main()
{
    Point pt; // create point object

    // ask user to enter point
    cout << "Enter a point in the form (x, y):\n";
    cin >> pt; // store user entered point

    if (!cin.fail())
    {                                                // validate input
        cout << "Point entered was: " << pt << endl; // display point
    }
    else
    {
        cout << "\nInvalid data\n"; // tell user invalid data was entered
    }
}