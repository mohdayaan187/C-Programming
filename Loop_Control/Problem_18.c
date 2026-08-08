//To determine population of a town at the end of each year of a decade if it increases 10% yearly//

#include <stdio.h>
int main()
{
    int year;
    float pop = 100000.0;
    printf("Population at the end of year-10 is %.0f\n", pop);

    for(year=9; year>=1; year--)
    {
        pop = pop/1.1;
        printf("Population at the end of year-%d is %.0f\n", year, pop);
    }
    return 0;
}