#include <stdio.h>

#define AREA(x)(3.14*x*x)

int main(){
    float r1 = 6.25,r2 = 2.5,a;
    a = AREA(r1);
    printf("Area : %f",a);
    a = AREA(r2);
    printf("Area : %f",a);
    return 0;
}