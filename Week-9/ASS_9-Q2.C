# include <stdio.h>
int main()
{
    int hindi, english, maths, science, social;

    printf("marks of hindi\n");
       scanf("%d",&hindi);

    printf("marks of english\n");
      scanf("%d",&english);

        printf("marks of maths \n");
        scanf("%d",&maths);

    printf("marks of science\n");
     scanf("%d",&science);

    printf("marks of social\n");
        scanf("%d",&social);

int sum=hindi + english + maths + science +social ;
printf("sum is %d",sum);

if (sum>33 )
{
    printf("pass\n");
    printf("print no. is passed%d",sum);
}
else
{
    printf("fail");
    
}
return 0;
}