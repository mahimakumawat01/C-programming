#include<stdio.h>
int main()
{
    int a[10],i;
    printf("enter arry elements:\n");
    for(i=0;i<10;i++)
    {
    scanf("%d",&a[i]);
    }
    printf("enter even elements of arry:\n");
    for(i=0;i<10;i++)
    {
    if(a[i]%2==0)
    {
    printf("%d\n",a[i]);
    }
    }
    return 0;
}