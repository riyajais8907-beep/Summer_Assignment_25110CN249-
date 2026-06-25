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
  cout<<"sort array using selection sort="<<endl;
  for(i=0; i<n-1; i++){
    int min =i;
    
    for(j=i+1; j<n; j++){
        if(a[min]>a[j]){
            min=j;
        }

    }
    int temp=a[i];
    a[i]=a[min];
    a[min]=temp;
  }
  for(i=0; i<n; i++){
    cout<<a[i]<<endl;
  }
  return 0;
}