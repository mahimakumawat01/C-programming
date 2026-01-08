#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* next;
};
struct node* start = NULL;
void insert()
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
void reverse()
{
    struct node *t =start,*p=NULL,*second;
    while(t!=NULL)
   {
       second=t->next;
       t->next=p;
       p=t;
       t=second;
   }
   start=p;
   printf("reversed\n");
   while (p!=NULL)
   {
       printf("%d\n",p->data);
       p=p->next;
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
        printf("1. insert\n");
        printf("2. reverse\n");
        printf("3. traversal\n");
        printf("enter your choise: ");
        scanf("%d",&choise);
        switch (choise)
        {
        case 1:
            insert();
            break;
        case 2:
            reverse();
            break;
        case 3:
            traversal();
            break;    
        default:
            return 0;
        }
    }
    
    return 0;
}