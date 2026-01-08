#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *start = NULL;

void insert()
{
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    printf("enter data: ");
    scanf("%d", &newnode->data);
    newnode->next = start;
    start = newnode;
}
void insertatlast()
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
        t->next = newnode;
        newnode->next = start;
    }
}
void insertatmid()
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
        int k;
        struct node *t = start;
        printf("enter data after you want to insert newdata:\n");
        scanf("%d", &k);
        while (t->data != k)
        {
            t = t->next;
        }
        newnode->next = t->next;
        t->next = newnode;
    }
}
void deletefromfirst()
{
    if (start == NULL)
    {
        printf("list is empty\n");
    }
    if (start->next == start)
    {
        free(start);
        start = NULL;
    }
    else
    {
        struct node *t = start, *p = start;
        while (t->next != start)
        {
            t = t->next;
        }
        t->next = start->next;
        start = start->next;
        free(p);
    }
    printf("first node deleted succesfully\n");
}
void deletefromlast()
{
    if (start == NULL)
    {
        printf("list is empty\n");
    }
    else
    {
        struct node *t = start;
        while (t->next->next != start)
        {
            t = t->next;
        }
        free(t->next);
        t->next = start;
    }
    printf("node deleted successfuly\n");
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
        printf("enter node you want to delet: ");
        scanf("%d", &k);
        struct node *t = start, *temp;
        while (t->next->data != k)
        {
            t = t->next;
        }
        temp = t->next->next;
        free(t->next);
        t->next = temp;
        printf("node is deleted\n");
    }
}
void findmax()
{
    struct node *t = start->next;
    int max = start->data;
    while (t != start)
    {
        if (max < t->data)
        {
            max = t->data;
        }
        t=t->next;
    }
    printf("maximum element is: %d\n",max);
}
void findmin()
{
    struct node *t = start->next;
    int min = start->data;
    while (t != start)
    {
        if (min > (t->data))
        {
            min = t->data;
        }
        t=t->next;
    }
    printf("minimum element is: %d\n",min);
}
void searching()
{
    int k, loc = 1;
    struct node *t = start;
    printf("enter data you want to search: \n");
    scanf("%d", &k);
    while (t->data != k)
    {
        t = t->next;
        loc++;
    }
    printf("data  ( %d ) is found at %d loaction: \n", k, loc);
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
        while (t->next != start)
        {
            printf("%d\n", t->data);
            t = t->next;
        }
        printf("%d\n", t->data);
    }
    getchar();
}
int main()
{
    int choise;
    while (1)
    {
        printf("1. insert\n");
        printf("2. insert at last\n");
        printf("3. insertion at mid\n");
        printf("4. delete from first\n");
        printf("5. delete from last\n");
        printf("6. delete from mid\n");
        printf("7. find max\n");
        printf("8. find min\n");
        printf("9. searchiung\n");
        printf("10. traversal\n");
        printf("11. exit\n");
        printf("enter your choise: ");
        scanf("%d", &choise);
        switch (choise)
        {
        case 1:
            insert();
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
            findmax();
            break;
        case 8:
            findmin();
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
        default:
            break;
        }
    }
}