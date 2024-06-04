#include <iostream>
#include <iomanip>
#include <vector>
#include "Employee.h"
#include "CommissionEmployee.h"  
#include "BasePlusCommissionEmployee.h" 
#include "SalariedEmployee.h" 
#include "PieceWorker.h"
#include "HourlyWorker.h"
using namespace std;

int main(void){
    array< Employee *, 5 > employees;
    employees[ 0 ] = new CommissionEmployee{"Sue", "Jones", "333-33-3333", 10000, .06};
    employees[ 1 ] = new BasePlusCommissionEmployee{"Bob", "Lewis", "444-44-4444", 5000, .04, 300};
    employees[ 2 ] = new SalariedEmployee{"John", "Smith", "111-11-1111", 800};
    employees[ 3 ] = new PieceWorker{"Line", "FaceBook", "123-45-6789", 123.456, 456.789};
    employees[ 4 ] = new HourlyWorker{"Alice", "Zoom", "999-88-7777", 27, 35};

    for ( int i = 0; i< 5; ++i)
    {
        cout << employees[ i ]->toString();
        cout << "\nEarning:" << employees[ i ]->earnings() << "\n\n";
    }

}
