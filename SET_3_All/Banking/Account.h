#ifndef __ACCOUNT_H
#define __ACCOUNT_H
#include<string>
using namespace std;

class AccountBase {
  string m_accNumber;
  string m_accName;
  double m_balance;
  public:
  AccountBase();
  AccountBase(string,string,double);
  AccountBase(string,string);
  AccountBase(const AccountBase&);
  virtual void debit(double)=0;
  virtual void credit(double)=0;
  virtual void display() ;
  double getBalance() ;
  void setBalance(double) ;
};

#endif
