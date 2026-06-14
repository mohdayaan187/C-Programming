//To check whether reverse of a 5-digit number is equal to the original number or not//

#include <stdio.h>
int main()
{
    int a, num, revnum;
    int d1, d2, d3, d4, d5;
    
    printf("Enter a 5-digit number not ending with zero: ");
    scanf("%d", &num);

    a=num;

    d5 = a % 10;
    a = a / 10;
    
    d4 = a % 10;
    a = a / 10;

    d3 = a % 10;
    a = a / 10;

    d2 = a % 10;
    a = a / 10;

    d1 = a % 10;

    revnum = d5 * 10000 + d4 * 1000 + d3 * 100 + d2 * 10 + d1;
    printf("Reversed number: %d\n", revnum);

    if (revnum == num)
        printf("The reverse of the number is equal to the original number.");
    else
        printf("The reverse of the number is not equal to the original number.");

    return 0;
}