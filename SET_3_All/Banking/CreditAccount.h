#ifndef __BANKING_H
#define __BANKING_H

#include<string>
#include"account.h"
using namespace std;
class CreditAccount : public AccountBase {

  public:
  CreditAccount();
  CreditAccount(string,string,double);
  CreditAccount(string,string);
  void debit(double);
  void credit(double);
  void display() ;

};

#endif
