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
            printf("  ");
        }
            printf("* ");
        
        for(int j=3;j<=2*(n-i)+1;j++)
        {
            printf("  ");
        }
        if(i==n)
        {
            break;
        }
        else
        {
            for(int j=1;j<=1;j++)
            {
                printf("* ");
            }
        }

        printf("\n");
    }
    printf("\n");
    for(int i=1;i<=n-1;i++)
    {
        for(int j=n-1;j>=i;j--)
        {
            printf("  ");
        }
        printf("* ");
        for(int j=1;j<=2*i-1;j++)
        {
            printf("  ");
        }
        printf("*");
        printf("\n");
       
    }
    return 0;
}
