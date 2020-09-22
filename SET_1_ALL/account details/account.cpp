#include<iostream>
#include "account.h"
using namespace std;
Account::Account() :
    m_number(0),  m_name(""), m_balance(0) {

}
Account::Account(int number, string name, double bal) :
   m_number(number), m_name(name), m_balance(bal) {

}
 Account::Account(const Account& ref) :
        m_number(ref. m_number), m_name(ref.m_name), m_balance(ref.m_balance) {

}
void Account::credit(double amount) {
  m_balance += amount;
}
void Account::debit(double amount) {

  m_balance -= amount;
}
int Account::getm_number() {
  return  m_number;
}
string Account::getm_name() {
  return m_name;
}
double Account::getBalance() const {
    return m_balance;
}
void Account::display() {
    cout <<  m_number << "," << m_name << "," << m_balance << "\n";
}
