#include<stdio.h>
#include<stdlib.h>
struct node {
   int coff;
   int pow;
   struct node *next;
};
struct node *start = NULL;
struct node1 {
    int coff1;
    int pow1;
    struct node1 *next1;
};
struct node1 *start1= NULL;
int sum=0;
void insert()
{
    printf("enter elements of 1st linked list:\n");
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    printf("enter coffecient: ");
    scanf("%d",&newnode->coff);
    printf("enter power: ");
    scanf("%d",&newnode->pow);
    if(start==NULL)
    {
       newnode->next=start;
       start=newnode;
    }
    else
    {
        struct node *t=start;
        while (t->next!=NULL)
        {
            t=t->next;
        }
        t->next=newnode;
        newnode->next=NULL;
    }
}
void insert1()
{
    printf("enter elements of 2nd linked list:\n");
    struct node1 *newnode1=(struct node1*)malloc(sizeof(struct node1));
    printf("enter coffecient: ");
    scanf("%d",&newnode1->coff1);
    printf("enter power: ");
    scanf("%d",&newnode1->pow1);
    if(start1==NULL)
    {
       newnode1->next1=start1;
       start1=newnode1;
    }
    else
    {
        struct node1 *t1=start1;
        while (t1->next1!=NULL)
        {
            t1=t1->next1;
        }
        t1->next1=newnode1;
        newnode1->next1=NULL;
    }
}
void print()
{
    if(start==NULL && start1==NULL)
    {
        printf("list is empty\n");
    }
    else
    {
        struct node *t =start;
        struct node1 *t1 =start1;
        int i=t->pow;
        printf("sum of given polynomial is:\n");
        while(t!=NULL)
        {
           sum=(t->coff) + (t1->coff1);
           printf("%dx^%d",sum,i);
           if(t)
           printf("+");
           t=t->next;
           t1=t1->next1;
           i--;
        }
       printf("\n");
    }
}
int main()
{
    int choise;
    while ((1))
    {
        printf("1. insertion \n");
        printf("2. print polynomial\n");
        printf("3. exit\n");
        printf("enter your choise: ");
        scanf("%d",&choise);
        switch (choise)
        {
        case 1:
            insert();
            insert1();
            break;
        case 2:
            print();
            break;
        case 3:
           return 0;
           break;    
        default:
            break;
        }
    }
    
}