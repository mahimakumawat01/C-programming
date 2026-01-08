# include <stdio.h>
int main()
{
    //a=number, b=once place digit, c=10th place digit
    int a,b ,c;
    
    printf("entre number");
    scanf("%d",&a);

    b=a%10;
    printf("ans is %d\n",b);
    
    c=((a%100)/10);
    printf("10th unitn digit is %d",c);

    return 0;
}