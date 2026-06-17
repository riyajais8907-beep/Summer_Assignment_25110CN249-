#include<iostream>
using namespace std;


int fabonacci(int n)
{
    if(n<=1)
    return n;
    int c,a=0,b=1;
    for(int i=2;i<=n;i++)
    {
        cout<<a<<" ";
        c=a+b;
        a=b;
        b=c;
        
    }
    
}
int main()
{
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    
    cout<<"fabonacci series:";
    fabonacci(n);

    return 0;
}