#include <stdio.h>
int main()
{
    int n;
    printf("enter n:");
    scanf("%d", &n);
    int a[n], b[n];
    printf("enter elements of first array:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("enter elements of second array:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &b[i]);
    }
    printf("elements of first array:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", a[i]);
    }
    printf("elements of second array:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", b[i]);
    }
    return 0;
} 