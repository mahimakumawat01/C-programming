#include<stdio.h>
int main()
{
    int i,j,row,col,data,pos;
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
    printf("enter searching data:\n");
    scanf("%d",&data);
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
           a[i][j]=data;
         /*  {
               printf("found");
           }
           else
           {
               printf("\nnot found");
           }*/
        }
        if(a[i][j]=data)
        {
            printf("\nfound");
        }
        else 
        {
            printf("\nnot found");
        }
        
    }
    return 0;
}