#include <stdio.h>

void wt(float kg, float *g, float *ton, float *p);

int main()
{
    float kg, g, ton, p;

    printf("Enter kg : ");
    scanf("%f", &kg);

    wt(kg, &g, &ton, &p);

    printf("g = %f\nton = %f\np = %f\n", g, ton, p);

    return 0;
}

void wt(float kg, float *g, float *ton, float *p)
{
    *g = 1000 * kg;
    *ton = 0.001 * kg;
    *p = 2.20462 * kg;
}
