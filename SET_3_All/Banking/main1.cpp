#include <iostream>
#include<string>
#include "Account.h"
#include "CreditAccount.h"
#include "SavingsAccount.h"
using namespace std;

AccountBase::AccountBase():m_accNumber(""),m_accName(""),m_balance(0.0) { }
AccountBase::AccountBase(string num,string name, double balance):m_accNumber(num),m_accName(name),m_balance(balance) {}
AccountBase::AccountBase(string num,string name):m_accNumber(num),m_accName(name),m_balance(0.0) { }
AccountBase::AccountBase(const AccountBase& ac):m_accNumber(ac.m_accNumber),m_accName(ac.m_accName),m_balance(ac.m_balance) {}



double AccountBase::getBalance()
{
    return m_balance;
}
void AccountBase::debit(double balance)
{
    m_balance-=balance;
}
void AccountBase::credit(double balance)
{
    m_balance+=balance;
}
void AccountBase::display()
{
   cout<<"\nAccount number: "<<m_accNumber<<"\nName: "<<m_accName<<"\nBalance: "<<m_balance;
}



SavingsAccount::SavingsAccount():AccountBase("","",0.0) {}
SavingsAccount::SavingsAccount(string num,string name, double balance):AccountBase(num,name,balance) {}
SavingsAccount::SavingsAccount(string num,string name):AccountBase(num,name,0.0) {}
void SavingsAccount::debit(double balance)
{
    AccountBase::debit(balance);
}
void SavingsAccount::credit(double balance)
{
    AccountBase::credit(balance);
}
void SavingsAccount::display()
{
    cout<<"\n\nSavings Account:";
    AccountBase::display();
}



CreditAccount::CreditAccount():AccountBase("","",0.0) { }
CreditAccount::CreditAccount(std::string num,std::string name, double balance):AccountBase(num,name,balance) { }
CreditAccount::CreditAccount(std::string num,std::string name):AccountBase(num,name,0.0) { }
void CreditAccount::debit(double balance)
{
    AccountBase::debit(balance);
}
void CreditAccount::credit(double balance)
{
    AccountBase::credit(balance);
}
void CreditAccount::display()
{
    cout<<"\n\nCredit Account:";
    AccountBase::display();
}
int main()
{
//AccountBase A;
SavingsAccount s1("10","cs",100.0);
s1.display();
s1.debit(10);
s1.display();
s1.credit(20);
s1.display();



//CreditAccount s2("100","cs",1000.0);
//s2.display();
//s2.debit(10);
//s2.credit(20);
//s2.display();



}
