//To calculate area and perimeter of a rectangle and area and circumference of a circle//

#include <stdio.h>
#define PI 3.14159  
int main()
{
    float l, w, r;
    float area_rec, perimeter_rec;
    float area_circle, circumference_circle;

    printf("Enter the length and width of the rectangle: ");
    scanf("%f %f", &l , &w);
    
    area_rec = l * w;
    perimeter_rec = 2 * (l + w);

    printf("Enter the radius of the circle: ");
    scanf("%f", &r);

    area_circle = PI * r * r;
    circumference_circle = 2 * PI * r;

    printf("Perimeter of the rectangle: %.2f\n", perimeter_rec);
    printf("Area of the rectangle: %.2f\n", area_rec);
    printf("Circumference of the circle: %.2f\n", circumference_circle);
    printf("Area of the circle: %.2f\n", area_circle);
    
    return 0;
}