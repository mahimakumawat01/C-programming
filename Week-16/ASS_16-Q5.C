#include<stdio.h>
void cube_sum(int n)
{
   int i,s=0;
   for(i=1;i<=n;i++)
   {
       s=s+i*i*i;
   }
   printf("%d\n",s);
}
int main()
{
   int n;
   printf("enter no:");
   scanf("%d",&n);
   cube_sum(n);
   return 0;
}