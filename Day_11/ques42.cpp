#include<iostream>
using namespace std;


int max(int a, int b)
{
    if(a>b)
    {
        return a;
    }
    else
    {
        return b;
    }
    return max(a,b);
}
int main()
{
    int a,b;
    cout<<"Enter the first number: ";
    cin>>a;
    cout<<"Enter the second number: ";
    cin>>b;
    cout<<"The maximum of "<<a<<" and "<<b<<" is: "<<max(a,b)<<endl;

    return 0;
}