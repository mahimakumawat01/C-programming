// ************  input restricted dequeue  ************

#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};

struct node *start = NULL;
void insertatrear()
{
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    printf("enter value of node: ");
    scanf("%d", &newnode->data);
    newnode->next = start;
    if (start == NULL)
    {
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
}
void deletefromfront()
{
    if(start==NULL)
    {
        printf("list is empty\n");
    }
    else
    {
        struct node *t=start;
        start=start->next;
        free(t);
    }
    printf("node is deleted\n");
}
void deletefromrare()
{
    if(start==NULL)
    {
        printf("list is empty\n");
    }
    else
    {
        struct node *t=start;
        while (t->next->next!=NULL)
        {
            t=t->next;
        }
        free(t->next);
        t->next=NULL;  
        printf("node is deleted\n");
    }
}
void traversal()
{
    if (start == NULL)
    {
        printf("list is empty\n");
    }
    else
    {
        struct node *t = start;
        printf("all elements of list are:\n");
        while (t != NULL)
        {
            printf("%d\n", t->data);
            t = t->next;
        }
    }
}
int main()
{
    int choise;
    while (1)
    {
        printf("1. insert at rear\n");
        printf("2. delete from front\n");
        printf("3. delete from rear\n");
        printf("4. traversal\n");
        printf("5. exit\n");
        printf("enter your choise: ");
        scanf("%d", &choise);
        switch (choise)
        {
        case 1:
            insertatrear();
            break;
        case 2:
            deletefromfront();
            break;
        case 3:
            deletefromrare();
            break;
        case 4:
            traversal();
            break;
        case 5:
            return 0;
            break;
        default:
            break;
        }
    }
}