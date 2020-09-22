#include <iostream>
#include "employee.h"
#include "engineer.h"
#include "trainee.h"
#include "manager.h"


#define PERDAYSAL 300;
using namespace std;

Employee::Employee(string id, string name, double salary,int exp):
    m_empid(id),m_name(name),m_salary(salary),m_exp(exp){}

void Employee:: display(){
    cout <<  m_empid << "," << m_name << "," << m_salary << "'"<<m_exp << "\n";
}
Engineer :: Engineer( string m_empid ,string m_name, double m_salary,int m_exp,int code ): Employee( m_empid,m_name,m_salary,m_exp),m_projCode(code){}

void Engineer::payroll(){
    cout<<"\nEngineer Payroll"<<endl;
     m_salary = m_exp*PERDAYSAL;
}
void Engineer::appraisal(){
    cout<<"Incrementing salary of Engineer by 10%"<<endl;
    m_salary=m_salary+m_salary*10/100;
}
void Engineer::display(){
    cout<< "ID: "<< id<< "Name: "<<name<<"Salary: "<<salary<<"Day of working : "<<exp<<"Code: "<<code<<endl;
}

Manager ::Manager(string id, string name, double salary,int exp,int code,int reprtees): Employee( m_empid,m_name,m_salary,m_exp),m_projCode(code),m_reportees(reprtees){}

void Manager::payroll(){
    cout<<"\nManager Payroll"<<endl;
    m_salary=m_reportees*PERDAYSAL;
}
void Manager::appraisal()
{
    cout<<"\n\nIncrementing salary of manager by 10%"<<endl;
    m_salary=m_salary+m_salary*10/100;
}
void Manager::display()
{
    cout<< "ID: "<< id<< "Name: "<<name<<"Salary: "<<salary<<"Day of working : "<<exp<<"Code: "<<code<<endl;
}
Trainee ::Trainee(string id, string name, double salary,string track_code,double score): Employee( m_empid,m_name,m_salary,m_exp),m_track(track_code),score(score){}

void Trainee::payroll()
{
    cout<<"\nTrainee Payroll"<<endl;
    m_salary=1000*(score/100);
}
void Trainee::appraisal()
{
    cout<<"\n\nIncrementing salary of trainee by 10%"<<endl;
    m_salary=m_salary+m_salary*10/100;
}
void Trainee::display()
{
    cout<< "ID: "<< id<< "Name: "<<name<<"Salary: "<<salary<<"Day of working : "<<exp<<"Code: "<<code<<endl;
}

int main()
{
    Trainee a1("18001","tarun",10000,"ABC",93);
    a1.display();
    return 0;
}

