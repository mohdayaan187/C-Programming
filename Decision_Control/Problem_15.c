//To obtain the division of a student from the given marks in 5 subjects//

#include <stdio.h>
int main()
{
int m1, m2, m3, m4, m5;
float percentage;
printf("Enter marks obtained in 5 subjects: ");
scanf("%d %d %d %d %d", &m1, &m2, &m3, &m4, &m5);

percentage = (m1 + m2 + m3 + m4 + m5) / 5.0;

if (percentage >= 60)
    printf("First Division");
else if (percentage >= 50)
    printf("Second Division");
else if (percentage >= 40)
    printf("Third Division");
else
    printf("Fail");

return 0;
}