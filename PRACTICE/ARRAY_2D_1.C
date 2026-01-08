#include<stdio.h>
int main()
{
    int i,j,n,row,col,k;
    printf("enter no.:");
    scanf("%d",&n);
    printf("ENTER NO OF ROWS:");
    scanf("%d",&row);
    printf("ENTER NO OF COL:");
    scanf("%d",&col);
    int matrix[n][row][col];
    for(k=1;k<=n;k++)
    {
    printf("elements of %d matrix are:\n",k);

    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {  
            scanf("%d",&matrix[k][i][j]);
        }
    }
    }
    for(k=1;k<=n;k++)
    {
        printf("matrix %d\n",k);
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("[%d] ",matrix[k][i][j]);
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
            result[i][j]=result[i][j]+matrix[k][i][j];
            }
        }
    }
    printf("sum of all matrix:\n");
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