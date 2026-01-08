#include <stdio.h>
int main()
{
    int n,s=3;
    printf("enter no of rows:");
    scanf("%d",&n);
    for(int i=1;i<=2*n-1;i++)
    {
        if(i<=n)
        { 
        for(int j=1;j<i;j++)
        {
            printf("  ");
        }
        for(int j=0;j<2*(n-i+1)-1;j++)
        {
            printf("* ");
        }
        }
        else
        {
            for(int j=n-2;j>=i-n;j--)
            {
                printf("  ");
            }
           for(int j=1;j<=s;j++)
           { 
            printf("* ");
               
           }
           s=s+2;
        }
        printf("\n");
    }
   
    return 0;

}