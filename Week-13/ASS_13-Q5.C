#include<stdio.h>
int main()
{
    int a,b,c;
    int choise;
  
    printf("enter a:");
    scanf("%d",&a);
    printf("enter b:");
    scanf("%d",&b);
    printf("enter c:");
    scanf("%d",&c);
      printf("enter choise:");
    scanf("%d",&choise);
    switch (choise)
    {
    case 1:
    if((a==b) && (a!=c))
    {
        printf("isoscalen tringle");
    }
    else 
    {
        printf("not isoscalen tringle");
    }
    break;

    case 2:
    if((a==b) && (b==c) && (c==a))
    {
        printf("equivalent tringle");
    }
    else
    {
        printf("not equivalent tringle");
    }
    break;

    case 3:
    if((a!=b) && (b!=c) && (c!=a))
    {
        printf("scalen tringle");
    }
    else
    {
        printf("not scalen tringle");
    }
    default:
    {
        printf("exit");
    }
    }
}

