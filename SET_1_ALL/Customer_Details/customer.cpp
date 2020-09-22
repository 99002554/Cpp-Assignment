#include<iostream>
#include "Customer.h"
using namespace std;

//Customer
Customer::Customer() :
    m_custId(0), m_phone(0), m_custName(0), m_balance(0) {

}
Customer::Customer(int ph , string name, int custid, double bal) :
  m_phone(ph), m_custName(name), m_custId(custid), m_balance(bal) {

}
Customer::Customer(int ph , string name, int id) :
  m_phone(ph), m_custName(name), m_custId(id) {

}
Customer::Customer(const Customer& ref) :
        m_custId(ref.m_custId), m_phone(ref.m_phone), m_type(ref.m_type), m_custName(ref.m_custName), m_balance(ref.m_balance){
}
void Customer::credit(AccountType t) {
  switch(t)
  {
  case Savings:
    cout<<"Credit money to Savings Account...";
  case Current:
    cout<<"Credit money to Current Account...";
  }
}
void Customer::makeCall() {
  cout<<"Calling on phone number : "<<m_phone<<" ...";
}
double Customer::getBalance() const {
    return m_balance;
}
void Customer::display() {
    cout << "Customer ID is: "<<m_custId<<", Account Type: "<<m_type<<", Customer Name: "<<m_custName<<", Balance: " << m_balance;
}
//End of customer
