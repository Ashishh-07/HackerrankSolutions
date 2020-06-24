#include<stdio.h>

int main()
{
    int a,b;
    float c,d;
    int sum,sub;
    float sum1,sub1;

    scanf("%d %d",&a,&b);
    scanf("%f %f",&c,&d);
    
    sum=a+b;
    sub=a-b;
    sum1=c+d;
    sub1 =c-d;

    printf("%d %d",sum,sub);
    printf("\n");
    printf("%.1f %.1f",sum1,sub1);

    
}
