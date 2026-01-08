#include<stdio.h>
void f_series(int n,int x)
{
   int i=1,a=0,b=1,s=0;
   while(i<=n)
   {
      s=a+b;
      a=b;
      b=s;
      if(x==s)
      {
      break;
      }
      else
      i++;
   }

   if(x==s)
   {
    printf("\na given number is present in the Fibonacci series ");
   }
   else
   {
    printf("\na given number is not present in the Fibonacci series ");
   }

}
int main()
{
   int n;
   printf("enter no:");
   scanf("%d",&n);
   int x;
   printf("which no hou want to check:");
   scanf("%d",&x);
   f_series(n,x);
   return 0;
}