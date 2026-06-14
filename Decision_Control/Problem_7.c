//To check whether a triangle is valid or not based on angle input by the user//

#include <stdio.h>
int main()
{
    float a1, a2, a3;
    printf("Enter the three angles of the triangle: ");
    scanf("%f %f %f", &a1, &a2, &a3);

    if (a1 + a2 + a3 == 180)
        printf("The triangle is valid.");
    else
        printf("The triangle is not valid.");

    return 0;
}