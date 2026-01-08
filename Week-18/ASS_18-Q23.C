#include<stdio.h>
int main()
{
    int n,k;
    printf("enter no of rows:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {   k=1;
        for(int j=n-1;j>=i;j--)
        {
            printf(" ");
        }
        for(int j=1;j<=i;j++)
        {
            printf("%d",k);
            k++;
        }
        printf("\n");
    }
    return 0;
}