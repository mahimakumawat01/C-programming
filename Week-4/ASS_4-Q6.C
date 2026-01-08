#include <stdio.h>
int main()
{
    // let a=distance between two cities 
    int a,b;
    printf("entre value of a in km:");
    scanf("%d",&a);
    // 1km=1000m
    b=a*1000 ;
    printf("distance in meters is %d",b);
    return 0;
}