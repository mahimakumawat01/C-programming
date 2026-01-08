#include<stdio.h>
#include<process.h>
#define MAX 10
int main()
{
    int a[MAX],i,n,choice;
    n=-1;
        while(1)
        {
        printf("\n1.Insert");
        printf("\n2.Display");
        printf("\n3.Exit");
        printf("\n\tEnter Your Choice...");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                if(n==MAX-1)
                    printf("\nArray Is Full");
                else
                {
                    n++;
                    printf("\nEnter Element : ");
                    scanf("%d",&a[n]);
                }
            break;
            case 2:
                if(n==-1)
                    printf("\nArray Is Empty");
                else
                {
                    printf("\nArray Elements are ");
                    for(i=0;i<=n;i++)
                        printf("\n\t\t%d",a[i]);
                }
            break;
            case 3:
                return 0;
        }
    }
   
}