#include<iostream>
using namespace std;
int main()
{
 int n,i,a[10],sum=0;
 float avg;
 cout<<"enter the number n:"<<endl;
 cin>>n;
 for(i=0; i<n; i++)
 {
    cin>>a[i];
    sum=sum+a[i];
    
 }
 cout<<"sum of array:"<<sum<<endl;
 avg=sum/n;
 cout<<"average of array:"<<avg<<endl;



return 0;

}