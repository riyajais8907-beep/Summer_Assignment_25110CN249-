#include<iostream>
using namespace std;

int main()
{
  int i,n,j,a[20];
  cout<<"enter a number n:"<<endl;
  cin>>n;
  for(i=0; i<n; i++)
  {
    cin>>a[i];
  }
  cout<<"sort the array using bubble sort:"<<endl;
  for(i=0; i<n; i++){
    for(j=0; j<n; j++){
        if(a[j]>a[j+1]){
            int temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
        }
    }
  }
  for(i=0; i<n; i++){
    cout<<a[i]<<endl;
  }
  return 0;
}