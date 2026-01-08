#include <stdio.h>
int main()
{
    int n;
    printf("enter no.:");
    scanf("%d",&n);
    if(n%2==0)
    {
        printf("even no.");
    }
    else
    {
        printf("odd no.");
    }
    return 0;
}