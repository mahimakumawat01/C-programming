#include<iostream>
using namespace std;
int main()
{
    int a=67;
    int *j=&a;
    int**k=&j;
    cout<<("value at a is %d",**k);
    return 0;
}