//To calculate amount using 10 sets of principal, rate, no. of years & interest compounding factor//

#include <stdio.h>
#include <math.h>
int main()
{
    int i, n;
    float p, r, q, a;

    for(i=1; i<=10; i++)
    {
        printf("Enter principal, rate of interest, no. of years & coumpounding factor: \n");
        scanf("%f %f %d %f", &p, &r, &n, &q);
        a = p*(pow((1 + r/(100*q)),n*q));
        printf("Amount = %.2f\n", a);
    }
    return 0;
}