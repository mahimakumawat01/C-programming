#include<stdio.h>
void reverse(int n)
{
   int i,s=0;
   while(n!=0)
   {
        int a;
        a=n%10;
        n=n/10;
        s=s*10+a;
   }
   printf("%d\n",s);
}
int main()
{
   int n;
   printf("enter no:");
   scanf("%d",&n);
   reverse(n);
   return 0;
}