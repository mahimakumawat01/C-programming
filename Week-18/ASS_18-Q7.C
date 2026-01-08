#include <stdio.h>
int main()
{
    int n,ch=65;
    printf("enter no of rows:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        if(i%2!=0)
        {
        for(int j=1;j<=i;j++)
        {  if(j%2!=0)
            {
            printf("%c",ch);
            ch++;
            }
            else
            {
                printf("%c",ch+32);
                ch++;
            }
        }
        }
        else
        {
            for(int j=1;j<=i;j++)
            {
                if(j%2==0)
                {
                    printf("%c",ch);
                    ch++;
                }
                else
                {
                    printf("%c",ch+32);
                    ch++;
                }
            }
        }
       
        printf("\n");
    }
    return 0;
}