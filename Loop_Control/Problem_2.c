//To determine overtime pay of 10 employees who worked above 40 hours//

#include <stdio.h>
int main()
{
    int otpay, hours;
    int i=1;
    
    while(i<=10)
    {
        printf("Enter total number of hours worked: ");
        scanf("%d", &hours);
        
        if(hours>40)
        otpay = (hours-40)*120;
        else
        otpay = 0;

        printf("Overtime payment for extra %d hours is %d\n", hours, otpay);     
        i++;
    }
    return 0;
}
