#include<stdio.h>
int main()
{
    int i,n,f=1;
    printf("enter any no.:");
    scanf("%d",&n);
    for(i=5;i>0;i--)
    {
        f=f*i;
    }
    printf("factorial of %d is %d ",n,f);
    return 0;

}