//To calculate distance in nautical miles from the latitude and longitude of two places//

#include <stdio.h>
#include <math.h>
#define PI 3.14159

int main()
{
    float L1, G1, L2, G2, distance;
    printf("Enter the latitude and longitude of the first place (L1 G1) in degrees: ");
    scanf("%f %f", &L1, &G1);
    printf("Enter the latitude and longitude of the second place (L2 G2) in degrees: ");
    scanf("%f %f", &L2, &G2);

    L1 = L1 * (PI / 180);
    G1 = G1 * (PI / 180); 
    L2 = L2 * (PI / 180);
    G2 = G2 * (PI / 180);

    distance = 3440 * acos(sin(L1) * sin(L2) + cos(L1) * cos(L2) * cos(G2 - G1)); 

    printf("Distance between the two places: %.2f nautical miles", distance);
    
    return 0;
}