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
mergelist()
{
    struct node *t = start1, *p = NULL;
    while (t != NULL)
    {
        struct node *newnode = (struct node *)malloc(sizeof(struct node));
        newnode->data = t->data;
        newnode->next = NULL;
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
  
        t = t->next;
    }
    struct node *s=start2 ;
    while(s!=NULL)
    {
       struct node *newnode1 = (struct node *)malloc(sizeof(struct node));
       newnode1->data=s->data;
       newnode1->next = NULL;
       p->next=newnode1;
       p=newnode1;
       s=s->next;
    }
    printf("linked list merged\n");
}
traversalofmergedlist()
{
    struct node *t=start3;
    printf("all ements of list after mergeing two list:\n");
    while (t!=NULL)
    {
        printf("%d\n",t->data);
        t=t->next;
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
        printf("5. merge 1st and 2nd list\n");
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
            mergelist();
            break;
        case 6:
            traversalofmergedlist();
            break;
        case 7:
            return 0;
        default:
            break;
        }
    }
}