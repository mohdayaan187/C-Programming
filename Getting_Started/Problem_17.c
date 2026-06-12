//To calculate all trigonometric ratios of an angle//

#include <stdio.h>
#include <math.h>
#define PI 3.14159

int main()
{
    float angle, radian;
    printf("Enter the angle in degrees: ");
    scanf("%f", &angle);

    radian = angle * (PI / 180);

    printf("Sine: %.2f\n", sin(radian));
    printf("Cosine: %.2f\n", cos(radian));
    printf("Tangent: %.2f\n", tan(radian));
    printf("Cosecant: %.2f\n", 1 / sin(radian));
    printf("Secant: %.2f\n", 1 / cos(radian));
    printf("Cotangent: %.2f\n", 1 / tan(radian));

    return 0;
}