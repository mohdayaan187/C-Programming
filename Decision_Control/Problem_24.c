//To determine the weight class of a boxer based on the given weight//

#include <stdio.h>
int main()
{
    float weight;
    printf("Enter the weight of the boxer in pounds: ");
    scanf("%f", &weight);

    if (weight < 115)
        printf("The boxer is in the Flyweight class.");
    else if (weight >= 115 && weight < 121)
        printf("The boxer is in the Bantamweight class.");
    else if (weight >= 121 && weight < 153)
        printf("The boxer is in the Featherweight class.");
    else if (weight >= 153 && weight < 189)
        printf("The boxer is in the Middleweight class.");
    else if (weight >= 189)
        printf("The boxer is in the Heavyweight class.");

    return 0;
}