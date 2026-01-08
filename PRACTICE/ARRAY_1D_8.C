#include <stdio.h>
int main()
{
    int n,i,esum=0,osum=0,ecount=0,ocount=0;
    printf("enter no.:");
    scanf("%d",&n);
    int a[n];
    printf("Array elements are:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("sum of all even elements of an array:\n");
    for(i=0;i<10;i++)
    {
        if(a[i]%2==0)
        {
        esum=esum+a[i];
        ecount++;
        }  
    }
    printf("%d",esum);
    printf("\ntotal even numbers are:%d\n",ecount);
    printf("sum of all odd elements of ann array:\n");
    for(i=0;i<10;i++)
    {
        if(a[i]%2!=0)
        {
            osum=osum+a[i];
            ocount++;
        }
    }
    printf("%d\n",osum);
    printf("total odd numbers are:%d",ocount);
    return 0;
}