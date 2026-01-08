#include <stdio.h>
int main()
{
    int n;
    printf("enter n:");
    scanf("%d", &n);
    int a[n], b[n], c[n];
    printf("enter array elements:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("enter array elements:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &b[i]);
    }
    for (int i = 0; i < n; i++)
    {
        c[i] = a[i] + b[i];
        printf("%d\n", c[i]);
    }

    return 0;
} 