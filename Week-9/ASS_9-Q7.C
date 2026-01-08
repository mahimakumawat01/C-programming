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
    
    if ((a==b) && (b==c) && (c==a))
    {
        printf("tringle is equivalent");
    }
    else if ((a==b) && (a!=c))
    {
        printf("tringle is isoscelen");
    }
else if ((a!=b) && (b!=c) && c!=a)
{
    printf("tringle is scalene");
}
return 0;
}