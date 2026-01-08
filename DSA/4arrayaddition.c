// #include<stdio.h>
// int main()
// {
//     int n;
//     printf("enter no:");
//     scanf("%d",&n);
//     int a[n],b[n],c[n],d[n];
//     // for(int i=0;i<n;i++)
//     {
//         scanf("%d",&a[i]);
//     }
//     printf("enter array elements:\n");
//     for(int i=0;i<n;i++)
//     {
//         scanf("%d",&b[i]);
//     }
//     for(int i=0;i<n;i++)
//     {
//         c[i]=b[n-i-1];
//     }
//     printf("addition:\n");
//     for(int i=0;i<n;i++)
//     {
//         d[i]=a[i]+c[i];
//         printf("%d\n",d[i]);
//     }
// }

#include <stdio.h>

int main()
{
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);
 
    int a[n], b[n], c[n], d[n];
    printf("Enter elements for array a:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter elements for array b:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &b[i]);
    }
    for (int i = 0; i < n; i++)
    {
        c[i] = b[n - i - 1];
    }
    printf("Addition of a and reversed b:\n");
    for (int i = 0; i < n; i++)
    {
        d[i] = a[i] + c[i];
        printf("%d ", d[i]);
    }

    return 0;
}
