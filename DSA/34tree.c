#include <stdio.h>
#include <stdlib.h>
struct node
{
    struct node *left;
    int data;
    struct node *right;
};

struct node *root = NULL;

void insert()
{
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    printf("enter data: ");
    scanf("%d", &newnode->data);
    struct node *t = root;
    newnode->left = NULL;
    newnode->right = NULL;
    if(root == NULL)
    {
        root = newnode;
    }
    else
    {

    }
}

void inorder()
{
}
void preorder()
{
}
void postorder()
{
}
int main()
{
    int choice;
    while (1)
    {
        printf("1. insertion\n");
        printf("2. traversal inorder\n");
        printf("3. traversal preorder\n");
        printf("4. traversal postorder\n");
        printf("5. delete\n");
        printf("enter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            insert();
            break;
        case 2:
            inorder();
            break;
        case 3:
            preorder();
            break;
        case 4:
            postorder();
            break;
        default:
            break;
        }
    }
}