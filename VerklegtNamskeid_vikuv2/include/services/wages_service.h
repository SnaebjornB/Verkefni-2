#ifndef WAGES_SERVICE_H
#define WAGES_SERVICE_H


#include "employee_salary.h"

class Wages_service
{
    public:
        Wages_service();
        void add_salary(Employee_Salary employee);
        void validate_record(Employee_Salary& employee);

    private:
        int date;
        int year;
};

#endif // WAGES_SERVICE_H
