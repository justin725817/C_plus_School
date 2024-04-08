#include <iomanip>
#include <stdexcept>
#include <sstream>
#include <string>
#include "Time.h"

using namespace std;

void Time::setTime(int h, int m, int s)
{
    if ((h >= 0 && h < 24) && (m >= 0 && m < 60) && (s >= 0 && s < 60))
    {
        hour = h;
        min = m;
        second = s;
    }
    else
    {
        throw invalid_argument("error");
    }
}

string Time::Universal() const
{
    ostringstream oss;
    oss << setfill('0') << setw(2) << hour << ":"<< setw(2) << min << ":" << setw(2) << second;
    return oss.str();
}

string Time::Standard() const{
    ostringstream oss;
    oss << ((hour == 0 || hour == 12) ? 12 : hour % 12) << ":"<< setfill('0') << setw(2) << min << ":" << setw(2)<< second << (hour < 12 ? " AM" : " PM");
    return oss.str();
}
