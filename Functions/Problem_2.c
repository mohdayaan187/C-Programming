//Function to find factorial of a number//

#include <stdio.h>
int factorial(int);
int main()
{
    int num, fact;
    printf("Enter the number: ");
    scanf("%d", &num);
    fact = factorial(num);
    printf("Factorial of %d is %d", num, fact);
    return 0;
}
int factorial(int num)
{
    int fact = 1;
    int i;
    for(i=1; i<=num; i++)
        fact = fact * i;
    return(fact);
}