//To print weight of a commodity in grams, tons and pounds that is input in kilograms using a single function call//

#include <stdio.h>
void commodity_unit(float, float *, float *, float *);
int main()
{
    float kg; 
    float g, ton, pound;
    printf("Enter weight of commodity in kgs: ");
    scanf("%f", &kg);
    commodity_unit(kg, &g, &ton, &pound);
    printf("Weight of commodity in grams = %.2f\n", g);
    printf("Weight of commodity in tons = %.5f\n", ton);
    printf("Weight of commodity in pounds = %.3f\n", pound);
    return 0;
}
void commodity_unit(float kg, float *g, float *ton, float *pound)
{
    *g = kg * 1000;
    *ton = kg / 1000;
    *pound = kg * 2.20462;
}