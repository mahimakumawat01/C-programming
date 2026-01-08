#include<stdio.h>
#define MAX 10
int top =-1;
int a[MAX];
void push(int n)
{
    top++;
    a[top]=n;
    printf("%d is inserted in stack at %d\n",n,top);
}
void pop()
{
    top--;
    printf("top element is deleted\n");
}
void peek()
{
    printf("%d is present on the top\n",a[top]);
}
void display()
{
    printf("all elements of stack:\n");
    for(int i=top;i>=0;i--)
    {
        printf("%d\n",a[i]);
    }
}
void size()
{
    printf("%d is the size od stack\n",top+1);
}
int main()
{   
    push(5);
    push(6);
    push(7);
    display();
    peek();
    pop();
    display();
    size();
    return 0;
}