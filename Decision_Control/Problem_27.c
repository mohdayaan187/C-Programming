//To determine leap year or not using conditional operator//

#include <stdio.h>
int main ()
{
    int year;
    printf("Enter the year: ");
    scanf("%d", &year);
    year % 100 == 0 ? (year % 400 == 0 ? printf("Leap year") : printf("Not a leap year")) : (year % 4 == 0 ? printf("Leap year") : printf("Not a leap year"));
    return 0;
}
