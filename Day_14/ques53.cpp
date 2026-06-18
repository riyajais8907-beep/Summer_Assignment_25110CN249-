#include<iostream>
using namespace std;
int main()
{
 int n,i,a[10],ele,loc;
 float avg;
 cout<<"enter the number n:"<<endl;
 cin>>n;
 for(i=0; i<n; i++)
 {
    cin>>a[i];
 }
 cout<<" put element to search in array :"<<endl;
 cin>>ele;
 for(i=0; i<n; i++)
 {
    if(a[i]==ele)
    {
        loc=i+1;
        break;
    }
 }
 if(loc==-1)
 {
    cout<<"element not found"<<endl;
 }
 else{
    cout<<"element found at :"<<loc  <<"location"<<endl;
 }






return 0;
}