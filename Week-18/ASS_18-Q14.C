#include<stdio.h>
int main()
{
    int n;
    printf("enter no of rows:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {  if(i>=1 && i<=n-1)
        {
        printf("*");
        for(int j=1;j<i-1;j++)
        {
            printf(" ");
        }
        if(i==1)
        {
         for(int k=1;k<i-1;k++)
         {
            printf("*");
         }
        }
        else
        {
        for(int k=1;k<=(i+1)-i;k++)
        {
            printf("*");
        }
        }
        }
        else 
        {
            for(int j=n;j>=1;j--)
            {
                printf("*");
            }
        }
        printf("\n");

    }
    return 0;
}