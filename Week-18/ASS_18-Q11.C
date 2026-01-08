#include<stdio.h>
int main()
{
    int n,j,k;
    printf("enter no of rows:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {   
        if(i==1)
        {
        for( j=n;j>=i;j--)
        {
            printf("*");
        }
        }
        else if (1<i && i<n)
        {
            printf("*");   
        for(int j=1;j<=n-2;j++)
        {
            printf(" ");
        }
            printf("*");
        }
        else 
        {
            for( j=1;j<=n;j++)
            {
            printf("*");
            }
        }  
        

        printf("\n");
    }
    return 0;
}