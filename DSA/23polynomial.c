#include<stdio.h>
#include<stdlib.h>
struct node {
   int coff;
   int pow;
   struct node *next;
};
struct node *start = NULL;
void insert()
{
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
void print()
{
    if(start==NULL)
    {
        printf("list is empty\n");
    }
    else
    {
        struct node *t =start;
        printf("given polynomial is:");
        while (t!=NULL)
        {   
            printf("%dx^%d",t->coff,t->pow);
            t=t->next;
            if(t)printf("+");
            
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