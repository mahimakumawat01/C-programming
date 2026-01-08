#include<stdio.h>
int main()
{
    int i,n,row,j,col,min,max;
    printf("enter no of rows:");
    scanf("%d",&row);
    printf("enter no of col:");
    scanf("%d",&col);
    int a[row][col];
    printf("enter elemwnts of matrix:\n");
    for(i=0;i,i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("matrix:\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("[%d]",a[i][j]);
        }
        printf("\n");
    }
    printf("minimum elements of this matrix is:");
    min=a[0][0];
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            if(min >a[i][j])
            {
                min=a[i][j];
            }
        }
    }
    printf("%d",min);

    printf("\nmaximum element of this matrix:");
    max=a[0][0];
    for(i=0;i<row;i++)
    {
        for(j-0;j<col;j++)
        {
            if(max<a[i][j])
            {
                max=a[i][j];
            }
        }
    }
    printf("%d",max);
    return 0;
}
