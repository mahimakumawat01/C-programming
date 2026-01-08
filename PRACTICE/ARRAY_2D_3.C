#include <stdio.h>
int main()
{
    int n,i,j,row,col,esum=0,osum=0,sum=0;
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
    printf("matrix :\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("[%d]",a[i][j]);
            sum=sum+a[i][j];
        }
        printf("\n");
    }
    printf("sum of elements of matrix:%d\n",sum);
    printf("even elements of matrix:\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
           if(a[i][j]%2==0)
             {        
                printf("%d\n",a[i][j]);
                esum=esum+a[i][j];
             }
        }
    }
    printf("sum of even no. of matrix:%d\n",esum);
    printf("odd numbers of matrix:\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            if(a[i][j]%2!=0)
            {
                printf("%d\n",a[i][j]);
                osum=osum+a[i][j];
            }
        }
    }   
    printf("sum of odd no. of matrix:%d\n",osum);
    return 0;
}