#include<iostream>
using namespace std;
int main()
{
    int n,r,rev=0;
    cout<<"enter a number"<<endl;
    cin>> n ;
    do
    {
        r = n%10;
        rev = rev * 10 + r ;
        n = n/10;


        /* code */
    } while (n>0);
cout<<"reverse of a number is "<<rev<<endl;
return 0;
}