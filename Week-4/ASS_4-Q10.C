#include <stdio.h>
int main()
{
    // let f be the temprature of city in fahrenite
    int f,c;
    printf("temp in fahrenite ");
    scanf("%d",&f);
    c=(f-32)*5/9;
    printf("temp in degree celcius %d",c );
    return 0;

}