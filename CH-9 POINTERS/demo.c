#include <stdio.h>

void opr(int *,int *);
int main()
{
    int sum,avg;
    opr(&sum,&avg);
    printf("Sum = %d\n Average = %d\n", sum , avg);
    return 0;
}
void opr(int*sum,int*avg){
    int n1,n2,n3,n4,n5;
    printf("Enter Five Number : ");
    scanf("%d %d %d %d %d",&n1,&n2,&n3,&n4,&n5);
    *sum = n1+n2+n3+n4+n5;
    *avg = *sum/5;
}