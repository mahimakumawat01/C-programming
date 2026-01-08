#include<stdio.h>
int main()
{
    int i,n,a,b=0,x;
    printf("enter no.:");
    scanf("%d",&n); 
    x=n;
    while(n!=0)
    {    i=0;
        a=n%10;
        b=a*a*a+b;
        n=n/10;
        i++;
    }
    if(x==b)
    {
        printf(" %d no.is armstrong",x);
    }
    else 
    {
        printf("%d no. is not armstrong",x);
    }

    return 0;  
}