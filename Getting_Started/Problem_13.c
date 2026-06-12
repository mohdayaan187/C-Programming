//To calculate sum of digits of a 5-digit number//

#include <stdio.h>
int main()
{
    int num, sum;
    int d1, d2, d3, d4, d5;
    
    printf("Enter a 5-digit number: ");
    scanf("%d", &num);

    d5 = num % 10;
    num = num / 10;
    
    d4 = num % 10;
    num = num / 10;

    d3 = num % 10;
    num = num / 10;

    d2 = num % 10;
    num = num / 10; 

    d1 = num % 10; 
    
    sum = d1 + d2 + d3 + d4 + d5;
    printf("Sum of digits = %d", sum);

    return 0;
}