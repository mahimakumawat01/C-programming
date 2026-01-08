#include<stdio.h>
#include<ctype.h>
int main()
{
    char ch;
    scanf("%c",&ch);
    if(ch >='a' && ch<='z')
    {
       ch= toupper(ch);
        printf("now ch is: %c",ch);
    }
    else if (ch >= 'A' && ch <= 'Z') 
    {
       ch= tolower(ch);
        printf("now ch is: %c",ch);
    }
    else
    {
        printf("ch is: %c",ch);
    }
}