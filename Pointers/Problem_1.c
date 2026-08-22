//To find area and perimeter of a circle using a single function call//

#include <stdio.h>
void area_perimeter(int, float *, float *);
int main()
{
    int r;
    float ar, peri;
    printf("Enter the radius of the circle: ");
    scanf("%d", &r);
    area_perimeter(r, &ar, &peri);
    printf("Area of circle = %f\n", ar);
    printf("Perimeter of circle = %f", peri);
    return 0;

}
void area_perimeter(int r, float *ar, float *peri)
{
    *ar = 3.14 * r * r;
    *peri = 2 * 3.14 * r;
}