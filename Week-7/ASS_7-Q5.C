#include <stdio.h>
int main()
{
    int a;
    printf("entre a number");
    scanf("%d",&a);
    if (a>0)
    {
        printf("number is positive");
    }
    else if(a<0)
    {
        printf("number is negative");
    }
    return 0;
}