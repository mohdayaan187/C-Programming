#include <stdio.h>
#include <math.h>
float distance(float x1, float y1, float x2, float y2);
float area(float x1, float y1, float x2, float y2, float x3, float y3);
int is_inside(float x1, float y1, float x2, float y2, float x3, float y3, float x, float y);

int main() {
    float x1, y1, x2, y2, x3, y3, x, y;
    printf("Enter coordinates of Vertex A (x1 y1): ");
    scanf("%f %f", &x1, &y1);
    printf("Enter coordinates of Vertex B (x2 y2): ");
    scanf("%f %f", &x2, &y2);
    printf("Enter coordinates of Vertex C (x3 y3): ");
    scanf("%f %f", &x3, &y3);

    printf("Enter coordinates of Point P to check (x y): ");
    scanf("%f %f", &x, &y);

    int result = is_inside(x1, y1, x2, y2, x3, y3, x, y);

    if (result == 1) {
        printf("1 (Point lies INSIDE the triangle)\n");
    } else {
        printf("0 (Point lies OUTSIDE the triangle)\n");
    }
    return 0;
}
float distance(float x1, float y1, float x2, float y2) 
{
    float dis;
    dis = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    return dis;
}
float area(float x1, float y1, float x2, float y2, float x3, float y3) 
{
    float a = distance(x1, y1, x2, y2);
    float b = distance(x2, y2, x3, y3);
    float c = distance(x3, y3, x1, y1);

    float s = (a + b + c) / 2.0;
    float area = sqrt(s * (s - a) * (s - b) * (s - c));
    return area;
}
int is_inside(float x1, float y1, float x2, float y2, float x3, float y3, float x, float y) {
    float A  = area(x1, y1, x2, y2, x3, y3);
    float A1 = area(x, y, x2, y2, x3, y3);
    float A2 = area(x1, y1, x, y, x3, y3);
    float A3 = area(x1, y1, x2, y2, x, y);
    int result;
    if(fabs(A - (A1 + A2 + A3)) < 0.0001)
        result = 1;
    else
        result = 0;
    return result;
}