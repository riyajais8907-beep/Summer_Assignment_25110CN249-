#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str;
    string reverse="";
    cout<<"enter a string : "<<endl;
    getline(cin, str);
    int n= str.length();
    for(int i=n-1; i>=0; i--)
    reverse =reverse +  str[i];
    cout<<"reverse of string: "<<reverse<<endl;
    return 0;

}