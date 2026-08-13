//Using goto statement to exit from the loop after encountering a particular condition//

// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int i, j, k;
    for(i=0; i<=3; i++)
    {
        for(j=0; j<=3; j++)
        {
            for(k=0; k<=3; k++)
            {
                if(i==3 && j==3 && k==3)
                    goto out;
                else 
                printf("%d %d %d\n", i, j, k);
            }
        }
    }
    out:
        printf("We could also have used continue.");

    return 0;
}