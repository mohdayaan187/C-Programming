//To interchange contents of two variables//
#include <stdio.h>

int main()
{
    int c, d, temp;
    printf("Enter two numbers at location C and D: ");
    scanf("%d %d", &c, &d);
    
    temp = c;
    c = d;
    d = temp;
    
    printf("After interchanging: \n");
    printf("Number at location C: %d\n", c);
    printf("Number at location D: %d\n", d);
    return 0;
}   