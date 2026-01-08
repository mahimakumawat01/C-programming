#include <stdio.h>
int main()
{
    int n,m=1;
    printf("enter no of rows:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {m=1;
        for(int j=n-1;j>=i;j--)
        {
            printf(".");
        }
        for(int j=1;j<=i;j++)
        {
            for(int k=1;k<=j;k++)
            {
                printf("%d",m);
            }
        }    
        printf("\n");
    }
    return 0;

}