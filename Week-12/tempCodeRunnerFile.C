#include <stdio.h>
int main()
{
    int n,i,a,b=0;
    printf("enter any no.:");
    scanf("%d",&n);
     while(n!=0)
     {
        a=n%10;
        b=b*10+a;
        n=n-10;;
     }
      printf("reverse or %d is %d",n,b);
    return 0;
}