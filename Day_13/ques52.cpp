#include<iostream>
using namespace std;
int main()
{
 int n,i,a[10],even,odd,c=0,b=0;
 float avg;
 cout<<"enter the number n:"<<endl;
 cin>>n;
 for(i=0; i<n; i++)
 {
    cin>>a[i];
 }
 for(i=0; i<n; i++)
 {
    if(a[i]%2==0)
    {
        c++;
    }
    else 
    {
        b++;
    }
 }
 cout<<"number of even element in array:"<<c<<endl;
 cout<<"number of odd element in array :"<<b<<endl;



return 0;

}