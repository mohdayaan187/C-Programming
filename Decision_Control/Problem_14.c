//To find out the day on 1st of January of a given year if it was Monday on 01-01-01//

#include <stdio.h>
int main()
{
    int year, firstday;
    int normal_days, leap_days, total_days;

    printf("Enter the year: ");
    scanf("%d", &year);

    normal_days = (year - 1) * 365;
    leap_days = (year - 1) / 4 - (year - 1) / 100 + (year - 1) / 400;
    total_days = normal_days + leap_days;

    firstday = total_days % 7;

    if (firstday == 0)
        printf("The day on 1st January of the year %d is Monday.", year);
    else if (firstday == 1)
        printf("The day on 1st January of the year %d is Tuesday.", year);
    else if (firstday == 2)
        printf("The day on 1st January of the year %d is Wednesday.", year);
    else if (firstday == 3)
        printf("The day on 1st January of the year %d is Thursday.", year);
    else if (firstday == 4)
        printf("The day on 1st January of the year %d is Friday.", year);
    else if (firstday == 5)
        printf("The day on 1st January of the year %d is Saturday.", year);
    else
        printf("The day on 1st January of the year %d is Sunday.", year);

    return 0;
}