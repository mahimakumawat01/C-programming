#include <stdio.h>
int main ()
{
    int year;
    printf("entre year");
    scanf("%d",&year);
    if (year%4==0)
    {
        printf("leap year");
    }
    else 
    {
        printf("normal year");
    }
    return 0;
}