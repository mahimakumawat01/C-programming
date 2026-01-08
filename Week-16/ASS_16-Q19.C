#include <stdio.h>
void num(int *n)
{ 
   *n=4;
    printf("%d",*n);
}
int main()
{
  int n=3;
  num(&n);

}