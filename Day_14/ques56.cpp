#include<iostream>
using namespace std;
int main()
{
 int n,i,j,a[20];
 float avg;
 cout<<"enter the number n:"<<endl;
 cin>>n;
 for(i=0; i<n; i++)
 {
    cin>>a[i];
    
 }
 cout<<"duplicates elements:"<<endl;
 for(i=0;i<n; i++)
 {
    for(j=i+1; j<n; j++)
    {
        if(a[i]==a[j])
        {
            cout<<a[i]<<endl;
            break;
        }
    }
 }
return 0;

}