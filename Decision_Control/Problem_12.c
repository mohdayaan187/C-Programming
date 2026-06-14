//To find the absolute value of a number//

#include <stdio.h>
int main()
{
    float num, abs_value;
    printf("Enter a number: ");
    scanf("%f", &num);

    if (num < 0)
        abs_value = -num; 
    else
        abs_value = num; 

    printf("The absolute value of %.2f is %.2f", num, abs_value);

    return 0;
}