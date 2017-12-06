#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <iostream>
#include <string>

using namespace std;

class Employee
{
    public:
        Employee(string name, int ssn);
        string get_name();
        int get_ssn();

        friend ostream& operator << (ostream& out, Employee& employee);
    private:
        string name;
        int ssn;
};

#endif // EMPLOYEE_H
