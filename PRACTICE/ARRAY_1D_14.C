#include <stdio.h>
int main()
{
    int i,n;
    printf("enter no.:");
    scanf("%d",&n);
    int a[n];
    printf("array elements are:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int max=a[0];
    for(i=1;i<n;i++)
    {
        if(max<a[i])
        {
            max=a[i];
        }
    }
    printf("\nmax=%d",max);
    return 0;
}