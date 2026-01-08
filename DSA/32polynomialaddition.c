#include <stdio.h>
#include <stdlib.h>
struct node
{
    int coff;
    int exp;
    struct node *next;
};
struct node *start1 = NULL;
struct node *start2 = NULL;
struct node *start3 = NULL;
void insertin1st()
{
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    printf("enter cofficient: ");
    scanf("%d", &newnode->coff);
    printf("enter power: ");
    scanf("%d", &newnode->exp);
    if (start1 == NULL)
    {
        newnode->next = start1;
        start1 = newnode;
    }
    else
    {
        struct node *t = start1;
        while (t->next != NULL)
        {
            t = t->next;
        }
        t->next = newnode;
        newnode->next = NULL;
    }
}
void insertin2nd()
{
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    printf("enter cofficient: ");
    scanf("%d", &newnode->coff);
    printf("enter power: ");
    scanf("%d", &newnode->exp);
    if (start2 == NULL)
    {
        newnode->next = start2;
        start2 = newnode;
    }
    else
    {
        struct node *t = start2;
        while (t->next != NULL)
        {
            t = t->next;
        }
        t->next = newnode;
        newnode->next = NULL;
    }
}
void traversal()
{
    struct node *t = start1;
    while (t != NULL)
    {
        printf("%dx^%d", t->coff, t->exp);
        t = t->next;
        if (t)
            printf("+");
    }
    printf("\n");
    struct node *s = start2;
    while (s != NULL)
    {
        printf("%dx^%d", s->coff, s->exp);
        s = s->next;
        if (s)
            printf("+");
    }
    printf("\n");
}
void sum()
{
    struct node *p = start3, *t = start1, *s = start2;
    while (t != NULL || s != NULL)
    {
        struct node *newnode = (struct node *)malloc(sizeof(struct node));
        newnode->next = NULL;
        if (t != NULL && s != NULL && t->exp == s->exp)
        {
            newnode->coff = t->coff + s->coff;
            newnode->exp = t->exp;
            t = t->next;
            s = s->next;
        }
        else if (s == NULL || (t->exp > s->exp))
        {
            newnode->coff = t->coff;
            newnode->exp = t->exp;
            t = t->next;
        }
        else
        {
            newnode->coff = s->coff;
            newnode->exp = s->exp;
            s = s->next;
        }

        if (start3 == NULL)
        {
            start3 = newnode;
            p = start3;
        }
        else
        {
            p->next = newnode;
            p = newnode;
        }
    }
    printf("sum is done");
}
void printsum()
{
    struct node *t = start3;
    printf("sum of both list:\n");
    while (t != NULL)
    {
        printf("%dx^%d", t->coff, t->exp);
        t = t->next;
        if (t)
            printf("+");
    }
    printf("\n");
}
int main()
{
    int choice, power;
    while (1)
    {
        printf("1. insert in 1st list\n");
        printf("2. insert in 2nd list\n");
        printf("3. traversal of both list\n");
        printf("4. sum\n");
        printf("5. printsum\n");
        printf("enter your choice:\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            insertin1st();
            break;
        case 2:
            insertin2nd();
            break;
        case 3:
            traversal();
            break;
        case 4:
            sum();
            break;
        case 5:
            printsum();
            break;
        case 6:
            return 0;
            break;
        default:
            break;
        }
    }

    return 0;
}