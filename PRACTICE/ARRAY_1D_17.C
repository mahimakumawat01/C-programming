//binary search
#include <stdio.h>
int main()
{
    int i,j,n,k,mid,max,min;
    printf("enter no.:");
    scanf("%d",&n);
    int a[n];
    printf("an array elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
}