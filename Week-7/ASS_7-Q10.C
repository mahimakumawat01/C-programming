# include <stdio.h>
int main()
{//a=side og tringle
    int a, b,c;
    printf("entre a");
    scanf("%d",&a);
    printf("enter b");
    scanf("%d",&b);
    printf("entre c");
    scanf("%d",&c);

if((a+b>c )&& (b+c>a) && (a+c>b))
{
    printf("tringle is valid");
}
else 
{
    printf("tringle is not valid");
}
}