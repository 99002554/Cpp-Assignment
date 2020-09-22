#ifndef __ENGINEER_H
#define __ENGINEER_H

#include "employee.h"
using namespace std;
class Engineer : public Employee {
  int m_projCode;
  public:
  Engineer(string ,string , double ,int ,int );
  void payroll();
  void appraisal();
  void display();
};

#endif

