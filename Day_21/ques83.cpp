#include<iostream>
#include<string>
#include<cctype>
using namespace std;
int main()
{
    string str;
    int countvowels=0,countconsonant=0;
    cout<<"enter a string : "<<endl;
    getline(cin, str);
    for(int i=0; i<str.length(); i++){
        if(str[i]=='a' || str[i]=='e'|| str[i]=='i'|| str[i]=='o'|| str[i]=='u'||
        str[i]=='A'|| str[i]=='E'|| str[i]=='I'|| str[i]=='O' || str[i]=='U')
{
countvowels++;
}
   else if (isalpha(str[i])){
    countconsonant++;
   }     
    }
    cout<<"vowels : "<<countvowels<<endl;

    cout<<"consonant : "<<countconsonant<<endl;
return 0;

}