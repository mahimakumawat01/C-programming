// Online C compiler to run C program online
// sorting
#include <stdio.h>

int main()
{
    int n,i,temp;
    printf("enter no.:");
    scanf("%d",&n);
    int a[n];
    printf("elements of an array:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("elements before sorting:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }
    for(i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                 temp =a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    } 
    printf("elements after sorting:");
    for(i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }
    return 0;
}