#include<stdio.h>
int main()
{
    int n=55;
    int *t=&n;
    int **y=&t;
    printf("value of n: %d\n",n);
    printf("add of n: %d\n",&n);
    printf("add of n:%d\n",t);
    printf("value at *t: %d\n",*t);
    printf("**y %d\n",**y);
    printf("*y %d\n",*y);
    printf("y %d\n",y);
    printf("&t %d\n",&t);
    return 0;
}