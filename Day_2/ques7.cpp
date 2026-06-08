#include<iostream>
using namespace std;
int main()
{
    int n,r,p=1 ;
    cout<<"enter a number"<<endl;
    cin>> n ;
    do
    {
        r = n%10 ;
        p = p*r;
        n = n/10;

    } while(n>0);
    cout<<"product of the digits of a number is "<<p<<endl;
    return 0;
}