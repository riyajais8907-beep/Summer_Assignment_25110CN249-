#include<iostream>
using namespace std;

int main()
{
  int i,n,j,a[20],freq=0;
  cout<<"enter a number n:"<<endl;
  cin>>n;
  for(i=0; i<n; i++)
  {
    cin>>a[i];
  }
  int element=a[0];
  for(i=0; i<n; i++)
  {
    int count=0;
    for( j=0; j<n; j++)
    {
        if(a[i]==a[j])
        {
            count++;
        }
    }
    if (count>freq){
        freq = count;
        element = a[i];
    }
}
cout<<"element"<<element<<" with maximum frequency is:"<<freq<<endl;
  


return 0;
}