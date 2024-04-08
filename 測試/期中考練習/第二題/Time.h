#include <string>
#ifndef TIME_H
#define TIME_H
using namespace std;

class Time {
    public:
        explicit Time(int,int,int);
        void setTime(int, int, int); 
        void setHour(int);           
        void setMinute(int);         
        void setSecond(int);

        unsigned int getHour() const;   
        unsigned int getMinute() const; 
        unsigned int getSecond() const; 
        string toUniversalString() const; 
        string toStandardString() const;  
        
    private:
        unsigned int hour=0;   
        unsigned int minute=0; 
        unsigned int second=0;
};

#endif 