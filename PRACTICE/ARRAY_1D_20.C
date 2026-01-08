#include<stdio.h>
int main()
{
    int i,n,j,data,pos;
    printf("enter no.:");
    scanf("%d",&n);
    int a[n];
    printf("an array elements:\n");
    for(i=0;i<n;i++)
    {
    scanf("%d",&a[i]);
    }
    printf("\nenter element to be insert: ");
    scanf("%d",&data);
    printf("\nenter pos:");
    scanf("%d",&pos);
    for(i=n-1;i>=pos;i--)
    {
        a[i]=a[i-1];
    }
    a[pos-1]=data;
    printf("elements after instrting:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }
    return 0;
}