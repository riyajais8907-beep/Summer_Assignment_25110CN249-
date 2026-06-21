#include<iostream>
#include<algorithm>
using namespace std;


void movingzeroes(int a[],int n)
{
int j=0;
   for (int i = 0; i < n; i++)
   {
    if(a[i]!=0){
        int temp=a[i];
        a[i]=a[j];
        a[j]=temp;
        j++;
    }
   }
   for(int i=0; i<n; i++)
   {
    cout<<a[i]<<endl;
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
    cout<<"moving zeroes:"<<endl;
    movingzeroes(a,n);
    

    return 0;
}