#include <stdio.h>
int main()
{
    int a,b,c;
    printf("entre a");
    scanf("%d",&a);
    printf("entre b");
    scanf("%d",&b);
    printf("entre your choice");
    scanf("%d",&c);
    if(c==0)
    {
        printf(" NO OPERATION");
    }
    else if (c==1)
    {
        printf("sum of two no. %d",a+b);
    }
    else if (c==2)
    {
        printf("diff of two no. %d",a-b);

    }
    else if (c==3)
    {
        printf("product of two no. %d",a*b);
    }
    else if (c==4) 
    {
        printf("division of two no.%d",a/b);
    }
    return 0;
}


