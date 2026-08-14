//To romanise an year input by the user//

/* Convert given year into its roman equivalent */
#include <stdio.h>
int romaneq ( int, int, char );
int main()
{
    int year;
    printf ( "Enter year: " );
    scanf ( "%d", &year);

    year = romaneq ( year, 1000, 'M' );
    year = romaneq ( year, 500, 'D' );
    year = romaneq ( year, 100, 'C' );
    year = romaneq ( year, 50, 'L' );
    year = romaneq ( year, 10, 'X' );
    year = romaneq ( year, 5, 'V' );
    romaneq ( year, 1, 'I' );
    return 0;
}
int romaneq (int year, int roman, char ch)
{
    int i, remainder;
    remainder = year / roman;
    for ( i = 1 ; i <= remainder ; i++ )
        printf ( "%c", ch ) ;

    return ( year % roman ) ;
}