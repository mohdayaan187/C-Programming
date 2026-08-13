//To calculate grace marks of a student using switch-case//

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int class_obt, sub_failed, grace;
    printf("1 - First class, 2 - Second class, 3 -  Third class\n");
    printf("Enter class obtained: ");
    scanf("%d", &class_obt);
    printf("Enter the number of subjects failed in: ");
    scanf("%d", &sub_failed);

    switch (class_obt)
    {
        case 1:
            if(sub_failed <= 3)
                grace = 5 * sub_failed;
            else 
                grace = 0;
            break;
        
        case 2:
            if(sub_failed <= 2)
                grace = 4 * sub_failed;
            else 
                grace = 0;
            break;
        
        case 3:
            if(sub_failed <= 1)
                grace = 5;
            else 
                grace = 0;
            break;

        default:
            printf("Please enter a valid class.\n");
            exit(3);
    }
    printf("Grace marks given = %d", grace);
    return 0;
}