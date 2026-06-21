#include<iostream>
#include<algorithm>
using namespace std;


void leftrotatingarray(int a[],int n)
{
   int temp=a[0];
   for (int i = 0; i < n; i++)
   {
    a[i]=a[i+1];
    
   }
   a[n-1]=temp;
   for(int i=0; i<n; i++)
   {cout<<a[i]<<endl;
}
}



int main()
{
    int n,i,a[30];
    cout<<"Enter the number: ";
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    cout<<"left rotatong array :"<<endl;
    leftrotatingarray(a,n);
    

    return 0;
}