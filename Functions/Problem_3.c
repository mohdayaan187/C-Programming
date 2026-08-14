//Function to find a raised to the power b//

#include <stdio.h>
float power(float, int);
int main()
{
    float a, pow;
    int b;
    printf("Enter value for a and b for a^b: ");
    scanf("%f %d", &a, &b);
    pow = power(a, b);
    printf("%f raised to the power %d is %.3f\n", a, b, pow);
    return 0;
}
float power(float a, int b)
{
    float pow = 1.0;
    int i;
    for(i=1; i<=b; i++)
        pow = pow * a;
    return(pow);
}