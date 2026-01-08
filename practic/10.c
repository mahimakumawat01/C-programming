#include<stdio.h>
int main()
{
    int a,b,c,x;
    printf("enter no:");
    scanf("%d",&a);
    printf("enter no:");
    scanf("%d",&b);
    printf("enter no:");
    scanf("%d",&c);
    x=a*10+b;
    a=x*10+c;
    printf("its reminder is: %d",a);
}