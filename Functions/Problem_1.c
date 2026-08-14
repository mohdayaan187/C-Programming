//Function to find square of a number//

#include <stdio.h>
float square(float);
int main()
{
    float num, sq;
    printf("Enter a number: ");
    scanf("%f", &num);
    sq = square(num);
    printf("Square of %.3f is %.3f\n", num, sq);
    return 0;
}
float square(float num)
{
    float sq;
    sq = num * num;
    return(sq);
}