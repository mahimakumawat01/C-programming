#include<stdio.h>
int main()
{
   int n;
   printf("enter no.:");
   scanf("%d",&n);
   switch (n)
   {
   case 1:
   printf("burger");
   break;
   case 2:
   printf("french fries");
   break;
   case 3:
   printf("pizza");
   break;
   case 4:
   printf("sandwiches");
   default:
   printf("entre some valid choice");
   }
    if(n<=4)
    {
      int i,j;
      printf("\nenter quantity:");
      scanf("%d",&i);
      printf("enter price of ech food:");
      scanf("%d",&j);
      printf("total amount:%d",i*j);
    }  
    return 0;
}