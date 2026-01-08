#include <stdio.h>
#include <stdlib.h>
int main()
{
    int choice,a,b;
    printf("enter a:");
    scanf("%d",&a);
    printf("enter b:");
    scanf("%d",&b);
    printf("\n1 addition\n 2 subraction\n 3 multiply\n 4 division\n 5 exit \nenter your choice:");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
        printf("addition is %d",a+b);
        break;
        case 2:
        printf("subraction is %d",a-b);
        break;
        case 3:
        printf("multiplication is %d",a*b);
        break;
        case 4:
        printf("division is %d",a/b);
        break;
        case 5:
        exit(0);
        default:
        printf("invalid");
    }
    return 0;
}