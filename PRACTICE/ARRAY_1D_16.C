#include <stdio.h>
int main()
{
    int i,n,even=0,odd=0;
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
        if(a[i]%2==0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    printf("total even no. are:%d\n",even);
    printf("total odd no. are:%d",odd);
    return 0;
}