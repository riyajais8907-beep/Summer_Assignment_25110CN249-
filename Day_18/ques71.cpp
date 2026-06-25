#include<iostream>
using namespace std;

int main()
{
  int i,n,j,a[20],ele;
  cout<<"enter a number n:"<<endl;
  cin>>n;
  for(i=0; i<n; i++)
  {
    cin>>a[i];
  }
cout<<"enter the element to be found:"<<endl;
cin>>ele;
int beg=0;
int end=n-1;
int mid=(beg+end)/2;
while(beg<=end&&ele!=a[mid]){
    if(ele<a[mid]){
        end=mid-1;
    }
    else if(ele>a[mid]){
        beg=mid+1;
    }
    mid=(beg+end)/2;
}
if(ele==a[mid]){
    cout<<"element location:"<<mid+1<<endl;
}
else{
    cout<<"search unsuccessful"<<endl;
}





  return 0;
}