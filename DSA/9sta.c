#include <stdio.h>
#define max 10
int main()
{
    int n = -1, i, choise;
    int a[max];
    while (1)
    {
        printf("\n1.insert element\n2.display\n3.show\n4.delete\nenter your choise:");
        scanf("%d",&choise);
        switch (choise)
        {
        case 1:
            if (n == max - 1)
            {
                printf("array is full");
            }   
            else
            {
                n++;
                printf("enter array elements:");
                scanf("%d", &a[n]);
            }
            break;
        case 2: 
            if (n == -1)
            {
                printf("array is empty");
            }
            else
            {
                printf("all array elemets:\n");
                for (int i = 0; i <=n; i++)
                {
                    printf("%d\n", a[i]);
                }
            }
            break;
        case 3:
            if (n == -1)
            {
                printf("array is empty");
            }
            else
            {
                printf("last element of an array is: %d", a[n]);
            }
            break;
        case 4:
            if (n == -1)
            {
                printf("array is empty");
            }
            else
            {
                n--;
                printf("element is deleted");
            }
            break;
        default:
            break;
        }
        
    }
    return 0;
}