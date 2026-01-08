#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *start1 = NULL;
struct node *start2 = NULL;
struct node *start3 = NULL;
insertinfirstlist()
{
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    printf("enter value of node: ");
    scanf("%d", &newnode->data);
    newnode->next = start1;
    if (start1 == NULL)
    {
        start1 = newnode;
    }
    else
    {
        struct node *t = start1;
        while (t->next != NULL)
        {
            t = t->next;
        }
        t->next = newnode;
        newnode->next = NULL;
    }
}
insertinsecondlist()
{
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    printf("enter value of node: ");
    scanf("%d", &newnode->data);
    newnode->next = start2;
    if (start2 == NULL)
    {
        start2 = newnode;
    }
    else
    {
        struct node *t = start2;
        while (t->next != NULL)
        {
            t = t->next;
        }
        t->next = newnode;
        newnode->next = NULL;
    }
}
traversalfor1st()
{
    if (start1 == NULL)
    {
        printf("list is empty\n");
    }
    else
    {
        struct node *t = start1;
        printf("all elements of list are:\n");
        while (t != NULL)
        {
            printf("%d\n", t->data);
            t = t->next;
        }
    }
}
traversalfor2nd()
{
    if (start2 == NULL)
    {
        printf("list is empty\n");
    }
    else
    {
        struct node *t = start2;
        printf("all elements of list are:\n");
        while (t != NULL)
        {
            printf("%d\n", t->data);
            t = t->next;
        }
    }
}
void sortlistandmerge()
{
    int temp;
    struct node *t1 = start1, *t2 = start2, *p = NULL;
    while (t1 != NULL && t2 != NULL)
    {
        struct node *newnode = (struct node *)malloc(sizeof(struct node));
        newnode->next = NULL;
        if (t1->data < t2->data)
        {
            newnode->data = t1->data;
            t1 = t1->next;
        }
        else
        {
            newnode->data = t2->data;
            
            t2 = t2->next;
        }
        if (start3 == NULL)
        {
            start3 = newnode;
            p = start3;
        }
        else
        {
            p->next = newnode;
            p = newnode;
        }
    }
    while (t1 != NULL)
    {
        struct node *newnode = (struct node *)malloc(sizeof(struct node));
        newnode->data = t1->data;
        newnode->next = NULL;
        p->next = newnode;
        p = p->next;
        t1 = t1->next;
    }

    while (t2 != NULL)
    {
        struct node *newnode = (struct node *)malloc(sizeof(struct node));
        newnode->data = t2->data;
        newnode->next = NULL;
        p->next = newnode;
        p = p->next;
        t2 = t2->next;
    }
    printf("merge and sorted\n");
}
traversalofmergedlist()
{
    struct node *t = start3;
    printf("all ements of list after mergeing two list:\n");
    while (t != NULL)
    {
        printf("%d\n", t->data);
        t = t->next;
    }
}
int main()
{
    int choise;
    while (1)
    {
        printf("1. inesert in 1st list\n");
        printf("2. insert in 2nd list\n");
        printf("3. travesal for 1st list\n");
        printf("4. traversal for 2nd list\n");
        printf("5. sortlistandmerge \n");
        printf("6. traversal of merged list\n");
        printf("7. exit\n");
        printf("enter your choise: ");
        scanf("%d", &choise);
        switch (choise)
        {
        case 1:
            insertinfirstlist();
            break;
        case 2:
            insertinsecondlist();
            break;
        case 3:
            traversalfor1st();
            break;
        case 4:
            traversalfor2nd();
            break;
        case 5:
            sortlistandmerge();
            break;
        case 6:
            traversalofmergedlist();
            break;
        case 7:
            return 0;
            break;
        default:
            break;
        }
    }
}