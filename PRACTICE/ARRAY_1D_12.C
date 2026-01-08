#include <stdio.h>
int main()
{
    int n,i;
    printf("enter no.:");
    scanf("%d",&n);
    int a[n];
    printf("elemnts of an 1st array:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int b[n];
    printf("elements of an 2nd array:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
    }
    int c[n];
    printf("sum of an 1st and 2nd array:\n");
    for(i=0;i<n;i++)
    {   c[i]=a[i]+b[(n-1)-i];
        printf("sum of %d elements %d\n",i+1,c[i]);
    }
    return 0;
}