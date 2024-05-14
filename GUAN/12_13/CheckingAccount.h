#ifndef CHECKING_H
#define CHECKING_H

#include "Account.h" // Account class definition

class CheckingAccount : public Account {
public:
   // constructor initializes balance and transaction fee
   CheckingAccount(double, double);

   virtual void credit(double); // redefined credit function
   virtual bool debit(double); // redefined debit function
private:
   double transactionFee; // fee charged per transaction

   // utility function to charge fee
   void chargeFee();
}; 

#endif