#include<stdio.h>
void lcm(int n1,int n2)
{
    int a,b;
    for(int i=1;i<=n1 && i<=n2;i++)
    {
        if (n1%i==0 && n2%i==0)
        {
         a=i;
        }
    }
    b=(n1*n2)/a;
    printf("lcm of %d and %d is %d",n1,n2,b);
}

int main()
{
    int n1,n2;
     printf("enter no of rows:");
     scanf("%d",&n1);
     printf("enter no of rows:");
     scanf("%d",&n2);
    
    lcm( n1 , n2);
    return 0;
}