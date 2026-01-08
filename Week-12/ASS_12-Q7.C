#include <stdio.h>
int main()
{ 
    int i,n,a,b=0,x;
    printf("enter no.:");
    scanf("%d",&n);
    x=n;
    while(n!=0)
    { i=0;
        a=n%10;
        b=b*10+a;
        n=n/10;
        i++;
    }
    if(x==b)
    {
        printf("no. is palindrome");
    }
    else
    {
        printf("no. is not palindrome");
    }
    return 0;
}