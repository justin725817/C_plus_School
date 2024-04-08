#include <iostream>

using namespace std;

int main()
{
    int squares=0;
    for(int i=0;i<=10;i++){
        cout << squares << " " << squares * squares * 6 << " " << squares * squares*squares<<endl;
        squares++;
    }

    

    return 0;
}