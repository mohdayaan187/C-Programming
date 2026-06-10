//To convert temperature from fahrenheit to celsius//

#include <stdio.h>
int main()
{
    float fahrenheit, celsius;
    printf("Enter temperature in fahrenheit: ");
    scanf("%f", &fahrenheit);
    celsius = (fahrenheit - 32) * 5.0 / 9.0;
    printf("Temperature in celsius: %.2f", celsius);    
    return 0;
}