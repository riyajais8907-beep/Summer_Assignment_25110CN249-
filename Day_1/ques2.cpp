#include<iostream>
using namespace std;
int main()
{
    int i=1,n,table,sum=0;
    cout<<"Enter a number n: "<<endl;
    cin>>n;
    for(i=1;i<=10;i++)
    {
        table=n*i;
        cout<<"Table is: "<<table<<endl;
    }
    
    return 0;
}