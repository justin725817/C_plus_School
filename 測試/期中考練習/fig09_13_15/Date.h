#include <string>

#ifndef DATE_H
#define DATE_H
using namespace std;

class Date
{
public:
    explicit Date(int = 1, int = 1, int = 2000);
    void print();

private:
    unsigned int month;
    unsigned int day;
    unsigned int year;
};

#endif