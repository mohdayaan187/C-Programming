//To calculate wind chill factor//
#include <stdio.h>
#include <math.h>
int main()
{
    float vel, temp, wcf;
    printf("Enter the wind speed in miles per hour: ");
    scanf("%f", &vel);
    printf("Enter the temperature in Fahrenheit: ");
    scanf("%f", &temp);
    
    wcf = 35.74 + (0.6215 * temp) + (0.4275 * temp - 35.75) * pow(vel, 0.16);
    
    printf("The wind chill factor is: %.2f\n", wcf);
    
    return 0;
}