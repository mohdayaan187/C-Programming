//To find range of a set of numbers input through the keyboard//

#include <stdio.h>
int main()
{
    int tot_num, num;
    int max, min, range;
    int i = 2;
    printf("How many numbers do you want to enter?\n");
    scanf("%d", &tot_num);

    printf("Enter the first number: \n");
    scanf("%d", &num);

    max = num;
    min = num;

    while(i <= tot_num)
    {
        printf("Enter the next number: \n");
        scanf("%d", &num);

        if(num < min)
        min = num;

        else if(num > max)
        max = num;

        i++;
    }
    range = max - min;

    printf("Total numbers entered are %d\n", tot_num);
    printf("Maximum number is %d\n", max);
    printf("Minimum number is %d\n", min);
    printf("Range of the number is %d", range);

    return 0;
}