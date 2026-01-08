#include <stdio.h>
int main()
{
    // let a = basic salary
    //b=dearness allowence
    //c=rent allowence
    //d=gross salary
    int a,b,c,d;
    printf("basic salary");
    scanf("%d",&a);
    b=0.5*a;
    c=0.2*b;
    d=a+b+c;
    printf("gross salary%d",d);
    return 0;
}