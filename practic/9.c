#include <stdio.h>
int main ()
{
    int a,b,c;
    printf("enter a:");
    scanf("%d",&a);
    printf("enter b:");
    scanf("%d",&b);
    printf("enter c:");
    scanf("%d",&c);
    printf("no before swapping a= %d b= %d c= %d\n",a,b,c);
    a=a+b+c;
    b=a-(b+c);
    c=a-(b+c);
    a=a-(b+c);
    printf("no after swapping a=%d b= %d c= %d",a,b,c);
    return 0;
}