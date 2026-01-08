#include <stdio.h>
int main()
{
    int a,b;
    printf("write a no.:");
    scanf("%d",&a);
    printf("write a no.:");
    scanf("%d",&b);
    if(a>b)
    {
        printf(" greater no. is %d ",a);
    }
   else if (b>a) 
    {
   printf("greater no. is %d",b);
   }
return 0;
}