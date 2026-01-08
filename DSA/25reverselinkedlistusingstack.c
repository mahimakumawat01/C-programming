#include <stdio.h>
#include <stdlib.h>
#define max 50
int arr[max], top = -1;
struct node
{
    int data;
    struct node *next;
};
typedef struct node snode;

snode *start = NULL;
int main()
{
    int choise;
    while (1)
    {
        printf("1. insert\n");
        printf("2. reverse traversal\n");
        scanf("%d", &choise);
        switch (choise)
        {
        case 1:
        {
            snode *newnode = (snode *)malloc(sizeof(snode));
            printf("enter new node: ");
            scanf("%d", &newnode->data);
            if (start == NULL)
            {
                newnode->next = start;
                start = newnode;
            }
            else
            {
                struct node *t = start;
                while (t->next != NULL)
                {
                    t = t->next;
                }
                t->next = newnode;
                newnode->next = NULL;
            }
            ++top;
            arr[top]=newnode->data;
        }
            
            break;
        case 2:
        {
            printf("all elements in reverse order: \n");
            snode *t = start;
            for (int i = top; i>=0; i--)
            {
                t->data=arr[i];
                printf("%d\n",t->data);
                t=t->next;
            }
        }
            break;
        default:
           return 0;
        }
    }
}