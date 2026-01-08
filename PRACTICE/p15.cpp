#include<iostream>
using namespace std;
void add(int *m,int *n)
{
    *m=*m+*n;
    *n=(*m)/2;
}
int main()
{
    int a=454,b=234;
    add(&a,&b);
    printf("%d\n",a);
    printf("%d",b);
    return 0;
}