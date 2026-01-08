#include <stdio.h>
int num(int n)
{
    if(n==0 || n==1)
    {
        return 1;
    }
    else
    {
    return num(n-1)+n;
    }
}
int main()
{
    int n,ans;
    printf("enter no:");
    scanf("%d",&n);
    ans=num(n);
    printf("sum of n natural no is %d",ans);
    return 0;
}