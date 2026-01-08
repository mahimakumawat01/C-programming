#include<stdio.h>
int num(int n,int t)
{    int c,h=0;
    while(n!=0)
     {
         n=n/10;
         h++;
     }
     if(t==h)
     {
        
        return 1;
     }
     else
     {
        return 0;
     }
}
int main()
{
    int n,result,t;
    printf("enter no:");
    scanf("%d",&n);
    printf("enter digit:");
    scanf("%d",&t);
    result=num(n,t);
    printf("%d",result);

}