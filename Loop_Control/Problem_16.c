//To calculate approximate level of intelligence of a person using formula//

#include <stdio.h>
int main()
{
    int y;
    float x, i;
    printf("Level of intelligence: \n");
    printf(" i\t\ty\t\t x\n");

    for(y=1; y<=6; y++)
    {
        for(x=5.5; x<=12.5; x=x+0.5)
        {
            i = 2 + (y + 0.5*x);
            printf("%.2f\t\t%d\t\t%.2f\n", i, y, x);
        }
    }
    return 0;
}