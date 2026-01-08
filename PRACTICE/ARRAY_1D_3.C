#include<stdio.h>
int main()
{
    int a[10],i;
    printf("enter array elements:\n");
    for(i=0;i<10;i++)
    {
    scanf("%d",&a[i]);
    }
    printf("array elements of even index:");
    for(i=0;i<10;i=i+2)
    {
    printf("%d",a[i]);
    }
    return 0;
}
