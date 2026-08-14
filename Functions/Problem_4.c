//Function to check whether the year input is leap year or not//

#include <stdio.h>
void leapyear(int);
int main()
{
    int year;
    printf("Enter the year: ");
    scanf("%d", &year);
    leapyear (year);
    return 0;
}
void leapyear(int year)
{
    if((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
        printf("Leap Year\n");
    else
        printf("Not a Leap year\n");
    return;
}