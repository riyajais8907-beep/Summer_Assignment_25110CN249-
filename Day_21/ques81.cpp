#include<iostream>
#include<string>
using namespace std;
int main()
{
   string s;
   cout<<"enter string"<<endl;
   getline(cin, s);//replace cin by getline function
   // so that the space between character can't cause problems
   int len =0;
   for(char c:s)len++;
   cout<<"length:"<<len<<endl;
   return 0;
}