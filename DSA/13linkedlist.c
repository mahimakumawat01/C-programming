#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node* next;
};
struct node* start = NULL;
void insertatfirst(int data)
{

    struct node* newnode = (struct node* ) malloc(sizeof(struct node));
    newnode->data = data;
    newnode->next = start;
    start = newnode;
}
void printlist()
{
    struct node* t =start;
    while(t!=NULL)
    {
        printf("%d->\n",t->data);
        t=t->next;
    }
}
int main() {
    // Insert nodes at the beginning
    insertatfirst(10);
    insertatfirst(20);
    insertatfirst(30);
    printlist();
    return 0;
}
