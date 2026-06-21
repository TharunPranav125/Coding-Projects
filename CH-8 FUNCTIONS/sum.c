#include <stdio.h>
#include <math.h>

int fact(int);
int main(){
    int a,factorial;
    printf("Enter a Number : ");
    scanf("%d", &a);
    factorial = fact(a);
    printf("Factorial : %d", fact);
    return 0;
}
int fact(int a){
    int i;
    int factorial =1;
    for(i=1;i<=a;i++)
        factorial = factorial*i;
    return(factorial);

}