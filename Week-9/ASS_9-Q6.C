#include <stdio.h>
int main()
{
    int a,b,c;
    printf("entre a");
    scanf("%d",&a);

    printf("entre b");
    scanf("%d",&b);
    
    printf("entre c");
    scanf("%d",&c);
   
    if(a+b>c)
    {
printf("tringle is valid");
    }
    else if (b+c>a)
    {
        printf("tringle is valid");
    }
    else if (c+a>b)
    {
        printf("tringle is vaild");
    }

return 0;
}