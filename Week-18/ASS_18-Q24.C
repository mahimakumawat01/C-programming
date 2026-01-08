#include<stdio.h>
int main()
{
    int n,k=1;
    printf("enter no of rows:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=n-1;j>=i;j--)
        {
            printf(" ");
        }
        if(i>=1 && i<n)
        {
            printf("1");
                for(int j=2;j<2*i-1;j++)
                {
                    printf(" ");
                }
        }
        else 
        {
            for(int j=1;j<=2*n-1;j++)
            {
                printf("%d",k);
                k++;
            }
        }
        if(i>1 && i<n)
        {
            printf("2");
        }
      
        printf("\n");
    }
    return 0; 
}