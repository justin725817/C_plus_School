#include<iostream>
using namespace std;

int main(){
    int square=0;
    for(int i=0;i<=10;i++){
        cout << square << " " << square * square * 6 << " " << square * square * square << endl;
        square++;
    }
}