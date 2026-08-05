//Matchstick game with 21 matchsticks, computer to always win//

#include <stdio.h>
int main()
{
    int m = 21;
    int user, comp;
    int i=1;

    printf("This is a matchstick game.\n");
    printf("Rules:- \n");
    printf("Enter 1,2,3 or 4 matchsticks\n");
    printf("Whoever is forced to enter the last matchstick, loses the game.\n\n");
    printf("Best of Luck!\n\n");
    printf("Matchsticks left = %d\n", m);
    
    while(i<=m)
    {
        printf("Enter your matchstick number:- \n");
        scanf("%d", &user);
        
        m = m - user;
        
        printf("Matchsticks left = %d\n", m);

        comp = 5 - user;
        printf("My number is %d\n", comp);
        
        m = m - comp;
        
        printf("Matchsticks left = %d\n\n", m);
        
        if(m == 1)
        break;

        i++;
    }
    printf("Oh! This was the last matchstick.\n");
    printf("You lost, Better Luck next time!\n");

    return 0;
}