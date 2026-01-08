#include <stdio.h>
#include <math.h>
const int g=9.8;
void force(int m)
{
    int i;
    i=m*g;
    printf("force of attraction is %d",i);
}
int main()
{
    int m;
    printf("enter mass:");
    scanf("%d",&m);
    force(m);
}