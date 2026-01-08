#include<stdio.h>
int main()
{
    int a[10],i;
    printf("\nenter 10 elements:\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\noutput is:\n");
    for(i=0;i<10;i++)
    {
        printf("%d\n",a[i]);
    }
    return 0;
}