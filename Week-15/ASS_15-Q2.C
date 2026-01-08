#include <stdio.h>
int SI(int p,int r,int t)
{
    int s;
          s=(p*r*t)/100;
          return s;
}
int main()
{
    int p,r,ans,t;
    printf("enter principle :");
    scanf("%d",&p);
    printf("enter rate:");
    scanf("%d",&r);
    printf("enter time:");
    scanf("%d",&t);
    ans=SI(p,r,t);
    printf("simple intrest is %d",ans);
    return 0;
}