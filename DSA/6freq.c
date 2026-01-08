#include<stdio.h>
int main()
{
    int n, count;
    scanf("%d",&n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        count = 1;
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] == a[j])
            {
                count++;
                for (int k = j; k < n; k++)
                {
                    a[k] = a[k + 1];
                }
                n--;
                j--;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("element: %d times: %d",a[i],count);
    }

    return 0;
}