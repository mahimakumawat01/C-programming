#include<stdio.h>
void N_sum(int n)
{
   int i,s=0;
   for(i=1;i<=n;i++)
   {
       s=s+(2*i-1);
   }
   printf("%d\n",s);
}
int main()
{
   int n;
   printf("enter no:");
   scanf("%d",&n);
   N_sum(n);
   return 0;
}