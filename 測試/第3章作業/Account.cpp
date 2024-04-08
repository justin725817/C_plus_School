#include <iostream>
#include "Account.h"
using namespace std;

Account::Account(string accountName,int initialBalance){
    setName(accountName);
    balance=initialBalance;
}
void Account::deposit(int depositAmount){
    balance = balance + depositAmount;
}
void Account::withdraw(int withdrawalAmount){
    balance = balance - withdrawalAmount;
}
int Account::getBalance(){
    return balance;
}
void Account::setName(string accountName){
    accountName=name;
}
string Account::getName(){
    return name;
}