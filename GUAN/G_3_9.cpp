#include<iostream>
#include"Account.h"

using namespace std;

Account::Account(string accountName, int initialBalance){
    balance=initialBalance;
    setName(accountName);
}
void Account::deposit(int depositAmount){
    balance=balance+depositAmount;
}
void Account::withdraw(int withdrawalAmount){
    balance=balance-withdrawalAmount;
}
int Account::getBalance(){
    return balance;
}
void Account::setName(string accountName){
    name=accountName;
}
string Account::getName(){
    return name;
}
