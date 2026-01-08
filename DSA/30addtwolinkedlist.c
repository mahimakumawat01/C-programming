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
addlist()
{
    struct node *t=start1,*s=start2,*p=start3;
    while (t!=NULL|| s!=NULL )
    {
        struct node *newnode = (struct node *)malloc(sizeof(struct node));
        newnode->next=NULL;
        if (t != NULL && s != NULL)
        {
            newnode->data = t->data + s->data;
            t = t->next;
            s = s->next;
        }
        else if (t != NULL)
        {
            newnode->data = t->data;
            t = t->next;
        }
        else if (s != NULL)
        {
            newnode->data = s->data;
            s = s->next;
        }
        if(start3==NULL)
        {
            start3=newnode;
            p=start3;
        }
        else
        {
           p->next=newnode;
           p=newnode;
        }
    }
    printf("lineked are added\n");
}
printaddition()
{
   printf("sum of both list:\n");
   struct node *t=start3;
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
        printf("5. add 1st and 2nd list\n");
        printf("6. traversal sum of list\n");
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
            addlist();
            break;
        case 6:
            printaddition();
            break;
        case 7:
            return 0;
        default:
            break;
        }
    }
}