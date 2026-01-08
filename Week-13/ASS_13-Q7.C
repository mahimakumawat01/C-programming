#include<stdio.h>
int main()
{
    int choise;
    printf("enter choise:");
    scanf("%d",&choise);
    switch (choise)
    {
    case 1:
    printf("leap year");
    break;
    
    default:
    printf("not leap year");
    break;
    }
}