#include <stdio.h>
int main()
{
    int i,n,pos=0,neg=0,zero=0;
    printf("enter no.:");
    scanf("%d",&n);
    int a[n];
    printf("array elements are:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]>0)
        {
            pos++;
        }
        else if (a[i]<0)
        {
            neg++;
        }
        else
        {
            zero++;
        }
    }
    printf("total positive no. are:%d\n",pos);
    printf("total negative no. are:%d\n",neg);
    printf("total zeros are:%d\n",zero);
    return 0;
}