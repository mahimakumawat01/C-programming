#include <stdio.h>

int main() 
{
    int i, n, data, pos;

    // Input the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int a[n];

    // Input elements of the array
    printf("Enter elements of the array:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    // Display elements of the array
    printf("Elements of the array:\n");
    for(i = 0; i < n; i++)
    {
        printf("Value at %d = %d\n", i + 1, a[i]);
    }

    // Input the element to be inserted
    printf("\nEnter inserting element: ");
    scanf("%d", &data);

    // Input the position where the element should be inserted
    printf("Enter position: ");
    scanf("%d", &pos);

    // Shift elements to make space for the new element
    for(i = n - 1; i >= pos; i--) {
        a[i] = a[i - 1];
    }

    // Insert the new element at the specified position
    a[pos - 1] = data;

    // Display elements after inserting
    printf("\nElements after inserting:\n");
    for(i = 0; i < n; i++) {
        printf("%d\n", a[i]);
    }

    return 0;
}
