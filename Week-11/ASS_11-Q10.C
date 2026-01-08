#include<stdio.h>
int main()
{
    int i,n,c;
    printf("enter no.:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    { 
        c=2*i-1;
        printf("%d\n",c);
    }
    return 0;
}
