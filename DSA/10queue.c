#include <stdio.h>
#define max 10
int main()
{
    int front = 0, rear = -1, n, choise, i;
    int a[max];
    while (1)
    {
        printf("1.insert\n");
        printf("2.delete\n");
        printf("3.peek\n");
        printf("4.traversal\n");
        printf("5.exit\n");
        printf("enter your choise:");
        scanf("%d", &choise);
        switch (choise)
        {
        case 1:
            if (rear == max - 1)
            {
                printf("array is full\n");
            }
            else
            {
                rear++;
                printf("enter element:");
                scanf("%d", &a[rear]);
            }
            break;
        case 2:
            if (front > rear)
            {
                printf("array is empty\n");
            }
            else
            {
                front++;
                printf("element is deleted");
            }
            break;
        case 3:
            if (front > rear)
            {
                printf("array is empty");
            }
            else
            {
                printf("%d", a[front]);
            }
            break;
        case 4:
            if (front > rear)
            {
                printf("array is empty\n");
            }
            else
            {
                printf("all elements of array:\n");
                for (i = front; i <= rear; i++)
                {
                    printf("%d\n", a[i]);
                }
            }
            break;
        case 5:
            return 0;    
        default:
            break;
        }
    }
}