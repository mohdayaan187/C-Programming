//To circularly shift values of a, b and c towards the right using function calls using pointers//

#include <stdio.h>
void circular_shift(int *, int *, int *);
int main()
{
    int a=5;
    int b=8;
    int c=10;
    printf("Value of a, b, c before shift = %d %d %d\n", a, b, c);
    circular_shift(&a, &b, &c);
    return 0;
}
void circular_shift(int *a, int *b, int *c)
{
    int n;
    printf("How many times do you want to perform circular shift to the right? ");
    scanf("%d", &n);
    int i;
    int t;
    for(i=1; i<=n; i++)
    {
        t = *c;
        *c = *b;
        *b = *a;
        *a = t;
        printf("Value of a, b, c after shift = %d %d %d\n", *a, *b, *c);
    }
}