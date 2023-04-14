#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>  

int main() {
    char EmployeeName[50], EmployeeCode;
    int salary, WorkingHour, DefaultWorkHour, ovt, OvtSalary;

    DefaultWorkHour = 32;
    OvtSalary = 45000;

    printf("Input employee name: ");
    scanf("%s", &EmployeeName);

    printf("Select group code [A/B/C/D]  : ");
    EmployeeCode = getche();

    switch(EmployeeCode) {
        case 'A':
        case 'a':
            salary = 52000;
            break;
        case 'B':
        case 'b':
            salary = 65000;
            break;
        case 'C':
        case 'c':
            salary = 78000;
            break;
        case 'D':
        case 'd':
            salary = 112000;
            break;
        default:
            printf("\nEmployee group name must A/B/C/D");
            printf("\nEXIT SUCCESS");
            exit(0);
    }

    printf("\nInput working hour: ");
    scanf("%i", &WorkingHour);

    if(WorkingHour > DefaultWorkHour){
        ovt = WorkingHour - DefaultWorkHour;
        salary = (salary*DefaultWorkHour) + ovt*OvtSalary;
    }else{
        salary = salary*WorkingHour;
    }

    printf("\nEmployee Name: %s\n", EmployeeName);
    printf("Employee Salary: %i\n", salary);

    getch();
    return 0;
}