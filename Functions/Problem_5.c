//Function to find prime factors of a number//

#include <stdio.h>
void primefactors(int);
int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    printf("Prime factors are: ");
    primefactors(num);
    return 0;
}
void primefactors(int num)
{
    int i;
    for(i=2; i<=num;)
    {
        if(num % i == 0)
        {
            printf("%d ", i);
            num = num / i;
        }
        else
            i++;
    }
    return;
}