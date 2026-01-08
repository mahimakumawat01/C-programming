#include<stdio.h>
void O_num(int n)
{
    for(int i=1;i<=n;i++)
    {
        printf("%d\n",i);
        i++;
    }
}
int main()
{ 
    int n;
    printf("enter no:");
    scanf("%d",&n);
    O_num(n);
    return 0;
}