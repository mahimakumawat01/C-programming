#include<stdio.h>
int main()
{
    int a[10],i;
    printf("enter array elements:\n");
    for(i=0;i<10;i++)
    {
    scanf("%d\n",&a[i]);
    }
    printf("\narray elements in revers order:\n");
    for(i=0;i<10;i++)
    {
    printf("%d\n",a[9-i]);
    }
    return 0;
}