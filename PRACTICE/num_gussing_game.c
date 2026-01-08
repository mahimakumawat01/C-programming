#include<stdio.h>
#include<stdio.h>
#include<time.h>
int main()
{
    
    srand(time(0));
    int randnum= (rand() % 100) + 1;
    printf("rand no is: %d\n",randnum);
    int a=0;
    int gussednum;
    do
    {
        printf("no of gusses is:");
        scanf("%d",&gussednum);
      
        if(gussednum < randnum)
        {
           printf("HIGHER NO PLZ\n");
        }
        else if(gussednum > randnum)
        {
            printf("LOWER NO PLZ\n");
        }
        else
        {
            printf("CONGRATS\n");
        }
        a++;
    } while(gussednum!=randnum);

    printf("no of gusses %d ",a);
    
   
    

}