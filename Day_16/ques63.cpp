#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int i,j,n,a[20],sum;
    cout<<"enter size of array:"<<endl;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
cout<<"enter the required sum="<<endl;
cin>>sum;

for(i=0; i<n; i++)
{
    for(j=i+1; j<n; j++)
    {
        if(a[i]+a[j]==sum){
            cout<<a[i]<<"+"<<a[j]<<"="<<sum<<endl;
        }
    }
}
return 0;
}