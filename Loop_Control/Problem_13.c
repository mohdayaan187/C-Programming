//To print prime numbers from 100 to 300//

#include <stdio.h>
int main()
{
    int num, i;
    printf("Prime numbers from 1 to 300 are: \n");

    for(num=1; num<=300; num++)
    {
        for(i=2; i<=num-1; i++)
        {
            if(num % i == 0)
            break;
        }
        if(i==num)
        printf("%d\t", num);
    }
    return 0;
}