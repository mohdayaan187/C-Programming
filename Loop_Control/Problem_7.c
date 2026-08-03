//To take input and display count of positive, negative and zeroes//

#include <stdio.h>
int main()
{
    int tot_num, num;
    int pos, neg, zeroes;
    int i=1;
    pos = neg = zeroes = 0;

    printf("How many numbers do you want to enter?\n");
    scanf("%d", &tot_num);

    while(i<=tot_num)
    {
        scanf("%d", &num);

        if(num>0)
        pos = pos + 1;

        else if(num<0)
        neg = neg + 1;

        else if(num == 0)
        zeroes = zeroes + 1;

        i++;
    }

    printf("Positive, Negative and Zeroes entered are: \n");

    printf("Positive numbers: %d\n", pos);
    printf("Negative numbers: %d\n", neg);
    printf("Zeroes: %d\n", zeroes);

    return 0;
}