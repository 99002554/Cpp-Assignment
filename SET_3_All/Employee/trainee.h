#ifndef __TRAINEE_H
#define __TRAINEE_H

#include "employee.h"
using namespace std;

class Trainee : public Employee {
  string m_track;
  double score;
  public:
  Trainee(string id, string name, double salary,string track_code,double score);
  void payroll();
  void appraisal();
  void display();
};

#endif

