//To calculate distance between two cities in different units//

#include <stdio.h>
int main()
{
    float km, m, cm, inch, ft;;
    printf("Enter the distance between two cities in kilometers: ");
    scanf("%f", &km);
    m = km * 1000; 
    cm = m * 100;
    inch = cm / 2.54;
    ft = inch / 12;
    printf("Distance in meteres is: %.2f metres\n", m);
    printf("Distance in centimeters is: %.2f centimeters\n", cm);
    printf("Distance in inches is: %.2f inches\n", inch);
    printf("Distance in feet is: %.2f feet\n", ft);
    return 0;
}