#ifndef __EMPLOYEE_H
#define __EMPLOYEE_H
using namespace std;
class IEmployee {
  public:
  virtual void payroll()=0;
  virtual void appraisal()=0;
};

class Employee:public IEmployee {
 string m_empid;
 string m_name;
  double m_salary;
  int m_exp;
  public:
  Employee(string , string , double ,int);

  virtual void display();
};

#endif

