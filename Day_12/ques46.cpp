#include<iostream>
#include<cmath>
using namespace std;


int armstrong(int n)
{
   int sum=0 ,c=0,n1,n2,temp;
 n1=n;
    n2=n;
    temp=n;
    while(temp>0)
    {
        temp=temp/10;
        c++;
    }
        while(n1>0)
        {
           int r=n1%10;
            sum=sum + pow(r,c);
            n1=n1/10;

        }
        

        
    
    if(sum==n2)
    {
    return 1;
    }
    else
    {
        return 0;
    }
    
}
    




int main()
{
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    if(armstrong(n))
    {
    cout<<"The  no. is armstrong"<<endl;
    }
    else 
    {
        cout<<"the no. is not armstrong"<<endl;
    }

    return 0;
}