# include <stdio.h>
int main()
{
    // let a =selling price;
    // let b=cost price;
    int a,b,c;
    printf("entre selling price");
    scanf("%d",&a);
    printf("entre cost price");
    scanf("%d",&b);
    c= a-b;
    printf("we get %d",c);
    if(a>b && a>c)
    {
        printf("profit ");
    }
    else if (b>a && b>c)
    {
        printf("loss");
    }
    return 0;

}