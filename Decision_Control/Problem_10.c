//To check if the three points lie on one straight line//

#include <stdio.h>
int main()
{
    float x1, y1, x2, y2, x3, y3;
    printf("Enter the coordinates of the three points (x1, y1), (x2, y2), (x3, y3): ");
    scanf("%f %f %f %f %f %f", &x1, &y1, &x2, &y2, &x3, &y3);

    if ((y2 - y1) * (x3 - x2) == (y3 - y2) * (x2 - x1))
        printf("The three points lie on one straight line.");
    else
        printf("The three points do not lie on one straight line.");

    return 0;
}