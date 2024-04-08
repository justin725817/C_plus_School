#include <iomanip>
#include <stdexcept>
#include <sstream>
#include <string>
#include "Time.h" // include definition of class Time from Time.h
using namespace std;

Time::Time(int hour, int minute, int second)
{
    setTime(hour, minute, second); 
}
