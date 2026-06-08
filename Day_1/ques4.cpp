#include<iostream>
using namespace std;
int main()
{
    int n,r,count = 0;
    cout<<"Enter a number n: "<<endl;
    cin>>n;
    while(n>0)
    {
        n = n/10;
        
        count = count + 1;
        
    }
    
    
    cout<<"count is: "<<count<<endl;
    return 0;
}