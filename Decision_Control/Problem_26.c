//To convert RGB color values to CMYK color values//

#include <stdio.h>
#include <math.h>
int main()
{
    float r, g, b;
    float c, m, y, k, w;

    printf("Enter the RGB values (0-255) for red, green and blue: ");
    scanf("%f %f %f", &r, &g, &b);

    w = fmax(fmax(r/255, g/255), b/255);

    if (w == 0) {
        c = 0;
        m = 0;
        y = 0;
        k = 1;
    } 
    else {

    c = (w - r/255) / w;
    m = (w - g/255) / w;
    y = (w - b/255) / w;
    k = 1 - w;
    }


    printf("CMYK values:\n");
    printf("Cyan: %.2f\n", c);
    printf("Magenta: %.2f\n", m);
    printf("Yellow: %.2f\n", y);
    printf("Black: %.2f\n", k);

    return 0;
}