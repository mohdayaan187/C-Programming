//To find whether the area of rectangle is greater than its perimeter//

#include <stdio.h>
int main()
{
    float length, breadth, area, perimeter;
    printf("Enter the length and breadth of the rectangle: ");
    scanf("%f %f", &length, &breadth);

    area = length * breadth; 
    perimeter = 2 * (length + breadth); 

    if (area > perimeter)
        printf("The area of the rectangle is greater than its perimeter");
    else if (area < perimeter)
        printf("The area of the rectangle is less than its perimeter");
    else
        printf("The area of the rectangle is equal to its perimeter");

    return 0;
}