
# include <stdio.h>
int main ()
{
    int a,b,c,d;
    printf("entre value of a");
    scanf("%d",&a);
    printf("entre value of b");
    scanf("%d",&b);
    printf("entre value of c");
    scanf("%d",&c),
    printf("entre values %d, %d, %d",a,b,c);

    d=(b*b)-(4*a*c);
    printf("%d",d);
    if(d>=1)
    {
        printf("equation is real and distinct");
    }
    else if(d==0)
    {
        printf("equation is real and equal");
    }
    else if(d<=-1)
    {
        printf("equation is immaginary");
    }
    return 0;


    
    
    }


