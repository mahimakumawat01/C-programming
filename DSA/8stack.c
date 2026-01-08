#include<stdio.h>
# define MAX 10
int main()
{
    int n,i,choise;
    n=-1;
    int arr[MAX];
    while (1)
    {
        printf("\n1.insert element\n2.display\n3.peek\n4.delete\n 5.exit\nenter your choise:");
     scanf("%d",&choise);
     switch (choise)
     {
     case 1:
        if(n==MAX-1)
        {        
            printf("array is full");
        } 
        else
        {
            n++;
            printf("enter element:\n");
            scanf("%d",&arr[n]);
        }
        break;
     case 2:
        if(n==-1)
        {
            printf("array is empty");
        }   
        else
        {
            printf("array elements are:\n");
            for(int i=0;i<=n;i++)
            {
                printf("%d\n",arr[i]);
            }
        }
        break;
     case 3:
         if(n==-1)
         {
            printf("array is empty");
         }
         else
         {
            printf("%d",arr[n]);
         }
         break;
     case 4:
         if(n==-1)
         {
            printf("array is empty");
         }
         else
         {
            n--;
            printf("element is deleted");
           
         }   
         break;
     case 5 :
         {
            return 0;
         }
     }  
    }
    return 0;
}