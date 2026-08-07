//To find sum of first seven terms of the series: 1/1! + 2/2! + 3/3! ...//
#include <stdio.h>
int main()
{
    int i, j;
    float fact;
    float sum = 0.0;
    
    for(i=1; i<=7; i++)
    {
        fact = 1.0;
        for(j=1; j<=i; j++)
        {
            fact = fact*j;
        }
        sum = sum + i/fact;
    }
    printf("Sum of first seven terms of the series is %f", sum);
    return 0;
}