#include <stdio.h>
int main()
{
    int i,n,data,count=0;
    printf("enter no.:");
    scanf("%d",&n);
    int a[n];
    printf("array elements are:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter searching data:\n");
    scanf("%d",&data);
    for(i=0;i<n;i++)
    {
        if(a[i]==data)
        {
         printf("yes found at %d",i);
         count++;
        }
    }
    if(count==0)
    {
        printf("\nnot found");
    }
    else 
    printf("\nfound:%d time",count);
    return 0;
}
