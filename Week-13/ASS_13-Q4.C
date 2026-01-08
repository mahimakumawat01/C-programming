#include<stdio.h>
int main()
{
    int n;
    printf("enter no.:");+
    scanf("%d",&n);
    switch(n)
    {
        case 1:
        printf("GOOD MORNING");
        break;
        case 2:
        printf("HAVE A NICE DAY");
        break;
        case 3:
        printf("GOOD DAY");
        break;
        case 4:
        printf("HELLO");
        break;
        case 5:
        printf("DAER RAJ");
        break;
        case 6:
        printf("HI");
        break;
        case 7:
        printf("YOU ARE SO BEAUTIFUL");
        default:
        printf("GREAT MORNING");        
    }
    return 0;
}