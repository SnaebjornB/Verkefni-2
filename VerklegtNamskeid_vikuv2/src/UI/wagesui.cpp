#include "wagesui.h"

WagesUI::WagesUI()
{
    //ctor
}

void WagesUI::menu(){
    while (true){
        cout << "Please choose an action with the corresponding number: " << endl
             << "-------------------------------------------------------" << endl
             << "1. Add a salary record." << endl
             << "2. Get all salary records for an employee." << endl
             << "3. Get a total salary for a given employee on a given year." << endl
             << "4. Get the highest paid employee for a given year." << endl
             << endl
             << "Input: ";
        char input;
        cin >> input;
        check_input(input);
    }
}

void WagesUI::check_input(char input){
    if (input == '1'){

        wages_service.add_salary(add_record());
    }
    else if (input == '2'){
        cout << "Get all the salary records" << endl;
    }
    else if (input == '3'){
        cout << "Get the salary for an employee on a given year" << endl;
    }
    else if (input == '4'){
        cout << "Who made the most in a given year" << endl;
    }
    else{
        cout << "Invalid input !" << endl;
    }
}

Employee_Salary WagesUI::add_record(){
    string name;
    int ssn, month, year;
    double wage;

    cout << "Enter the name of the employee: ";
    cin >> ws;
    getline (cin, name);

    cout << "Enter the social security number of the employee: ";
    cin >> ssn;
    cout << "Enter the month (as a digit): ";
    cin >> month;
    cout << "Enter the year: ";
    cin >> year;
    cout << "Enter this months salary: ";
    cin >> wage;
    cout << endl;

    Employee_Salary employee(name, ssn, month, year, wage);

    return employee;
}
