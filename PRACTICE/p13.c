#include <stdio.h>
void add(int *a)
{
    *a=*a * 10;
}
int main()
{
    int n=34;
    scanf("%d",&n);
    printf("add is %d\n",&n);
    add(&n);
    printf("add is %d\n", n);

    return 0;
}