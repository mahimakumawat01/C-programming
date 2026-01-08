#include <stdio.h>
void N_num(int n)
{
    printf("natural no. are:\n");
    for(int i=1;i<=n;i++)
    {
        printf("%d\n",i);
    } 

}
int main()
{
    int n;
    printf("enter no:");
    scanf("%d",&n);
    N_num(n);
    return 0;
}