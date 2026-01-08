#include <stdio.h>

int main() 
{
    int n;
    printf("enter no.:");
    scanf("%d",&n);
    
    for(int i=1;i<=n;i++)
    {
       int a,b;
       printf("enter a:");
       scanf("%d",&a);
       printf("enter b:");
       scanf("%d",&b);
       int c=a+b;
       printf("sum of %d and %d is %d\n",a,b,c);
    }

    return 0;
}