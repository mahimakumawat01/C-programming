#include <stdio.h>
#define max 10
int main()
{
    int top = -1, i, choise;
    int stack[max];
    while (1)
    {
        printf("\n1.insert element\n2.display\n3.show\n4.delete\nenter your choise:");
        scanf("%d",&choise);
        switch (choise)
        {
        case 1:
            if (top == max - 1)
            {
                printf("array is full");
            }   
            else
            {
                top++;
                printf("enter array elements:");
                scanf("%d", &stack[top]);
            }
            break;
        case 2: 
            if (top == -1)
            {
                printf("array is empty");
            }
            else
            {
                printf("all array elemets:\n");
                for (int i = 0; i <=top; i++)
                {
                    printf("%d\n", stack[i]);
                }
            }
            break;
        case 3:
            if (top == -1)
            {
                printf("array is empty");
            }
            else
            {
                printf("last element of an array is: %d", stack[top]);
            }
            break;
        case 4:
            if (top == -1)
            {
                printf("array is empty");
            }
            else
            {
                top--;
                printf("element is deleted");
            }
            break;
        default:
            break;
        }
        
    }
    return 0;
}