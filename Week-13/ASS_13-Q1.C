#include<stdio.h>
int main()
{
    int n;
    printf("enter no.:");
    scanf("%d",&n);
    switch(n)
    {
        case 1:
        printf("31 days");
        break;
        case 2:
        printf("28 dayes");
        break;
        case 3:
        printf("31 dayes");
        break;
        case 4:
        printf("30 dayes");
        break;
        case 5:
        printf("31 dayes");
        break;
        case 6:
        printf("30 dayes");
        break;
        case 7:
        printf("31 dayes");
        break;
        case 8:
        printf("31 dayes");
        break;
        case 9:
        printf("30 dayes");
        break;
        case 10:
        printf("31 dayes");
        break;
        case 11:
        printf("30 dayes");
        break;
        case 12:
        printf("31 dayes");
        default:
        printf("invalid");     
    }
    return 0;
}