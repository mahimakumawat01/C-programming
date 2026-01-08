/*#include<stdio.h>
int main()
{
    int n;
    printf("enter no of rows:");
    scanf("%d",&n);
    
    for(int i=1;i<=n;i++)
    {
        for(int j=n;j>=i;j--)
        {
            printf(".");
        }
        for(int k=1;k<=i;k++)
        {
           printf("*");
        }
        printf("\n");
    }
}*/
/*#include <stdio.h>
int main()
{
    int n,m=1;
    printf("enter no of rows:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=n-1;j>=i;j--)
        {
            printf(".");
        }
        for(int j=1;j<=i;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;

}*/
#include<stdio.h>
int main()
{
    int n,j;
    printf("enter no of rows:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for( j=n-4;j>=i;j--)
        {
            printf("*");
        }
        printf("\n");
    }
}