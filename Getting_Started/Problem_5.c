//To calculate aggregate marks and percentage of a student//

#include <stdio.h>
int main()
{
    int m1, m2, m3, m4, m5, aggr;
    float perc;
    printf("Enter marks obtained in subject 1: ");
    scanf("%d", &m1);
    printf("Enter marks obtained in subject 2: ");
    scanf("%d", &m2);
    printf("Enter marks obtained in subject 3: ");
    scanf("%d", &m3);
    printf("Enter marks obtained in subject 4: ");
    scanf("%d", &m4);
    printf("Enter marks obtained in subject 5: ");
    scanf("%d", &m5);
    aggr = m1 + m2 + m3 + m4 + m5; 
    perc = (aggr / 500.0) * 100.0; 
    printf("Aggregate Marks obtained = %d\n", aggr);
    printf("Percentage: %.2f%%", perc);
    return 0;
}