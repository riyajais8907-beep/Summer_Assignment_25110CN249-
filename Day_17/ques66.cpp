#include<iostream>
#include<set>
using namespace std;
int main()
{
int i,j,k,n,m,a[30],b[30],c[60],merge,temp;
cout<<"two no.: n and m:"<<endl;
cin>>n>>m;
for(i=0; i<n; i++)
{
    cin>>a[i];
    c[i]=a[i];
}
for (j=0; j<m; j++){
    cin>>b[j];
    c[n+j]=b[j];
}

cout<<"union of array:"<<endl;
merge= n+m;
cout<<merge<<endl;
for(k=0; k<(n+m); k++)
{
    if(a[i]==b[j])
    cout<<c[k]<<endl;
}
return 0;

}