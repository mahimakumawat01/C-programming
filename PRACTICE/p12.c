#include<stdio.h>
void add(int *a)
{
     printf("add is %d",a);
}
int main()
{
    int n=34;
    printf("add is %d\n",&n);
    add(&n);
    return 0;
}