//To print the values and addresses of three memory locations using pointers//
#include <stdio.h>
int main()
{
    int a = 5;
    int *b;
    b = &a;
    int **c;
    c = &b;
    printf("Address of a, b, c are %p %p %p \n", b, c, &c);
    printf("Value stored in a, b, c are %d, %p, %p \n", a, b, c);
    printf("Value stored in 'a' is %d, %d, %d", a, *b, **c);
    return 0;
}