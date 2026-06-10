//Calculation of paper size from A0 to A8//

#include <stdio.h>
int main()
{
    int A0L, A0W, A1L, A1W, A2L, A2W, A3L, A3W, A4L, A4W;
    int A5L, A5W, A6L, A6W, A7L, A7W, A8L, A8W;
    A0L = 1189;
    A0W = 841;

    printf("A0 size: %d mm x %d mm\n", A0L, A0W);

    A1L = A0W;
    A1W = A0L / 2;
    printf("A1 size: %d mm x %d mm\n", A1L, A1W);

    A2L =A1W;
    A2W = A1L / 2;
    printf("A2 size: %d mm x %d mm\n", A2L, A2W);   

    A3L = A2W;
    A3W = A2L / 2;
    printf("A3 size: %d mm x %d mm\n", A3L, A3W);   

    A4L = A3W;
    A4W = A3L / 2;      
    printf("A4 size: %d mm x %d mm\n", A4L, A4W);

    A5L = A4W;
    A5W = A4L / 2;
    printf("A5 size: %d mm x %d mm\n", A5L, A5W);

    A6L = A5W;
    A6W = A5L / 2;
    printf("A6 size: %d mm x %d mm\n", A6L, A6W);

    A7L = A6W;
    A7W = A6L / 2;
    printf("A7 size: %d mm x %d mm\n", A7L, A7W);

    A8L = A7W;  
    A8W = A7L / 2;
    printf("A8 size: %d mm x %d mm\n", A8L, A8W);
    return 0;
}