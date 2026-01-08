#include <stdio.h>
int main()
{
    int n,count=0;
    printf("enter no:");
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int data;
    printf("enter data:");
    scanf("%d", &data);
    for (int i = 0; i < n; i++)
    {
        if (data == a[i])
        { count++;
            printf("data found at %d\n",i);
        }
    }
    printf("times: %d",count);
    return 0;
}