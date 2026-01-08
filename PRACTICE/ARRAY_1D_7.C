#include <stdio.h>
int main()
{
    int i,n,sum=0;
    printf("enter no.:");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("sum of all elements of an array:\n");
    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    printf("%d",sum);
    return 0;
}