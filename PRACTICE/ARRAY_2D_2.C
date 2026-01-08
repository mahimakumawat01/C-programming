#include <stdio.h>
int main()
{
    int i,n,j,k,row,col;
    printf("enter no:");
    scanf("%d",&n);
    printf("enter no. of rows:");
    scanf("%d",&row);
    printf("enter no. of col:");
    scanf("%d",&col);
    int a[n][row][col];
    for(k=1;k<=n;k++)
    {
    printf("enter elements of martix %d:\n",k);
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            scanf("%d",&a[k][i][j]);
        }
    }
    }
    for(k=1;k<=n;k++)
    {
        printf("matrix %d:\n",k);
        for(i=0;i<row;i++)
        {
            for(j=0;j<col;j++)
            {
                printf("[%d]",a[k][i][j]);
            }
            printf("\n");
        }
    }
     int result[row][col];
     for(i=0;i<row;i++)
     {
        for(j=0;j<col;j++)
        {
            result[i][j]=0;
            for(k=1;k<=n;k++)
            {
                if(k+1<=n)
                result[i][j]=result[i][j]+a[k][i][j]-a[k+1][i][j];
            }
        }
     }
     printf("sub of all matrix:\n");
     for(i=0;i<row;i++)
     {
        for(j=0;j<col;j++)
        {
            printf("[%d]",result[i][j]);
        }
        printf("\n");
     }
     return 0;
}