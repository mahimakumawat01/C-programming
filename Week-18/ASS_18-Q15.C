#include <stdio.h>
int main()
{
    int n;
    printf("enter no of rows:");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            printf(" ");
        }
        if (i == 1)
        {
            printf("*");
        }

        else if (i > 1 && i < n)
        {
            printf("*");
            for (int j = 1; j <= (2 * i - 3); j++)
            {
                printf(" ");
            }
            printf("*");
        }

        else
        {
            for (int j = 1; j <= 2 * n - 1; j++)
            {
                printf("*");
            }
        }
        printf("\n");
    }
    return 0;
}