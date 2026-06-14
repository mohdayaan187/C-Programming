//To find the youngest among Amit, Ahmed and Ajay//

#include <stdio.h>
int main()
{
    int amit, ahmed, ajay;
    printf("Enter the age of Amit, Ahmed and Ajay: ");
    scanf("%d %d %d", &amit, &ahmed, &ajay);

    if (amit < ahmed && amit < ajay)
        printf("Amit is the youngest.");
    else if (ahmed < amit && ahmed < ajay)
        printf("Ahmed is the youngest.");
    else
        printf("Ajay is the youngest.");

    return 0;
}