//To calculate wind chill from the given temperature and wind speed//

#include <stdio.h>
#include <math.h>
int main()
{
    float t, v, wcf;
    printf("Enter the temperature in Fahrenheit (t <= 50): ");
    scanf("%f", &t);
    printf("Enter the wind speed in miles per hour (v >= 3): ");
    scanf("%f", &v);

    wcf = 35.74 + (0.6215 * t) - (35.75 * pow(v, 0.16)) + (0.4275 * t * pow(v, 0.16)); 

    printf("The wind chill factor is: %.2f", wcf);
    
    return 0;
}