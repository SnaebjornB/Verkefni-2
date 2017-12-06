#include "employee_salary.h"

Employee_Salary::Employee_Salary(string name, int ssn, int month, int year, double wage){
    this->name = name;
    this->ssn = ssn;
    this->month = month;
    this->year = year;
    this->wage = wage;
}

string Employee_Salary::get_name(){
    return this->name;
}

int Employee_Salary::get_ssn(){
    return this->ssn;
}

int Employee_Salary::get_month(){
    return this->month;
}

int Employee_Salary::get_year(){
    return this->year;
}

double Employee_Salary::get_wage(){
    return this->wage;
}

ostream& operator << (ostream& out, Employee_Salary& employee){
    out << "Name: " << employee.name << endl
        << "Ssn:  " << employee.ssn << endl
        << "Month:" << employee.month << endl
        << "Year: " << employee.year << endl
        << "Wages:" << employee.wage << endl;


    return out;
}
