//To take input and display count of positive, negative and zeroes//

#include <stdio.h>
int main()
{
    int num;
    int pos, neg, zeroes;
    int i=1;
    char reply = 'y';
    pos = neg = zeroes = 0;

    while(reply == 'y' || reply == 'Y')
    {
        printf("Enter the number: ");
        scanf("%d", &num);

        if (num > 0)
        pos++;

        else if (num < 0)
        neg++;

        else if (num == 0)
        zeroes++;

        printf("Do you want to enter more numbers?\n");
        scanf(" %c", &reply);
        
    }
    printf("Positive numbers = %d\n", pos);
    printf("Negative numbers = %d\n", neg);
    printf("Zeroes entered = %d\n", zeroes);
    return 0;
}