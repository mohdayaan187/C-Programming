//To print Ramanujan numbers less than 100000//

#include <stdio.h>

int main() 
{
    int a, b, c, d;
    int sum1, sum2;
    int limit = 46; 
    printf("Ramanujan numbers less than 100000 are:\n");

    for (a = 1; a <= limit; a++) 
    {
        for (b = a + 1; b <= limit; b++) 
        { 
            sum1 = a * a * a + b * b * b;

            if (sum1 > 100000) 
                break;

            for (c = a + 1; c <= limit; c++) 
            {
                for (d = c + 1; d <= limit; d++) 
                {
                    sum2 = c * c * c + d * d * d;

                    if (sum2 > 100000) 
                        break;

                    if (sum1 == sum2) 
                    {
                        printf("%d = %d^3 + %d^3 = %d^3 + %d^3\n", sum1, a, b, c, d);
                    }
                }
            }
        }
    }
    return 0;
}