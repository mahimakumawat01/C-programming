// Hi Yatharth I am here to serve you
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int winner(int j, int p, char *c)
{
    if (p > j)
    {
        printf("Score -->\n%s = %d\nJeson = %d\ncongratulationsssss!!! %s you win", c, p, j, c);
    }
    else if (j > p)
    {
        printf("Score -->\n%s = %d\nJeson = %d\nJeson wins try next time %s", c, p, j, c);
    }
    else
    {
        printf("Score -->\n%s = %d\nJeson = %d\nMatch DRAW", c, p, j);
    }
}

int rps(int a, char *c)
{
    int b, z, j = 0, p = 0;
    for (int i = 1; i <= a; i++)
    {
    restart:
        printf("Rock-paper-scissor....\n%s1)Rock\n2)Paper\n3)Scissor\nchose option :- ", c);
        scanf("%d", &z);
        if (z == 1)
        {
            printf("%s:- Rock\n", c);
        }
        else if (z == 2)
        {
            printf("%s:- Paper\n", c);
        }
        else if (z == 3)
        {
            printf("%s:- Scissor\n", c);
        }
        else
        {
            printf("OPTION YOU CHOOSE IS INVALID\n");
            goto restart;
        }
        srand(time(NULL));
        b = rand() % 3;
        if (b == 0)
        {
            printf("Jeson\n:- Rock\n");
            if (z == 1)
            {
                j++;
                p++;
            }
            else if (z == 2)
            {
                p++;
            }
            else
            {
                j++;
            }
        }
        else if (b == 1)
        {
            printf("Jeson\n:- Paper\n");
            if (z == 1)
            {
                j++;
            }
            else if (z == 2)
            {
                j++;
                p++;
            }
            else
            {
                p++;
            }
        }
        else
        {
            printf("Jeson\n:- scissor\n");
            if (z == 1)
            {
                p++;
            }
            else if (z == 2)
            {
                j++;
            }
            else
            {
                j++;
                p++;
            }
        }
    }
    winner(j, p, c);
}

int main()
{
    char c[20];
    int n;
    printf("Heyyy! Welcom to Rock-Paper-scissor\nEnter your name :- ");
    fgets(c, sizeof(c), stdin);
    printf("Enter number of matches :- ");
    scanf("%d", &n);
    rps(n, c);

    return 0;
}