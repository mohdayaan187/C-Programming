//To print 24 hours of the day with suitable suffixes//

#include <stdio.h>
int main() 
{
    int i;
    printf("24 hours of the day are:\n");
    printf("12 Midnight\n");

    for (i = 1; i <= 11; i++) 
        printf("%d AM\n", i);
        
    printf("12 Noon\n");

    for (i = 1; i <= 11; i++) 
        printf("%d PM\n", i);

    return 0;
}