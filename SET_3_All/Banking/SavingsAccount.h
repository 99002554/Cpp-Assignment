#ifndef __SAVINGS_ACCOUNT_H
#define __SAVINGS_ACCOUNT_H

#include<string>
#include"account.h"
using namespace std;
class SavingsAccount : public AccountBase {

  public:
  SavingsAccount();
  SavingsAccount(string,string,double);
  SavingsAccount(string,string);
  void debit(double);
  void credit(double);
  void display() ;

};

#endif
