#include <stdio.h>
int main ()
{
    int a,b;

    printf("entre a");
    scanf("%d",&a);

    printf("entre b");
    scanf("%d",&b);

    if ((a>b)&& (a>500) && (a<1000))
    {
        printf("grates no. is %d",a);
    }
    else if ((b>a) && (b>500) && (b<1000)) 
    {
        printf("gratest no. is %d",b);
    }
    
return 0;
}