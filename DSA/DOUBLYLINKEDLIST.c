#include <stdio.h>
#include <stdlib.h>
struct node
{
    struct node *pre;
    int data;
    struct node *next;
};
struct node *start = NULL;
void addfront()
{
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    printf("enter data: ");
    scanf("%d",&newnode->data);
    if(start==NULL)
    {
        newnode->next=start;
        newnode->pre=start;
        start=newnode;
        printf("first node inserted\n");
    }
    else
    {
        newnode->pre=NULL;
        newnode->next=start;
        start->pre=newnode;
        start=newnode;
        printf("node is inserted at first\n");
    }
}
void addlast()
{
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    printf("enter data: ");
    scanf("%d",&newnode->data);
    if(start==NULL)
    {
        newnode->next=start;
        newnode->pre=start;
        start=newnode;
        printf("first node inserted\n");
    }
    else
    {
        struct node *last = start;
        last->next=newnode;
        newnode->pre=last;
        newnode->next=NULL;
        last=newnode;
        printf("node inserted at last\n");
    }
}
void deletefirst()
{
    if(start==NULL)
    {
        printf("list is empty\n");
    }
    else if(start->next==NULL)
    {
        free(start);
        start=NULL;
    }
    else
    {
        struct node *t = start;
        start=start->next;
        free(t);
        start->pre=NULL;
    }
    printf("first node is deleted\n");
}
void deletelast()
{
   if(start==NULL)
   {
        printf("lsit is empty\n");
   }
   else
   {
        struct node *t=start;
        while(t!=NULL)
        {
            t=t->next;
        }
        (t->pre)->next=NULL;
        free(t);
   }
}
void traverse()
{

}
void countingofnode()
{

}
void sumofnode()
{

}
void findmin()
{

}
void findmax()
{

}
void addafterconst()
{

}
int main()
{
    int choice;
    while (1)
    {
        printf("1. add at front\n");
        printf("2. add at last\n");
        printf("3. delete from front\n");
        printf("4. delete from last\n");
        printf("5. traversal\n");
        printf("6. count node\n");
        printf("7. sum of all nodes\n");
        printf("8. find min\n");
        printf("9. find max\n");
        printf("10. add after const\n");
        printf("enter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            addfront();
            break;
        case 2:
            addlast();
            break;
        case 3:
            deletefirst();
            break;
        case 4:
            deletelast();
            break;
        case 5:
            traverse();
            break;
        case 6:
            countingofnode();
            break;
        case 7:
            sumofnode();
            break;
        case 8:
            findmin();
            break;
        case 9:
            findmax();
            break;
        case 10:
        addafterconst();
            break;    
        default:
            break;
        }
    }
}