//To convert cartesian coordinates to polar coordinates//

#include <stdio.h>
#include <math.h>

int main()
{
    float x, y, r, theta;
    printf("Enter the cartesian coordinates (x and y): ");
    scanf("%f %f", &x, &y);
    
    r = sqrt(x * x + y * y); 
    theta = atan(y / x) * (180 / M_PI); 

    printf("Polar coordinates (r, theta) = (%.2f, %.2f degrees)", r, theta);
    
    return 0;
}