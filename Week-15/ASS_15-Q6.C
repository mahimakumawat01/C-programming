#include <stdio.h>
int fact(int n)
{
    int f=1;
    for(int i=1;i<=n;i++)
    {
       f=f*i;
    }
    return f;
}

int main()
{
    int n,a;
    printf("entre no:");
    scanf("%d",&n);
    a=fact(n);
    printf("factorial of %d is %d",n,a);
    return 0;
}