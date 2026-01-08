#include<stdio.h>
void num(int *m,int *n)
{
    *m=*m+10;
    *n=45;
}
int main()
{
    int a,b;
    a=10;
    b=20;
    num(&a,&b);
    printf("values of a and b are: %d %d",a,b);
    return 0;
}