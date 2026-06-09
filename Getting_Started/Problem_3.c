//To calculate Dev's gross salary//

#include <stdio.h>
int main()
{
    float basic, da, hra, gross_salary;
    printf("Enter the basic salary: ");
    scanf("%f", &basic);
    da = 0.4 * basic; 
    hra = 0.2 * basic; 
    gross_salary = basic + da + hra; 
    printf("Basic salary is: %f\n", basic);
    printf("Dearness allowance is: %f\n", da);
    printf("House rent allowance is: %f\n", hra);
    printf("Dev's gross salary is: %f", gross_salary);
    return 0;
}