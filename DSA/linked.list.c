#include<stdio.h>
#include<stdlib.h>
struct node{
     int data;
     struct node *next;
};

struct node *start = NULL;

void addfront()
{
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    printf("enter data: ");
    scanf("%d",&newnode->data);
    newnode->next=start;
    start=newnode;
}

void addlast()
{
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    printf("enter data: ");
    scanf("%d",&newnode->data);
    newnode->next=NULL;
    if(start==NULL)
    {
        newnode->next=start;
        start=newnode;
    }
    else
    {
        struct node *t = start;
        while(t->next!=NULL)
        {
            t=t->next;
        }
        t->next=newnode;
    }
}

void deletefront()
{
    if(start==NULL)
    {
        printf("list is empty\n");
    }
    else
    {
        struct node *t =start;
        start=start->next;
        free(t);
    }
}

void deletelast()
{
    if(start==NULL)
    {
        printf("list id empty\n");
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

void  traversal()
{
    printf("all nodes of list:\n");
    struct node *t=start;
    while (t!=NULL)
    {
        printf("%d\n",t->data);
        t=t->next;
    }
}
void countingnode()
{
    if(start==NULL)
    {
        printf("list is empty\n");
    }
    else
    {
        int count=0;
        struct node *t=start;
        while(t!=NULL)
        {
            count++;
            t=t->next;
        }
        printf("total no of nodes are: %d\n",count);
    }
}
void countevenandodd()
{
    if(start==NULL)
    {
        printf("list is empty\n");
    }
    else
    {
        int counteven=0, countodd=0;
        struct node *t = start;
        while (t!=NULL)
        {
            if(t->data % 2 != 0)
            {
                counteven++;
                t=t->next;
            }
            else
            {
                countodd++;
                t=t->next;
            }
        }
        printf("total even no: %d\n",counteven);
        printf("total odd no : %d\n",countodd);
    }
}
void sum()
{
    if(start==NULL)
    {
        printf("list is empty\n");
    }
    else
    {
        int sum=0;
        struct node *t = start;
        while (t!=NULL)
        {
            sum = sum + t->data;
            t=t->next;
        }
        printf("sum of all nodes: %d\n",sum);
    }
}

void sumofevenodd()
{
    int sumeven=0,sumodd=0;
    struct node *t = start;
    while(t!=NULL)
    {
        if(t->data%2!=0)
        {
            sumeven=sumeven+t->data;
            t=t->next;
        }
        else
        {
            sumodd=sumodd+t->data;
            t=t->next;
        }
    }
    printf("even sum: %d\n",sumeven);
    printf("odd sum: %d\n",sumodd);
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

void addafterconst()
{
   if(start==NULL)
   {
       printf("list is empty\n");
   }
   else
   {
       int k;
       struct node *newnode = (struct node*)malloc(sizeof(struct node));
       printf("enter data: ");
       scanf("%d",&newnode->data);
       printf("enter data after you want to insert new data: ");
       scanf("%d",&k);
       struct node *t=start;
       while(t->data!=k)
       {
            t=t->next;
       }
       newnode->next=t->next;
       t->next=newnode;
   }
}

void deleteconst()
{
    if(start == NULL)
    {
        printf("list is empty\n");
    }
    else
    {
        int k;
        printf("enter data you want to delete: ");
        scanf("%d",&k);
        struct node *t = start,*ptr;
        while (t->data!=k)
        {
            ptr=t;
            t=t->next;
        }
        ptr->next=t->next;;
        free(t);
    }
}

int main()
{
    int choise;
    while(1)
    {
        printf("1. add front\n");
        printf("2. add last\n");
        printf("3. delete front\n");
        printf("4. delete last\n");
        printf("5. traverse\n");
        printf("6. counting of node\n");
        printf("7. count enen and odd\n");
        printf("8. sum of every node\n");
        printf("9. sum of enen and odd\n");
        printf("10. find min\n");
        printf("11. find max\n");
        printf("12. at after const\n");
        printf("13. delete const\n");
        printf("14. exit\n");
        printf("enter your choise: ");
        scanf("%d",&choise);

        switch (choise)
        {
        case 1:
            addfront();
            break;
        case 2:
            addlast();
            break;  
        case 3:
            deletefront();
            break;      
        case 4:
            deletelast();
            break;
        case 5:
            traversal();
            break;
        case 6:
            countingnode();
            break;
        case 7:
            countevenandodd();
            break;
        case 8:
            sum();
            break;
        case 9:
            sumofevenodd();
            break; 
        case 10:
            findmin();
            break;
        case 11:
            findmax();
            break; 
        case 12:
            addafterconst();
            break;
        case 13:
            deleteconst();
            break;
        case 14:
            return 0;                                 
        default:
            break;
        }
    }
}