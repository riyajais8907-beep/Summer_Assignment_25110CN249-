#include<iostream>
using namespace std;
int main()
{
 int n,i,a[10],min,max;
 float avg;
 cout<<"enter the number n:"<<endl;
 cin>>n;
 for(i=0; i<n; i++)
 {
    cin>>a[i];
 }
 min=a[0];
 max=a[0];
 for(i=0; i<n; i++)
 {
 if(min>a[i])
 {
    min=a[i];
 }
 else if(max<a[i])
 {
    max=a[i];
 }
}
cout<<"maximaum and minimum of a no. is :"<<max<<" and "<<min<<endl;
 



return 0;

}