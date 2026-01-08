#include <stdio.h>
#include <stdlib.h>
struct node
{
    struct node *pre;
    int data;
    struct node *next;
};

struct node *start = NULL;
insertatfirst()
{
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    printf("enter data: ");
    scanf("%d", &newnode->data);
    newnode->next = start;
    newnode->pre = NULL;
    if (start != NULL)
    {
        start->pre = newnode;
    }
    start = newnode;
    printf("node inserted at first\n");
}

void insertatlast()
{
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    printf("enter data: ");
    scanf("%d", &newnode->data);
    if (start == NULL)
    {
        newnode->next = start;
        newnode->pre = NULL;
        if (start != NULL)
        {
            start->pre = newnode;
        }
        start = newnode;
        printf("node inserted at first\n");
    }
    else
    {
        struct node *t = start;
        while (t->next != NULL)
        {
            t = t->next;
        }
        t->next = newnode;
        newnode->pre = t;
        newnode->next = NULL;
        printf("node inserted at last\n");
    }
}

void insertatmid()
{
    int k;
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    printf("enter data: ");
    scanf("%d", &newnode->data);
    printf("enter data after you want to insert: ");
    scanf("%d", &k);
    struct node *t = start, *temp;
    while (t->data != k)
    {
        t = t->next;
    }
    temp = t->next;
    newnode->next = temp;
    t->next = newnode;
    temp->pre = newnode;
    newnode->pre = t;
    printf("node inserted at mid\n");
}

void deletefromfirst()
{
    if (start == NULL)
    {
        printf("list is empty\n");
    }
    else
    {
        if (start->next == NULL)
        {
            free(start);
        }
        else
        {
            struct node *t = start;
            start = start->next;
            free(t);
            start->pre = NULL;
        }
    }
    printf("node is delete from first\n");
}

void deletefromlast()
{
    if (start == NULL)
    {
        printf("list is empty\n");
    }
    else
    {
        struct node *temp = start;
        while (temp->next->next != NULL)
        {
            temp = temp->next;
        }
        free(temp->next);
        temp->next = NULL;
    }
    printf("node is delete form last\n");
}

void deletefrommid()
{
    if (start == NULL)
    {
        printf("list is empty\n");
    }
    else
    {
        int k;
        struct node *t = start, *temp;
        printf("enter elente after you want to delete: ");
        scanf("%d", &k);
        while (t->data != k)
        {
            t = t->next;
        }
        temp = t->next->next;
        free(t->next);
        t->next = temp;
        temp->pre = t;
    }
    printf("node is deleted from mid\n");
}

void findmin()
{
    int min;
    struct node *t = start;
    min = t->data;
    while (t != NULL)
    {
        if (min > t->data)
        {
            min = t->data;
        }
        t = t->next;
    }
    printf("minimun element of list is: %d\n", min);
}

void findmax()
{
    int max;
    struct node *t = start;
    max = t->data;
    while (t != NULL)
    {
        if (max < t->data)
        {
            max = t->data;
        }
        t = t->next;
    }
    printf("minimun element of list is: %d\n", max);
}

void searching()
{
    if (start == NULL)
    {
        printf("list is empty\n");
    }
    else
    {
        int k,loc=1;
        printf("enter data you want to search: ");
        scanf("%d", &k);
        struct node *t = start;
        while (t->data!=k)
        {
            loc++;
            t=t->next;
        }
        if(t==NULL)
        {
            printf("data is not found in list\n");
        }
        else
        {
            printf("data id found in list at %d location\n",loc);
        }
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
        printf("all the elements of list:\n");
        while (t != NULL)
        {
            printf("%d\n", t->data);
            t = t->next;
        }
    }
}

int main()
{
    int choice;
    while (1)
    {
        printf("1. insert at first\n");
        printf("2. insert at last\n");
        printf("3. insert at mid\n");
        printf("4. delete from first\n");
        printf("5. delete from last\n");
        printf("6. delete from mid\n");
        printf("7. find min\n");
        printf("8. find max\n");
        printf("9. searching\n");
        printf("10. traversal\n");
        printf("11. exit\n");
        printf("enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
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
            findmin();
            break;
        case 8:
            findmax();
            break;
        case 9:
            searching();
            break;
        case 10:
            traversal();
            break;
        case 11:
            return 0;
            break;
        }
    }
    return 0;
}
