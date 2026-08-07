//To determine whether a number is prime or not//

#include <stdio.h>
int main()
{
    int i, num;
    printf("Enter the number: \n");
    scanf("%d", &num); 
    if (num == 1 || num == 0)
    printf("Not a prime number\n");
    
    for(i=2; i<=(num-1); i++)
    {
        if(num % i == 0)
        {
             printf("Not a prime number");
            break;
        }
    }
    if(i == num)
    printf("Prime number");

    return 0;
}