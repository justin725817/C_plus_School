#include <string>
#ifndef CREATE_H
#define CREATE_H
using namespace std;
class CreateAndDestroy
{
public:
    CreateAndDestroy(int, string);
    ~CreateAndDestroy();
private:
    int objectID;
    string message;
};

#endif