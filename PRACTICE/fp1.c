#include <stdio.h>
int num(int a, int b, int c)
{

    return (a+b+c)/3;

}

int main()
{
    int a,b,c,ans;
    printf("enter value of a,b,c:\n");
    scanf("%d %d %d",&a,&b,&c);
    ans=num(a,b,c);
    printf("avr. of three no %d, %d, %d is %d",a,b,c,ans);
    return 0;
}
