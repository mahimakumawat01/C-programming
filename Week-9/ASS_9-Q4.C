#include <stdio.h>
int main()
{
    int a;

    printf("entre no.");
    scanf("%d",&a);
    
    if (a>0)
    {
        printf("no. is positive\n");
          printf("no. is divisible by 10 %d",a/10);
    }
    else if (a<0)
    {
        printf("no. is negative");
    }
    else if (a==0)
    {
        printf("no. is zero");
    }
    return 0;
}