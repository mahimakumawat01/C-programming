#include<stdio.h>
#define max 10
int front=0,rear=-1;
int a[max];
int main()
{
    int choise,n;
    while (1)
    {
        printf("1.insert at rear\n");
        printf("2.delete from front\n");
        printf("3.delete from last\n");
        printf("4.exit\n");
        printf("enter your choise ");
        scanf("%d",&choise);
        switch (choise)
        {
            case 1:
            if(rear==max-1)
            {
               printf("array is full");
            }
            else
            {
               rear++;
               printf("enter no:");
               scanf("%d",&a[rear]);
            }
           break;
           case 2:
            if(rear==-1)
            {
                printf("array is empty\n");
            }
            else
            {
                if(rear==-1)
                {
                    printf("array is empty\n");
                }
                else
                {
                    printf("element is deleted from first\n");
                    front++;
                }
            }
            break;
        case 3:
            if(rear==-1)
            {
                printf("array is empty\n");
            }
            else
            {
                rear--;
                printf("element is deleted from last\n");
            }
            break;
        case 4:
           return 0;
        }
    }
}