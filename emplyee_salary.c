// Write a C program that accepts an employee's ID, total worked hours of a month and the amount he received per hour. Print the employee's ID and salary (with two decimal places) of a particular month

#include <stdio.h>

int main(int argc, char const *argv[])
{
    
    char employee_id[10];
    int salary_per_hour,working_hour,monthly_salary;

    printf("Enter Staff ID: ");
    scanf("%s", &employee_id);

    printf("\nEnter Hourly Salary: ");
    scanf("%d", &salary_per_hour);

    printf("\nEnter Working Hour: ");
    scanf("%d", &working_hour);

    monthly_salary = salary_per_hour * working_hour;

    printf("\nEmployee ID: %s\nMonthly Salary: %d$", employee_id,monthly_salary);

    return 0;
}
