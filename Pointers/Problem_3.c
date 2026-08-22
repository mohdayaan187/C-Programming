//To find a raised to the power b and factorial of a number using single fucntion call//

#include <stdio.h>
void power_factorial(float, int, int, float *, int *);
int main()
{
    float a, pow;
    int b, fact, num;
    printf("Enter value of a and b for a^b: ");
    scanf("%f %d", &a, &b);
    printf("Enter the number to calculate its factorial: ");
    scanf("%d", &num);
    power_factorial(a, b, num, &pow, &fact);
    printf("%f raised to the power %d is %f\n", a, b, pow);
    printf("Factorial of %d is %d", num, fact);
    return 0;
}
void power_factorial(float a, int b, int num, float *pow, int *fact)
{
    int i, j;
    *pow = 1.0;
    *fact = 1;
    for(i=1; i<=b; i++)
        *pow = *pow * a;
    for(j=1; j<=num; j++)
        *fact = *fact * j;
}