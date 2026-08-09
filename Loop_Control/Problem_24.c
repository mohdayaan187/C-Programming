//To calculate sum of digits of a number entered through the keyboard//

#include <stdio.h>
int main()
{
    int num, i;
    int sum = 0;
    int remainder;
    printf("Enter the number: \n");
    scanf("%d", &num);

    for(i=1; num>0; i++)
    {
        remainder = num % 10;
        sum = sum + remainder;
        num = num/10;
    }
    printf("Sum of digits = %d", sum);

    return 0;
}