//To print numbers 1 to 10 in triangular form increasing downwards//

#include <stdio.h>
int main()
{
    int i, j, space;
    int num = 1;
    int total_rows = 4;

    for(i=1; i<=total_rows; i++)
    {
        for(space=1; space<=total_rows - i; space++)
        {
            printf(" ");
        }
        for(j=1; j<=i; j++)
        {
            printf("%d ", num);
            num++;
        }
        printf("\n");
    }

    return 0;
}