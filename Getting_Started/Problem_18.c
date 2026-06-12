//To interchange the contents of two locations//

#include <stdio.h>
int main()
{
    int C, D, temp;
    printf("Enter the value for location C: ");
    scanf("%d", &C);
    printf("Enter the value for location D: ");
    scanf("%d", &D);

    temp = C; 
    C = D; 
    D = temp; 

    printf("After interchanging:\n");
    printf("Value stored in C: %d\n", C);
    printf("Value stored in D: %d", D);

    return 0;
}