#include<iostream>
using namespace std;
int main()
{
    int n,sum=0,r;
    cout<<"enter a number"<<endl;
    cin>>n;
    do
    {
        r = n%10;
        sum = sum + r;
        n = n/10;
    }
    while(n>0);
cout<<"sum of the digits of a number is "<<sum<<endl;
return 0;
}