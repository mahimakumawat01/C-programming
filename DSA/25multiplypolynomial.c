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
void printmul()
{
    int mul=0,i=0;
    struct node *t=start;
    struct node1 *t1=start1;
    printf("(");
    while (t!=NULL)
    {  t1=start1;
        
        while(t1!=NULL)
        {
            mul=t->coff*t1->coff1;
            i=t->pow+t1->pow1;
            printf("%dx^%d",mul,i);            
            t1=t1->next1;
              if(mul>=0)
              printf("+");
        }
        t=t->next;
    }
    printf(")\n");
}
int main()
{
    int choise;
    while ((1))
    {
        printf("1. insertion \n");
        printf("2. print polynomial multiplication\n");
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
            printmul();
            break;
        case 3:
           return 0;
           break;    
        default:
            break;
        }
    }
}