//To calculate all trigonometric ratios of an angle//
#include <stdio.h>
#include <math.h>
#define PI 3.141592
int main()
{
    float angle, radian, sine, cosine, tangent, cosecant, secant, cotangent;
    printf("Enter the angle in degrees: ");
    scanf("%f", &angle);
    
    radian = angle * (PI / 180.0);
    
    sine = sin(radian);
    cosine = cos(radian);
    tangent = tan(radian);
    
    printf("Sine: %.4f\n", sine);
    printf("Cosine: %.4f\n", cosine);
    printf("Tangent: %.4f\n", tangent);
    return 0;
}