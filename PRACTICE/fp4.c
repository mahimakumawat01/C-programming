#include <stdio.h>
int fact(int n)
{
    if(n==1 || n==0)
    {
        return 1;
    }
    return fact(n-1)*n;
}

int main()
{
    int n,ans;
    printf("Enter no:");
    scanf("%d",&n);
   ans= fact(n);
    printf("factorial no is %d",ans);
    return 0;
}