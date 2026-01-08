#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *start = NULL;

void addfront()
{
    struct node *t = start;
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    printf("enter data: ");
    scanf("%d", &newnode->data);
    if (start == NULL)
    {
        start = newnode;
        newnode->next = start;
    }
    else
    {
        newnode->next = start;
        while (t->next != start)
        {
            t = t->next;
        }
        t->next = newnode;
        start = newnode;
    }
    printf("node inserted at first\n");
}
void addlast()
{
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    printf("enter data: ");
    scanf("%d", &newnode->data);
    if (start == NULL)
    {
        start = newnode;
        newnode->next = start;
    }
    else
    {
        struct node *t = start;
        while (t->next != start)
        {
            t = t->next;
        }
        newnode->next = start;
        t->next = newnode;
    }
    printf("node inserted at last\n");
}
void deletefirst()
{
    if (start == NULL)
    {
        printf("list is empty\n");
    }
    else
    {
        struct node *t = start;
        while (t->next != start)
        {
            t = t->next;
        }
        start = start->next;
        free(t->next);
        t->next = start;
        printf("first node i sdeleted\n");
    }
}
void deletelast()
{
    struct node *t = start;
    while (t->next->next != start)
    {
        t = t->next;
    }
    free(t->next);
    t->next = start;
}
void traverse()
{
    struct node *t = start;
    printf("al nodes of list:\n");
    while (t->next != start)
    {
        printf("%d\n", t->data);
        t = t->next;
    }
    printf("%d\n", t->data);
}
void countingofnode()
{
    int count = 1;
    struct node *t = start;
    if (start == NULL)
    {
        printf("list is empty\n");
    }
    else
    {
        while (t->next != start)
        {
            count++;
            t = t->next;
        }
        printf("%d\n", count);
    }
}
void sumofnode()
{
    int sum = 0;
    struct node *t = start;
    if (start == NULL)
    {
        printf("list is empty\n");
    }
    else
    {
        while (t->next != start)
        {
            sum = sum + t->data;
            t = t->next;
        }
        printf("sum of all nodes in a list: %d\n", sum + t->data);
    }
}
void findmin()
{
    int min = 0; 
    struct node *t = start;
    min = t->data;
    while (t->next != start)
    {
        if (min > t->data)
        {
            min = t->data;
        }
        t = t->next;
    }
    if (min > t->data)
        min = t->data;
    printf("minimum element is: %d\n", min);
}
void findmax()
{
    int max = 0;
    struct node *t = start;
    max = t->data;
    while (t->next != start)
    {
        if (max < t->data)
        {
            max = t->data;
        }
        t = t->next;
    }
    if (max < t->data)
        max = t->data;
    printf("minimum element is: %d\n", max);
}

void addafterconst()
{
    int k;
    struct node *t = start;
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    printf("enter data: ");
    scanf("%d", &newnode->data);
    printf("enter const: ");
    scanf("%d",&k);
    while (t->data!=k)
    {
        t=t->next;
    }
    if(t->next==start)
    {
        newnode->next=start;
        t->next=newnode;
    }
    else
    {
        newnode->next=t->next;
        t->next=newnode;
    }


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