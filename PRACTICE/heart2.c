#include<stdio.h>
int main()
{
    int n;
    printf("enter no:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=n;j>=i;j--)
        {
            printf(".");
        }
        printf("*");
        for(int j=1;j<=2*i-2;j++)
        {
            printf(".");
        }
        printf("*");
        for(int j=1;j<=2*(n-i)-1;j++)
        {
            printf(".");
        }
        if(i<n)
        {
            printf("*");
        }
        for(int j=1;j<=2*i-2;j++)
        {
            printf(".");
        }
        printf("*");
        printf("\n");
    }
    for(int i=1;i<=n+2;i++)
    {
       for(int j=1;j<=1;j++)
       {
        printf("*");
       }
       printf("\n");
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
        printf(".");
        }
        printf("*");
        printf("\n");
    }
    return 0;
}