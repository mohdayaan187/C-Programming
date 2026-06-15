//To calculate salary of a worker based on the given conditions//

#include <stdio.h>
int main()
{
    int yos, salary;
    char gen, qualf;
    printf("Enter the years of service: ");
    scanf("%d", &yos);
    printf("Enter the gender (M/F) of the worker: ");
    scanf(" %c", &gen);
    printf("Enter the qualification (G/P) of the worker: ");
    scanf(" %c", &qualf); 
    
    if (yos >= 10 && (gen == 'M' || gen == 'm') && (qualf == 'P' || qualf == 'p'))
        salary = 11000;
    else if (yos >= 10 && (gen == 'M' || gen == 'm') && (qualf == 'G' || qualf == 'g'))
        salary = 10000;
    else if (yos >= 10 && (gen == 'F' || gen == 'f') && (qualf == 'P' || qualf == 'p'))
        salary = 12000;
    else if (yos >= 10 && (gen == 'F' || gen == 'f') && (qualf == 'G' || qualf == 'g'))
        salary = 9000;
    else if (yos < 10 && (gen == 'M' || gen == 'm' || gen == 'F' || gen == 'f') && (qualf == 'P' || qualf == 'p'))
        salary = 10000;
    else if (yos < 10 && (gen == 'M' || gen == 'm') && (qualf == 'G' || qualf == 'g'))
        salary = 7000;
    else if (yos < 10 && (gen == 'F' || gen == 'f') && (qualf == 'G' || qualf == 'g'))
        salary = 6000;
    
    printf("The salary of the worker is: %d", salary);

    return 0;
}