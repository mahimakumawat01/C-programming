#include<stdio.h>
int prime_no(int num1,int num2)
{
     for(int i=1;)
     {
            if(num1%i==0 || num2%i==0)
            {
               printf("%d,%d",num1,num2);
            }
     }
      return 1;
   
}
int main()
{
   int num1,num2,result;
   printf("enter no:");
   scanf("%d",&num1);
   printf("enter no");
   scanf("%d",num2);
   result = prime_no(num1,num2);
   printf("%d",result);
   return 0;
}