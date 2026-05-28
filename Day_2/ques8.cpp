#include<iostream>
using namespace std ;

int main()
{
    int n,r,rev=0,n1;
    cout<<"enter a number"<<endl;
    cin>> n;
    n1 = n;
    do
    {
        r=n%10;
        rev = rev*10 +r;
        n=n/10;
    } while(n>0);
    if(rev==n1)
    {
        cout<<"number is a palindrome number"<<endl;

    }
    else
    {
        cout<<"number is not a palindrome number"<<endl;
    }
    return 0;
}

