//Menu driven program to perform different operations on a number input by the user//

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i, num, fact, choice;

    while(1)
    {
        printf("-----------Menu------------\n");
        printf("1. Factorial\n");
        printf("2. Prime\n");
        printf("3. Odd/Even\n");
        printf("4. Exit\n");
        printf("Your choice? \n");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                printf("Enter the number: ");
                scanf("%d", &num);
                fact = 1;
                for(i=1; i<=num; i++)
                    fact=fact*i;
                printf("Factorial of %d is %d\n", num, fact);
                break;
            
            case 2:
                printf("Enter the number: ");
                scanf("%d", &num);
                for(i=2; i<num; i++)
                    {
                        if(num % i == 0)
                        {
                            printf("Not a prime number\n");
                            break;
                        }
                    }
                if(num == i)
                    printf("Prime Number\n");
                break;

            case 3: 
            printf("Enter the number: ");
            scanf("%d", &num);
            if(num % 2 == 0)
                printf("Even number\n");
            else 
                printf("Odd number\n");
            break;
            
            case 4:
                printf("Thank You.\n");
                printf("Quitting....");
                exit(4);

            default:
                printf("Please enter the right choice\n");
        }
    }
    return 0;
}