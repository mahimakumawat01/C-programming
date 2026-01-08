#include<stdio.h>
int main()
{
    int i,n1,n2,gcf;
    printf("enter first no.:");
    scanf("%d",&n1);
    printf("enter second no.:");
    scanf("%d",&n2);
    for(i=1;i<=n1 && i<=n2 ;i++)
    {
         if(n1%i==0 && n2%i==0)
         {
         gcf=i;
         }
    }
    printf("gcd of %d and %d is %d",n1,n2,gcf);
    return 0;
}