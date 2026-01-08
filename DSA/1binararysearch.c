#include <stdio.h>
int main()
{
    int start, end, mid, size, i, data;
    printf("enter size of array:\n");
    scanf("%d", &size);
    int a[size];
    printf("enter elements of an array:\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("sorted array is:\n");
    for (i = 0; i < size - 2; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                int temp;
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < size; i++)
    {
        printf("%d\n", a[i]);
    }
    printf("enter data you want to search:\n");
    scanf("%d", &data);
    start = 0;
    end = size - 1;
    int found = 0;

    while (start <= end)
    {
        mid = (start + end) / 2;

        if (a[mid] == data)
        {
            printf("Element found at index %d\n", mid);
            found = 1;
            break;
        }

        if (a[mid] < data)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }

    return 0;
}