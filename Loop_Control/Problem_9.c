//To convert an integer input to octal number system//

#include <stdio.h>
int main()
{
    int num, temp;
    int octal = 0;
    int place = 1;
    int remainder;
    printf("Enter the integer: ");
    scanf("%d", &num);

    temp = num;
    
    while(temp>0)
    {
        remainder = temp % 8;
        octal = octal + (remainder * place);
        place = place *10;
        temp = temp/8;
    }
    printf("The equivalent octal number is %d", octal);

    return 0;
}