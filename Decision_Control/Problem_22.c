//To calculate BMI of a person and determine the category based on the BMI value//

#include <stdio.h>
int main()
{
    float weight, height, bmi;
    printf("Enter weight in kilograms: ");
    scanf("%f", &weight);
    printf("Enter height in meters: ");
    scanf("%f", &height);

    bmi = weight / (height * height); 

    printf("Your BMI is: %.1f\n", bmi);

    if (bmi < 15)
        printf("Category: Starvation");
    else if (bmi > 15 && bmi <= 17.5)
        printf("Category: Anorexic");
    else if (bmi > 17.5 && bmi <= 18.5)
        printf("Category: Underweight");
    else if (bmi > 18.5 && bmi <= 24.9)
        printf("Category: Ideal");
    else if (bmi > 24.9 && bmi <= 29.9)
        printf("Category: Overweight");
    else if (bmi > 29.9 && bmi <= 39.9)
        printf("Category: Obese");
    else if (bmi >= 40)
        printf("Category: Morbidly Obese");

    return 0;
}