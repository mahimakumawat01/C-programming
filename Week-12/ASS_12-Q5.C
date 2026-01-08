#include<stdio.h>
int main()
{
    int n,a=0,b=1,i,c;
    printf("enter no.:");
    scanf("%d",&n);
    printf("fabbonicai series:");
    printf("%d,%d,",a,b);
    for(i=1;i<=n;i++)
    {
       c=a+b;
       a=b;
       b=c;
       printf("%d,",c);
    }
    return 0;
}