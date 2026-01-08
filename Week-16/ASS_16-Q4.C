#include<stdio.h>
void squre_sum(int n)
{
   int i,s=0;
   for(i=1;i<=n;i++)
   {
       s=s+i*i;
   }
   printf("%d\n",s);
}
int main()
{
   int n;
   printf("enter no:");
   scanf("%d",&n);
   squre_sum(n);
   return 0;
}