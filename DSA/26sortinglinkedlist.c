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
void sort()
{
    int temp;
   struct node *t1,*t2;
   /*
   while(t!=NULL)
   {
      struct node *t1=t->next;
      while (t1!=NULL)
      {
            if((t->data) > (t1->data))
            {
                temp=t->data;
                t->data=t1->data;
                t1->data=temp;   
            } 
            t1=t1->next;   
      }
      t=t->next;
   }
      */
//      for(t1=start;t1!=NULL;t1=t1->next)
//      {
//         for(t2=t1->next;t2!=NULL;t2=t2->next)
//         {
//             if(t1->data > t2->data)
//             {
//                 temp=t1->data;
//                 t1->data=t2->data;
//                 t2->data=temp;   
//             }           
//         }
//      }
//    t=start;
//    printf("all nodes of lined list:\n");
//    while (t!=NULL)
//    {
//      printf("%d\n",t->data);
//      t=t->next;
//    }
}
int main()
{
    int choise;
    while (1)
    {
        printf("1. insert\n");
        printf("2. sort\n");
        printf("3. exit\n");
        printf("enter your choise: ");
        scanf("%d",&choise);
        switch (choise)
        {
        case 1:
            insert();
            break;
        case 2:
            sort();
            break;
        default:
            return 0;
        }
    }
    
    return 0;
}