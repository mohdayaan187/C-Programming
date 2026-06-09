//To calculate simple interest by taking input from the user//

#include <stdio.h>
int main()
{
    int p, t;
    float r, si;
    printf("Enter the principal amount: ");
    scanf("%d", &p);
    printf("Enter the time in years: ");
    scanf("%d", &t);
    printf("Enter the rate of interest: ");
    scanf("%f", &r);
    si = (p * t * r) / 100;
    printf("The simple interest is: %f", si);
    return 0;
}