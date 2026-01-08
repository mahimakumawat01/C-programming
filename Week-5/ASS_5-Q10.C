#include <stdio.h>
int main()
{
    // markes in all subjects
    int a,b,c,d,e;
    printf("marks in hindi");
    scanf("%d",&a);
    printf("marks in english");
    scanf("%d",&b);
    printf("marks in maths");
    scanf("%d",&c);
    printf("marks in physics");
    scanf("%d",&d);
    printf("marks in chemistry");
    scanf("%d",&e);
    
    printf("total marks%d\n",a+b+c+d+e);
   int percentage=(a+b+c+d+e)/5;
   printf("percentage is%d",percentage);

    
    
    return 0;


}