#include<iostream>
using namespace std;
int main()
{
  int n;
    cout<<"Enter the number of rows: ";
    cin>>n;
    
    n=n+64;
  for(int i=65;i<n;i++)
  {
    for(int j=65;j<=(n+64)-i;j++)
    {
      cout<<"  ";
    }
    for(int k=65;k<=i;k++)
    {
      cout<<char(k)<<" ";
    }
    for(int l=i-1;l>=65;l--)
    {
      cout<<char(l)<<" ";
    }
    cout<<endl;
  }

    return 0;
}
