#include <stdio.h>
int num(int n,int r)
{
    int f=1;
    for(int i=1;i<=r;i++)
    {
        f=f*n;   
    }
    return f;
}
int main()
{
    int n,r,result;
    printf("enter no:");
    scanf("%d",&n);
    printf("enter no:");
    scanf("%d",&r);
    result=num(n,r);
    printf("result is %d",result);
    return 0;
}