#include <stdio.h>
#include <math.h>

float power(float a,int b);
int main(){
    float x,pow;
    int y;
    printf("Enter two numbers : ");
    scanf("%f %d", &x ,&y);
    pow = power(x,y);
    printf("%f to the power of %d = %f\n", x, y, pow);
    return 0;
}
float power(float x, int y){
     int i;
     float p=1;
     for(i=1;i<=y;i++)
       p = p*x;
       return(p);
}