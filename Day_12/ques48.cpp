#include<iostream>
using namespace std;


int perfect(int n)

    
{
    int  p,i,sum=0;
    
    for(i=1; i<n; i++)
    {
    p=n%i;
    if(p==0)
    {
        sum=sum+i;
    }
    }
    cout<<"sum: "<<sum<<endl;
    if(sum==n)
    {
        return 1;
    }
    else
    {
        return 0;
    }
    return 0;

}


int main()
{
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    if(perfect(n))
    {
    cout<<"The  no. is perfect"<<endl;
    }
    else{
        cout<<"the no. is not perfect"<<endl;
    }

    return 0;
}