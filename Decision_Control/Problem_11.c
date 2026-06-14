//To determine whether a point lies inside, outside or on the circle//

#include <stdio.h>
int main()
{
    float h, k, r, distance;
    float x, y;
    printf("Enter the center of the circle (h, k) and the radius: ");
    scanf("%f %f %f", &h, &k, &r);
    printf("Enter the coordinates of the point (x, y): ");
    scanf("%f %f", &x, &y);

    distance = (x - h) * (x - h) + (y - k) * (y - k);

    if (distance < r * r)
        printf("The point lies inside the circle.");
    else if (distance == r * r)
        printf("The point lies on the circle.");
    else
        printf("The point lies outside the circle.");

    return 0;
}