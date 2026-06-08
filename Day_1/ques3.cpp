#include<iostream>
using namespace std;
int main()
{
    int i=1,n,fact = 1;
    cout<<"Enter a number n: "<<endl;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
       
    }
    
    
    cout<<"Factorial is: "<<fact<<endl;
    return 0;
}