//To determine the grade of steel based on the given hardness, carbon content and tensile strength//

#include <stdio.h>
int main()
{
    float hardness, cc, ts;
    printf("Enter the hardness, carbon content and tensile strength of the steel: ");
    scanf("%f %f %f", &hardness, &cc, &ts);


    if (hardness >= 50 && cc <= 0.7 && ts >= 5600)
        printf("Grade of steel is 10.");
    else if (hardness >= 50 && cc <= 0.7)
        printf("Grade of steel is 9.");
    else if (cc <= 0.7 && ts >= 5600)
        printf("Grade of steel is 8.");
    else if (hardness >= 50 && ts >= 5600)
        printf("Grade of steel is 7.");
    else if (hardness >= 50 || cc <= 0.7 || ts >= 5600)
        printf("Grade of steel is 6.");
    else
        printf("Grade of steel is 5.");

    return 0;
}