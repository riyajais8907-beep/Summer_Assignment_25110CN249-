#include<iostream>
using namespace std;
int main()
{
 int n,i,a[10],max,ele;
 float avg;
 cout<<"enter the number n:"<<endl;
 cin>>n;
 for(i=0; i<n; i++)
 {
    cin>>a[i];
 }
 max=a[0];
 ele=-1;
  for(i=0; i<n; i++)
 {
    if(max<a[i])
    {
        max=a[i];
    }
 }
 cout<<"max of the element:"<<max<<endl;
 for(i=0; i<n; i++)
 {
    if(a[i]!=max && ele<a[i])
    {
        ele=a[i];
    }
 }
 cout<<"second largest element of the array is :"<<ele<<endl;
 







return 0;
}