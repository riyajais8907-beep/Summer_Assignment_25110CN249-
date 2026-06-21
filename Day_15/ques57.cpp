#include<iostream>
using namespace std;


void reversearray(int a[], int n)
{
    int i;
    for(i=n-1; i>=0; i--)
    {
        cout<<a[i]<<endl;
    }
    
    
}
int main()
{
    int i,n,a[20];
    cout<<"Enter the number: ";
    cin>>n;
    for(i=0; i<n; i++)
    {
       cin>>a[i]; 
    }
    cout<<"print reversearray: "<<endl;
    reversearray(a,n);
    

    return 0;
}