//To find whether a given point lies on X-axis, Y-axis or origin//

#include <stdio.h>
int main()
{
    float x, y;
    printf("Enter the coordinates of the point (x, y): ");
    scanf("%f %f", &x, &y);

    if (x == 0 && y == 0)
        printf("The point lies at the origin.");
    else if (x == 0)
        printf("The point lies on the Y-axis.");
    else if (y == 0)
        printf("The point lies on the X-axis.");
    else
        printf("The point does not lie on either axis.");

    return 0;
}