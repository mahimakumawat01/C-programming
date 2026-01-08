#include<stdio.h>
int main()
{
    int n,k=1;
    printf("enter no rows:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=n-1;j>=i;j--)
        {
            printf("  ");
        }
        for(int j=1;j<=(i+1)-i;j++)
        {
            printf("* ");
        }
        for(int j=3;j<=2*i-1;j++)
        {
            printf("  ");
        }
        if(i==1)
        {
            for(int j=1;j<i-1;j++)
            {
                printf("* ");
            }
        }
        else
        {
            for(int j=1;j<=(i+1)-i;j++)
            {
               printf("* ");
            }
        }
        printf("\n");
    }
    for(int i=1;i<=n-1;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("  ");
        }
        for(int j=1;j<=k;j++)
        {
            printf("* ");
        }
        for(int j=4;j<2*(n-i+1)-1;j++)
        {
            printf("  ");
        }
        if(i==n-1)
        {
            break;
        }
        else
        {
            printf("*");
        }
        
        printf("\n");
    }
    return 0;
}