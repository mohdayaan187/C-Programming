//To determine profit or loss from the cost price and selling price of an item//

#include <stdio.h>
int main()
{
    float cp, sp, P, L;
    printf("Enter the cost price and selling price of the item: ");
    scanf("%f %f", &cp, &sp);

    P = sp - cp;
    L = cp - sp;

    if (sp > cp)
    {
        printf("The seller has made a profit.\n");
        printf("Profit: %.2f", P);
    }
    else if (cp > sp)
    {
        printf("The seller has incurred a loss.\n");
        printf("Loss: %.2f", L);
    }
    else
    {
        printf("No profit, no loss.");
    }

    return 0;
}