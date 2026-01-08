#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};

struct node *start = NULL;

void insertatfirst()
{
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    printf("enter value of node: ");
    scanf("%d", &newnode->data);
    newnode->next = start;
    start = newnode;
}

void insertatlast()
{
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    printf("enter value of node: ");
    scanf("%d", &newnode->data);
    newnode->next = NULL;
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
    }
    // *last== null
    // if (start == NULL)
    // {
    //     start = newnode;
       // end =n;
    // }
    // else
    // {
    //     end->next=n;
    //     end=n;
    // }
}

void insertatmid()
{
    int k;
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    struct node *t = start,*temp;
    printf("enter value of node: ");
    scanf("%d",&newnode->data);
    newnode->next = start;
    if(start==NULL)
    {
        start = newnode;
    }
    else
    {
        printf("enter data after you want to insert new node: ");
        scanf("%d", &k);
        while (t->data!=k)
        {
            t=t->next;
        }
        temp=t->next;
        newnode->next=temp;  
        t->next=newnode;
    }
}

void deletefromfirst()
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

void deletefromlast()
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

void deletefrommid()
{
    if(start==NULL)
    {
        printf("list is empty\n");
    }
    else
    {
        int k;
        printf("enter node you want to delet: ");
        scanf("%d",&k);
        struct node *t=start,*temp;
        while(t->next->data!=k)
        {
            t=t->next;
        }
        temp=t->next->next;
        free(t->next);
        t->next=temp;
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

void searching()
{
   int k,loc=1;
   struct node *t=start;
   printf("enter data you want to search: \n");
   scanf("%d",&k);
   while (t->data!=k)
   {
      t=t->next;
      loc++;
   }
    printf("data  ( %d ) is found at %d loaction: \n",k,loc);
}

void findmin()
{
    struct node *t=start;
    int min=t->data;
    while (t!=NULL)
    {
        if(min > (t->data))
       {
          min=t->data; 
       }
       t=t->next; 
    }
    printf("minimum elemet is %d\n",min);
}

void findmax()
{
    struct node *t=start;
    int max=t->data;
    while (t!=NULL)
    {
        if(max < (t->data) )
        {
            max=t->data; 
        }
       t=t->next; 
    }
    printf("maximum elemet is %d\n",max);
}

void deletealternatenode()
{
    int count=1;
    struct node *t=start,*temp = start, *ptr;
    while(t!=NULL)
    { 
        if(count==1)
        {
           ptr=t;
           start=t->next;
           t=start;
           free(ptr);
           count++;
        }
        else if(count%2 == 1 && t->next != NULL)
        {
            ptr=t->next;
            t->next=t->next->next;
            free(ptr);
            t=t->next;
            count++;
        }
        else
        {
           t=t->next;
           count++;
        }
    }
}
int main()
{
    int choise;
    while (1)
    {
        printf("1.  insert at first node\n");
        printf("2.  insert at last node\n");
        printf("3.  insert at mid\n");
        printf("4.  delete from first\n");
        printf("5.  delete from last\n");
        printf("6.  delete from mid\n");
        printf("7.  traversal\n");
        printf("8.  searching\n");
        printf("9.  find minimum\n");
        printf("10. find maximum\n");
        printf("11. delete alternate node\n");
        printf("12. exit\n");
        printf("enter your choise: ");
        scanf("%d", &choise);
        switch (choise)
        {
        case 1:
            insertatfirst();
            break;
        case 2:
            insertatlast();
            break;
        case 3:
            insertatmid();
            break;
        case 4:
            deletefromfirst();
            break;
        case 5:
            deletefromlast();
            break;
        case 6:
            deletefrommid();
            break;
        case 7:
            traversal();
            break;
        case 8:
            searching();
            break;
        case 9:
            findmin();
            break;
        case 10:
            findmax();  
            break; 
        case 11:
            deletealternatenode();
            break;       
        case 12:
            return 0;
            break;
        default:
            break;
        }
    }
}