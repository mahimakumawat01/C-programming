#include<stdio.h>
void f_series(int n)
{
   int i=1,a=0,b=1,s=0;
   while(i<=n)
   {
      s=a+b;
      a=b;
      b=s;
      printf("%d,",s);
      i++;
   }
}
int main()
{
   int n;
   printf("enter no:");
   scanf("%d",&n);
   f_series(n);
   return 0;
}