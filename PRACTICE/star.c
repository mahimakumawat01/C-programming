#include <stdio.h>
int main()
{
    int n;
    printf("enter no of rows:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf(".");
        }
        for(int j=1;j<=2*(n-i)+1;j++)
        {
            printf(".");
        }
        for(int j=n;j>=i;j--)
        {
            printf(".");
        }
        for(int j=1;j<=i;j++)
        {
            printf("*");
        }
        for(int j=2;j<=2*i-1;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i-1;j++)
        {
            printf(".");
        }
        for(int j=1;j<=2*(n-i)+1;j++)
        {
            printf("*");
        }
             for(int j=1;j<=2*i-1;j++)
        {
           printf("*");
        }
        for(int j=n;j>=i;j--)
        {
            printf("*");
        }
        for(int j=1;j<=2*i-1;j++)
        {
            printf("*");
        }
        for(int j=n-1;j>=i;j--)
        {
            printf("*");
        }
        for(int j=1;j<=2*(n-i)-1;j++)
        {
            printf("*");
        }

        printf("\n");
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=n-1;j>=i;j--)
        {
            printf(".");
        }
        for(int j=1;j<=i;j++)
        {
            printf(".");
        }
        for(int j=1;j<=2*(n-i)+1;j++)
        {
            printf("*");
        }
      
       for(int j=1;j<=2*i-1;j++)
       {
        printf(".");
       }
       for(int j=2;j<=2*i-1;j++)
       {
        printf(".");
       }
       
       for(int j=1;j<=2*(n-i)+1;j++)
        {
            printf("*");
        }

        printf("\n");
    }
    
}