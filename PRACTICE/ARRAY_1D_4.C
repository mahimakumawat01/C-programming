#include<stdio.h>
int main()
{
    int a[10],i;
    printf("enter array elements:\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("array elements of odd index:\n");
    for(i=0;i<10;i++)
    {
        if(a[i]%2==1)
        printf("%d\n",a[i]);
    }
    return 0;
}
