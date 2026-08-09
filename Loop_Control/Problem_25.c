//To find sum and average of the numbers input through the keyboard//

#include <stdio.h>
int main()
{
    int tot_num, i;
    float num, average;
    float sum = 0.0;
    printf("How many numbers do you want to enter?\n");
    scanf("%d", &tot_num);
    printf("Enter the numbers: \n");

    for(i=1; i<=tot_num; i++)
    {
        scanf("%f", &num);
        sum = sum + num;
    }
    average = sum/tot_num;
    printf("Sum of numbers = %.2f\n", sum);
    printf("Average of numbers = %.2f", average);

    return 0;
}