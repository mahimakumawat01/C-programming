#include <stdio.h>
int main ()
{
    // let a be the distance between two cities in km
    int a,b;
    printf("entre distance a in km:");
    scanf( "%d",&a );
    b=a*1000000;
    printf("distance in mm: %d",b);
    return 0;
}