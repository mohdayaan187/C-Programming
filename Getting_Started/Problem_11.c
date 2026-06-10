//To compute the smallest number of notes to give an amount of Rs. N//

#include <stdio.h>
int main()
{
    int N, total;
    int hun, fifty, ten, five, two, one;
    printf("Enter the amount in Rs.: ");
    scanf("%d", &N);

    hun = N / 100;
    N = N % 100;

    fifty = N / 50;
    N = N % 50;

    ten = N / 10;
    N = N % 10;

    five = N / 5;
    N = N % 5;
    two = N / 2;
    N = N % 2;

    one = N / 1;
    
    total = hun + fifty + ten + five + two + one;
    printf("Total number of notes required: %d\n", total);

    return 0;
}