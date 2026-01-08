#include <stdio.h>
void c_to_f()
{
    int c,y;
    printf("enter temp in celcius:");
    scanf("%d",&c);
    y=((c*9)/5+32);
    printf("IN FERHENITE %d",y);
}
void main()
{
    c_to_f();
}