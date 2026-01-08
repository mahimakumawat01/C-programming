#include<stdio.h>
int num(int n)
{  
    if(n%2==0)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}
int main()
{
    int n,a;
    printf("enter no :");
    scanf("%d",&n);
    a=num(n);
    printf("num is %d",a);
   return 0;
}
