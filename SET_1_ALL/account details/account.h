#include <iostream>
#include<string>
using namespace std;
class Account {
  int m_number;
  string m_name;
  double m_balance;

public:
  Account();
  Account(int, string, double);
  Account(const Account &);
  void credit(double);
  void debit(double);
  int  getm_number();
  string getm_name();
  double getBalance() const;
  void display();
};
