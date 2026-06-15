//To determine whether the driver should be insured or not//

#include <stdio.h>
int main()
{
    int age;
    char gen, ms;
    printf("Enter the age of the driver: ");
    scanf("%d", &age);
    printf("Enter the gender (M/F) of the driver: ");
    scanf(" %c", &gen);
    printf("Enter the marital status (M/U) of the driver: ");
    scanf(" %c", &ms);

    if ((ms == 'M' || ms == 'm') || (ms == 'U' || ms == 'u') && (gen == 'M' || gen == 'm') && age > 30 || (ms == 'U' || ms == 'u') && (gen == 'F' || gen == 'f') && age > 25)
        printf("The driver should be insured.");
    else
        printf("The driver should not be insured.");
    return 0;   
}