//To calculate total expense after a discount of 10% on the total expense//

#include <stdio.h>
int main()
{
    int qty, dis;
    float price, total;

    printf("Enter the quantity and price of each item: ");
    scanf("%d %f", &qty, &price);

    if (qty > 1000)
        dis = 10; 
    else
        dis = 0; 

    total = qty * price - (qty * price * dis / 100);
    printf("Total expense after discount: %.2f", total);
    return 0;   
}