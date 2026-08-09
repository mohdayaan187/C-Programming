//To find approximate value of natural logarithm by calculating first seven terms of the series://
//(x-1)/x + 1/2(x-1/x)^2 + 1/2(x-1/x)^3 + .....//

#include <stdio.h>
#include <math.h>
int main()
{
    int i;
    float x, y;
    printf("Enter vaue of x: \n");
    scanf("%f", &x);

    y = (x - 1)/x;
    float sum = y;

    for(i=2; i<=7; i++)
    {
        sum = sum + ((1.0/i)*pow(y,i));
    }
    printf("Sum = %.4f", sum);

    return 0;
}