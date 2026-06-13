//To calculate the gross salary of an employee based on the basic salary and allowances//

#include <stdio.h>
int main()

{
    float basic, DA, HRA, gross_salary;
    printf("Enter the basic salary: ");
    scanf("%f", &basic);

    if (basic < 1500)
    {
        DA = 0.9 * basic; 
        HRA = 0.1 * basic; 
    }
    else
    {
        DA = 0.98 * basic; 
        HRA = 500; 
    }

    gross_salary = basic + DA + HRA; 

    printf("Basic salary is: %f\n", basic);
    printf("Dearness allowance is: %f\n", DA);
    printf("House rent allowance is: %f\n", HRA);
    printf("Gross salary of the employee is: %f", gross_salary);

    return 0;
}