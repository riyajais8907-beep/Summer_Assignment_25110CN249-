#include<iostream>
using namespace std;
int main()
{
int i,j,n,m,a[30],b[30];
cout<<"two no.: n and m:"<<endl;
cin>>n>>m;
cout<<"enter the element of array 1"<<endl;
for(i=0; i<n; i++)
{
    cin>>a[i];
    
}
cout<<"enter the element of array 2"<<endl;
for (j=0; j<m; j++){
    cin>>b[j];
    
}
cout<<"common element in array:"<<endl;
for(i=0; i<n; i++){
    for(j=0; j<m; j++){
        if(a[i]==b[j]){
        cout<<a[i]<<endl;
        }
    }
}

return 0;

}