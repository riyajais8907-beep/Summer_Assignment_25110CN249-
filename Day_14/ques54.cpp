#include<iostream>
using namespace std;
int main()
{
 int n,i,a[10],ele,fre=0;
 float avg;
 cout<<"enter the number n:"<<endl;
 cin>>n;
 for(i=0; i<n; i++)
 {
    cin>>a[i];
    
 }
 cout<<"enter element to check frequency:"<<endl;
 cin>>ele;
 for(i=0; i<n; i++)
 {
    if(a[i]==ele)
    {
        fre=fre+1;
    }
 }
 cout<<"frequency of elements:"<<fre<<endl;




return 0;

}