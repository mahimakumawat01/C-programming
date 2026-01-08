#include <stdio.h>
int main()
{
    int a;
    printf("entre number ");
    scanf("%d",&a);
    if(a%5==0)
    {
    printf("divisiable by 5");
    }
    else
    {
     printf("not divisible by 5");
    }
    return 0;
}