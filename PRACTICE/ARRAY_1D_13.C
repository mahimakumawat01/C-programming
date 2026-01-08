#include <stdio.h>
int main()
{
    int i,n;
    printf("enter no.:");
    scanf("%d",&n);
    int a[n];
    printf("array elemtens are:\n");
    for(i=0;i<n;i++)
    {
    scanf("%d",&a[i]);
    }
    int min=a[0];
    for(i=1;i<10;i++)
    {
        if(min>a[i])
        {
            min=a[i];
        }
    }
    printf("\nmin=%d",min);
    return 0;
    }
