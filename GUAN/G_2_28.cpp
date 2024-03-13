#include<iostream>
#include<string>
using namespace std;

int main(){
    string num;
    cin>>num;

    for(int i=0;i<num.length();i++){
        cout<<num[i]<<" ";
        //printf("%s ",num[i]);
    }

    return 0;

}