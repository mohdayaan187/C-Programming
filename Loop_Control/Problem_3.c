//To find factorial of a number//

#include <stdio.h>
int main()
{
    int num;
    int fact=1, i=1;
    printf("Enter the number: ");
    scanf("%d", &num);

    while(i<=num)
    {
        fact = fact*i;
        i++;
    }
    printf("Factorial of %d is %d\n", num, fact);
    return 0;
}