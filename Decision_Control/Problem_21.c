//To check the validity of a triangle based on the given lengths//

#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter the lengths of the three sides of the triangle: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a > 0 && b > 0 && c > 0 && a + b > c && a + c > b && b + c > a)
        printf("The triangle is valid.");
    else
        printf("The triangle is not valid.");

    return 0;
}