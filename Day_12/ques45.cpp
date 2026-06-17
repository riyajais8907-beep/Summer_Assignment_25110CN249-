#include<iostream>
using namespace std;


int palindrome(int n)
{
   int n1=n;
   int rev=0;
    do
    {
       int r=n%10;
        rev = rev*10 +r;
        n=n/10;
    } while(n>0);
    if( rev==n1)
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
    if(palindrome(n))
    {
    cout<<"The  no. is palindrome"<<endl;
    }
    else{
        cout<<"the no. is not palindrome"<<endl;
    }

    return 0;
}