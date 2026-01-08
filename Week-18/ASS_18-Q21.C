#include <stdio.h>
int main()
{
    int n;
    printf("enter no of rows:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {     
        for(int j=1;j<=n;j++)
        {
            printf("  ");
        }
        for(int j=1;j<i;j++);
        {
            printf("*");
        }
        printf("\n");
    }
    for(int j=1;j<=2*n+1;j++)
        {
            printf("* ");
            
        }
          printf("\n");
   
    for(int i=1;i<=n;i++)
    {     
        for(int j=1;j<=n;j++)
        {
            printf("  ");
        }
        for(int j=1;j<i;j++);
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}