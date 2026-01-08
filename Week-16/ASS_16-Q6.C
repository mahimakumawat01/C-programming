#include<stdio.h>
void fact(int n)
{
   int i,s=1;
   for(i=1;i<=n;i++)
   {
       s=s*i;
   }
   printf("%d\n",s);
}
int main()
{
   int n;
   printf("enter no:");
   scanf("%d",&n);
   fact(n);
   return 0;
}