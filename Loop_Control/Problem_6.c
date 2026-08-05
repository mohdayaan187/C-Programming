//To print all armstrong numbers between 100 and 500//

#include <stdio.h>
#include <math.h>
int main()
{
    int d1, d2, d3;
    int temp;
    int i=101;

    printf("Armstrong numbers between 100 and 500 are: \n");

    while(i<500)
    {
        temp = i;
        d1 = temp % 10;
        temp = temp/10;

        d2 = temp % 10;
        temp = temp/10;

        d3 = temp % 10;

        if(pow(d1,3) + pow(d2,3) + pow(d3,3) == i)
            printf("%d\n", i);

        i++;
    }
    return 0;
}