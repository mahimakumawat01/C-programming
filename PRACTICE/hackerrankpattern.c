// Online C compiler to run C program online
#include <stdio.h>

int main()
{
    // Write C code her
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= 2 * n - 1; i++)
    {
        int a = n;
        for (int j = 1; j <= n; j++)
        {
            printf("%d ", a);
            if (i <= n && j < i)
            {
                a--;
            }
            if (i > n && j <= ((2 * n) - 1) - i && ((2 * n) - 1) - i != 0)
            {
                a--;
            }
        }
        for (int j = 1; j < n; j++)
        {
            if (i <= n && j > n - i)
            {
                a++;
            }
            if (i > n && j > i - n)
            {
                a++;
            }
            printf("%d ", a);
        }

        printf("\n");
    }

    return 0;
}