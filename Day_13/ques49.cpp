#include<iostream>
using namespace std;
int main()
{
 int n,i,a[10];
 cout<<"enter the number n:"<<endl;
 cin>>n;
 for(i=0; i<n; i++)
 {
    cin>>a[i];

 }
cout<<"print array:"<<endl;
for(i=0; i<n; i++)
{
    cout<<a[i]<<endl;
}
return 0;

}