#include<iostream>
#include<algorithm>
using namespace std;


void rightrotatingarray(int a[],int n)
{
   int temp=a[n-1];
   for (int i =n-1; i>0; i--)
   {
    a[i]=a[i-1];
    
   }
   a[0]=temp;
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
    cout<<"right rotatong array :"<<endl;
    rightrotatingarray(a,n);
    

    return 0;
}