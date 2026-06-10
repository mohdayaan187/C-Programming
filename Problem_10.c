//To reverse a 5-digit number//

#include <stdio.h>
int main()
{
    int num, revnum;
    int d1, d2, d3, d4, d5;
    
    printf("Enter a 5-digit number not ending with zero: ");
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
    
    revnum = d5 * 10000 + d4 * 1000 + d3 * 100 + d2 * 10 + d1;
    printf("Reversed number: %d", revnum);

    return 0;
}