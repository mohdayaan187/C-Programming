//To check whether a number is palindrome or not//

#include <stdio.h>
int main()
{
    int num, remainder, i;
    int revnum = 0;
    int temp;
    printf("Enter the number: \n");
    scanf("%d", &num);
    
    temp = num;
    for(i=1; temp>0; i++)
    {
        remainder = temp % 10;
        revnum = (revnum * 10) + remainder;
        temp = temp/10;
    }
    if(revnum == num)
        printf("Pallindrome\n");
    else
        printf("Not a pallindrome");

        return 0;
}