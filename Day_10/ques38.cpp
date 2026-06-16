#include<iostream>
using namespace std;
int main()
{
  int n;
    cout<<"Enter the number of rows: ";
    cin>>n;
  for(int i=n;i>=1;i--)
  {
    for(int j=n-i;j>=1;j--)
    {
      cout<<" " ;
    }
    for(int k=i;k>=1;k--)
    {
      cout<<"* " ;
    }
    cout<<endl;
  }

    return 0;
}
