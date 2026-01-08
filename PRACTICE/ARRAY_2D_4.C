#include <stdio.h>
int main()
{
    int n,i,j,row,col,sum=0;
    printf("enter no. of rows:");
    scanf("%d",&row);
    printf("enter no. of col:");
    scanf("%d",&col);
    int a[row][col];
    printf("enter elements of matrix:\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("matrix a:\n");  
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("[%d]",a[i][j]);
        }
        printf("\n");
    }
    printf("values at digonal:\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
          if(i==j)
          {
            printf("%d\n",a[i][j]);
            sum=sum+a[i][j];
          }
        }
    }
    printf("sum of values present at digonal:");
    printf("\n%d\n",sum);
    return 0;
}