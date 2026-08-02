//To find a number raised to the power of another number"

#include <stdio.h>
int main()
{
    float a, power=1;
    int b, i=1;
    printf("Enter the two numbers: ");
    scanf("%f %d", &a, &b);

    while (i<=b)
    {
        power = power*a;
        i++;
    }
    printf("%f raised to the power %d is %f", a, b, power);
    return 0;
}