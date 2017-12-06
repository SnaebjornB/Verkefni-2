#ifndef EMPLOYEE_SALARY_H
#define EMPLOYEE_SALARY_H

#include <iostream>
#include <string>

using namespace std;

class Employee_Salary
{
    public:
        Employee_Salary(string name, int ssn, int month, int year, double wage);
        string get_name();
        int get_ssn();
        int get_month();
        int get_year();
        double get_wage();

        friend ostream& operator << (ostream& out, Employee_Salary& employee);
    private:
        string name;
        int ssn;
        int month;
        int year;
        double wage;
};

#endif // EMPLOYEE_SALARY_H
