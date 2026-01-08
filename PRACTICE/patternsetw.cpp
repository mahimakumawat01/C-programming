#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        
        cout<< setw(n-i+1);
        for(int j=1;j<=i;j++)
        {
            cout<<"*";
        }
        printf("\n");
    }
    
    return 0;
}