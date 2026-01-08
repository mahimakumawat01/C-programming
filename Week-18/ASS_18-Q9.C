#include<stdio.h>
int main()
{
    int n,m=1,o=0;
    printf("enter no of rows:");
    scanf("%d",&n);
    
    for(int i=1;i<=n;i++)
    {
        for(int j=n;j>=i;j--)
        {
            printf("  ");
        }
        for(int j=1;j<=i;j++)
        { 
            printf("%d ",m);     
            m++;
        }
        m=i+1; 
        for(int j=1;j<=i-1;j++)
        {  
            printf("%d ",o);  
           o--;
        }
        o=2*i;
        printf("\n");
    }

    return 0;
}