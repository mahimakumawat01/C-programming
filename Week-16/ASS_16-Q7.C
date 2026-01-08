#include<stdio.h>
void countd(int n)
{
   int i,s=0;
   for(i=1;i<=n;i++)
   {
       n=n/10;
       s++;
   }
   printf("%d\n",s);
}
int main()
{
   int n;
   printf("enter no:");
   scanf("%d",&n);
   countd(n);
   return 0;
}